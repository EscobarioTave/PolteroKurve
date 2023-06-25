class FirePoltergeist extends Animal_GallusGallusDomesticus
{
	Particle 				m_Alive;
	EffectSound 			m_IdleEffectSound;
	
	override void EEInit()
	{
		super.EEInit();
		
		VisualsON();
		PlayIdleSound();
	}
	
	override void EEDelete(EntityAI parent) 
	{
		if ( !GetGame().IsMultiplayer()  ||  GetGame().IsClient() )
		{
			if ( m_Alive ) m_Alive.Stop();
			GetGame().ObjectDelete( m_Alive );
			
			StopSoundSet( m_IdleEffectSound );
//			SEffectManager.DestroySound(m_IdleEffectSound);
		}; 
		
		super.EEDelete(parent);
	}
	
	void VisualsON()
	{		
		if ( !GetGame().IsMultiplayer() || GetGame().IsClient() )
		{
			m_Alive = Particle.PlayOnObject(ParticleList.FIRE_POLTERGEIST_MAIN, this);	
		};
	}	
		
	override bool CanBeSkinned()
	{
		return false;
	}
	
	protected void PlayIdleSound()
	{
		PlaySoundSetLoop(m_IdleEffectSound, "fp_idle_SoundSet", 0.1, 0.1);
	}
}