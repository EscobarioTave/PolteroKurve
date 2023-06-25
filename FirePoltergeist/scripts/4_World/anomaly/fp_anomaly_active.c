class FP_ANOMALY_ACTIVE extends House  
{
	FP_ANOMALY_LIGHT 			m_Light;
	Particle 					m_EffectSplash;
	SoundOnVehicle 				m_SEngineAnomaly_0;
	SoundOnVehicle 				m_SEngineAnomaly_1;
	
	void FP_ANOMALY_ACTIVE()
	{
		if ( GetGame().IsClient()  ||  !GetGame().IsMultiplayer() )
		{
			ActiveVisualsON();
		};
		
		if ( GetGame().IsServer() )
		{
			GetGame().GetCallQueue( CALL_CATEGORY_GAMEPLAY ).CallLater(Delete, 15000, false);
		};
	}
	
	void ~FP_ANOMALY_ACTIVE()
	{
		if ( m_EffectSplash ) m_EffectSplash.Stop();
		if ( m_Light ) m_Light.FadeOut();
		if ( m_SEngineAnomaly_0 ) GetGame().ObjectDelete( m_SEngineAnomaly_0 );
		if ( m_SEngineAnomaly_1 ) GetGame().ObjectDelete( m_SEngineAnomaly_1 );
 	}
	
	/// Visuals
	
	void ActiveVisualsON()
	{
		if (!GetGame().IsServer() || !GetGame().IsMultiplayer() )
		{
			m_SEngineAnomaly_0 = PlaySound("fp_flame_charge", 100);
			GetGame().GetCallQueue( CALL_CATEGORY_SYSTEM ).CallLater( PlayBlowSound, 2000, false );
				
			m_EffectSplash = Particle.PlayOnObject(ParticleList.FIRE_POLTERGEIST_ANOMALY, this);
		};
	}
	
	void PlayBlowSound()
	{
		if (!GetGame().IsServer() || !GetGame().IsMultiplayer() )
		{
			m_Light = FP_ANOMALY_LIGHT.Cast( ScriptedLightBase.CreateLight(FP_ANOMALY_LIGHT, "0 0 0", 0.5) );
			m_Light.AttachOnObject(this, "0 0 0", "0 0 0");
			
			m_SEngineAnomaly_1 = PlaySound("fp_flame_blow", 100);
			if ( m_SEngineAnomaly_0 ) GetGame().ObjectDelete( m_SEngineAnomaly_0 );
		};
	}
	
	void Delete()
	{
		if ( GetGame().IsServer() )
		{
			GetGame().ObjectDelete( this );
		};
	};
}

	/// Light

class FP_ANOMALY_LIGHT extends PointLightBase
{
	void FP_ANOMALY_LIGHT()
	{
		SetVisibleDuringDaylight(true);
		SetRadiusTo(10);
		SetBrightnessTo(50);
		SetFlareVisible(false);
		SetAmbientColor(0.9, 0.5, 0.3);
		SetDiffuseColor(0.9, 0.5, 0.3);
		SetFadeOutTime(2);
		SetLifetime(14.0);
		SetDisableShadowsWithinRadius(-1);
		SetDancingShadowsMovementSpeed(0.4);
		SetDancingShadowsAmplitude(0.5);
		SetFlickerAmplitude(0.5);
		SetFlickerSpeed(4.0);
		EnableHeatHaze(true);
		SetHeatHazeRadius(2);
		SetHeatHazePower(0.02);
	}
}
