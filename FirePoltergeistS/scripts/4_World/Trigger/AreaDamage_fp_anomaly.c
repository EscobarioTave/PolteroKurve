class AreaDamageFP extends AreaDamageBase
{	
	void AreaDamageFP(EntityAI parent)
	{
		AreaDamageBase(parent);
		
		m_DamageableTypes.Insert(Man);
		m_DamageableTypes.Insert(DayZCreature);	
	}
	
	void ~AreaDamageFP() {}

	override void SetHitZones( array<string> hitzones )
	{
		m_HitZones = hitzones;
	}
	
	override void OnEnterServer(Object object)
	{
		super.OnEnterServer(object);

		EvaluateDamage_FP(object);
	}
	
	protected void EvaluateDamage_FP(Object object)
	{
		string hitzone;

		if( m_RaycastSources.Count() )
		{
			hitzone = GetRaycastedHitZone(object, m_RaycastSources);
			EvaluateDamage_FP_Common(object, hitzone);
		}
		else
		{
			hitzone = GetRandomHitZone(m_HitZones);
			EvaluateDamage_FP_Common(object, hitzone);
		}
	}
	
	void EvaluateDamage_FP_Common(Object object, string hitzone)
	{
		if( object && object.IsAlive() )
		{
			EntityAI eai = EntityAI.Cast(object);
			
			if ( object.GetType() == "FirePoltergeist" ) 
			{
				return;
			}
			else if( object.IsInherited(DayZPlayer) ) 
			{
				Man mantarget = Man.Cast(object);
				PlayerBase player = PlayerBase.Cast(object);
				
				player.GetStatStamina().Set( 0 ); 
				player.GetStatHeatComfort().Set( 60 ); 
				
				eai.ProcessDirectDamage(m_DamageType, EntityAI.Cast(m_ParentObject), hitzone, m_AmmoName, "0.5 0.5 0.5", 1); 
			}
			else if ( object.IsAnyInherited(m_DamageableTypes) )
			{
				eai.ProcessDirectDamage(m_DamageType, EntityAI.Cast(m_ParentObject), hitzone, m_AmmoName, "0.5 0.5 0.5", 1); 
			};
		};
	}
}