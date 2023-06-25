modded class FP_ANOMALY
{
    protected ref AreaDamageBase m_AreaDamage;
    protected FP_ANOMALY_ACTIVE m_Active;
    protected ref Timer m_HeatingTimer;
    protected bool IsActive = false;
    ref array<Object> nearest_objects = new array<Object>;
    ref array<CargoBase> proxy_cargos = new array<CargoBase>;
    const float PARAM_HEAT_RADIUS = 10.0;
    const float PARAM_HEAT_THROUGH_AIR_COEF = 0.28; //0.035;
    const float TEMPERATURE = 1226.0;

    void FP_ANOMALY()
    {
        if (GetGame().IsServer())
        {
            IsActive = false;
            m_HeatingTimer = new Timer(CALL_CATEGORY_SYSTEM);
            GetGame().GetCallQueue(CALL_CATEGORY_GAMEPLAY).CallLater(Delete, 15000, false);
        }
    }

    void ~FP_ANOMALY()
    {
        if (m_AreaDamage)
        {
            m_AreaDamage.Destroy();
        }

        m_HeatingTimer.Stop();
    }

    void Initialisation()
    {
        if (GetGame().IsServer())
        {
            SetVisualsActive();
            GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(CreateDamageTrigger, 2000, false);
        }
    }

    override void EEInit()
    {
        if (GetGame().IsServer())
        {
            super.EEInit();
            Initialisation();
        }
    }

    void Delete()
    {
        if (GetGame().IsServer())
        {
            GetGame().ObjectDelete(this);
        }
    }

    protected void CreateDamageTrigger()
    {
        if (GetGame().IsServer())
        {
            DestroyDamageTrigger();

            m_AreaDamage = new AreaDamageFP(this);
            m_AreaDamage.SetExtents("-2 -2 -2", "2 2 2");
            m_AreaDamage.SetHitZones({ "Torso", "LeftHand", "LeftLeg", "LeftFoot", "RightHand", "RightLeg", "RightFoot" });
            m_AreaDamage.SetAmmoName("FP_Damage");
            m_AreaDamage.Spawn();

            GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(RestartDamageTrigger, 250, false);
        }
    }

    protected void DestroyDamageTrigger()
    {
        if (GetGame().IsServer())
        {
            if (m_AreaDamage)
            {
                m_AreaDamage.Destroy();
            }
        }
    }

    protected void RestartDamageTrigger()
    {
        if (GetGame().IsServer())
        {
            GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(CreateDamageTrigger, 250, false);
        }
    }

    protected void SetVisualsActive()
    {
        if (GetGame().IsServer())
        {
            m_Active = FP_ANOMALY_ACTIVE.Cast(GetGame().CreateObject("FP_ANOMALY_ACTIVE", this.GetPosition(), false));
        }
    }

    protected void TransferHeatTimer()
    {
        if (GetGame().IsServer())
        {
            m_HeatingTimer.Run(2, this, "TransferHeatToNearPlayers", NULL, true);
        }
    }

    protected void TransferHeatToNearPlayers()
    {
        float distance;
        nearest_objects.Clear();
        proxy_cargos.Clear();

        GetGame().GetObjectsAtPosition(GetPosition(), PARAM_HEAT_RADIUS, nearest_objects, proxy_cargos);

        for (int i = 0; i < nearest_objects.Count(); i++)
        {
            Object nearest_object = nearest_objects.Get(i);

            if (nearest_object.IsInherited(PlayerBase))
            {
                PlayerBase player = PlayerBase.Cast(nearest_object);
                distance = vector.Distance(player.GetPosition(), GetPosition());
                distance = Math.Max(distance, 0.1);

                float temperature = TEMPERATURE * (PARAM_HEAT_THROUGH_AIR_COEF / distance);
                player.AddToEnvironmentTemperature(temperature);
            }
            else if (nearest_object != this && nearest_object.IsInherited(ItemBase) && nearest_object.GetParent() == null)
            {
                ItemBase item = ItemBase.Cast(nearest_object);
                float wetness = item.GetWet();

                if (wetness > 0)
                {
                    distance = vector.Distance(item.GetPosition(), GetPosition());
                    distance = Math.Max(distance, 0.1);

                    wetness = wetness * (PARAM_HEAT_THROUGH_AIR_COEF / distance);
                    wetness = Math.Clamp(wetness, item.GetWetMin(), item.GetWetMax());
                    item.AddWet(-wetness);
                }
            }
        }
    }
}
