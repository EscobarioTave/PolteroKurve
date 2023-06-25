class FirePoltergeistDeath extends House
{
	Particle 							m_EffectDeath;
	SoundOnVehicle 						m_DeathEffectSound;
	
	void FirePoltergeistDeath()
	{
		if ( GetGame().IsClient()  ||  !GetGame().IsMultiplayer() )
		{
			VisualsON();
		};
		
		if ( GetGame().IsServer() )
		{
			GetGame().GetCallQueue( CALL_CATEGORY_GAMEPLAY ).CallLater(Delete, 6000, false);
		};
	}
	
	void ~FirePoltergeistDeath()
	{
		if ( GetGame().IsClient() || !GetGame().IsMultiplayer())
		{
			if ( m_EffectDeath ) m_EffectDeath.Stop();
			if ( m_DeathEffectSound )
			{
				GetGame().ObjectDelete( m_DeathEffectSound );
				m_DeathEffectSound = NULL;
			};
		};
	}
	
	void VisualsON()
	{		
		if ( GetGame().IsClient() || !GetGame().IsMultiplayer())
		{
			m_EffectDeath = Particle.PlayOnObject(ParticleList.FIRE_POLTERGEIST_DEATH, this);
			
			PlaySoundFX();	
		};
	}	
	
	void Delete()
	{
		GetGame().ObjectDelete( this );
	}
	
	void PlaySoundFX()
	{		
		if ( GetGame().IsClient()  ||  !GetGame().IsMultiplayer() )
		{
			int rnd = Math.RandomIntInclusive(0,1);
			
			if ( rnd == 0 )
			{
				m_DeathEffectSound = PlaySound("fp_death_0", 200);	
			}
			else if ( rnd == 1 )
			{
				m_DeathEffectSound = PlaySound("fp_death_1", 200);
			};
		};			
	}	
}