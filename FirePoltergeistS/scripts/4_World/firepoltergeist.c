modded class FirePoltergeist
{
	protected bool 					IsOnCooldown 		= false;
	protected float 				search_timer 		= 10;
	protected bool 					loot_spawned 		= false;
	
	protected FirePoltergeistDeath	m_Death; 
	protected ref Timer 			m_Timer;
	
	FirePoltergeistHit 				m_hit;
	
	ref array<Object> nearest_objects = new array<Object>;
	ref array<CargoBase> proxy_cargos = new array<CargoBase>;
	ref array<Man> players = new array<Man>;
	ref array<EntityAI> creatures = new array<EntityAI>;
	
	void FirePoltergeist()
	{			
		if (GetGame().IsServer())
		{			
			m_Timer = new Timer( CALL_CATEGORY_SYSTEM );
		};
	}
	
	override void EEInit()
	{
		super.EEInit();
		if ( GetGame().IsServer() )
		{
			super.EEInit();
			GetGame().GetCallQueue( CALL_CATEGORY_SYSTEM ).CallLater( StartSearch, 2000, false );
		};
	}
	
	override void EEKilled( Object killer )
	{
		super.EEKilled(killer);
		
		vector death_position = this.GetPosition();

		GetGame().CreateObject( "FirePoltergeistDeath", death_position, false );
		GetGame().GetCallQueue( CALL_CATEGORY_SYSTEM ).CallLater(Delete, 100, false);
	}
	
	override void EEHitBy(TotalDamageResult damageResult, int damageType, EntityAI source, int component, string dmgZone, string ammo, vector modelPos, float speedCoef)
	{
		if (!m_hit)
		{
			m_hit = FirePoltergeistHit.Cast( GetGame().CreateObject( "FirePoltergeistHit", this.GetPosition(), false ) );
		};
		
		super.EEHitBy(damageResult, damageType, source, component, dmgZone, ammo, modelPos, speedCoef);
	}
	
	void SpawnLoot(int chance, string loot)
	{
//		Print("Spawning loot" + loot);
		int randomizer = Math.RandomIntInclusive(1, 100);
		
		if ( randomizer <= chance ) GetGame().CreateObject(loot, this.GetPosition(), false);
	}
	
	void Delete()
	{
		if ( loot_spawned == false )
		{
		///////////////////////////////////////////////////////		спавн лута ШАНС от 1 дo 100 и НАЗВАНИЕ
		
            SpawnLoot(30, "JK_Stimulant_20");
			SpawnLoot(1, "IMP_Bag_MLTMilitary400");
			SpawnLoot(2, "IMP_Bag_300_BLUE");
            SpawnLoot(20, "JK_Stimulant_40");
            SpawnLoot(15, "JK_Stimulant_60");
            SpawnLoot(5, "JK_Stimulant_100");
			SpawnLoot(5, "JK_Stimulant_fixleg");
			SpawnLoot(2, "JK_Stimulant_secret2");
			SpawnLoot(20, "SFP_Collection_Lor_Jural_1");
			SpawnLoot(20, "SFP_Collection_Lor_Jural_2");
			SpawnLoot(20, "SFP_Collection_Lor_Jural_3");
			SpawnLoot(20, "SFP_Collection_Lor_Jural_4");
			SpawnLoot(02, "SFP_Collection_Lor_Jural_5");
			SpawnLoot(20, "SFP_Collection_Lor_Jural_6");
			SpawnLoot(20, "SFP_Collection_Lor_Jural_7");
			SpawnLoot(20, "SFP_Collection_Lor_Jural_9");
			SpawnLoot(20, "SFP_Collection_Lor_Jural_10");
			SpawnLoot(20, "SFP_Collection_Lor_Jural_11");
			SpawnLoot(20, "OOTS_item_card11");
			SpawnLoot(20, "OOTS_item_card12");
			SpawnLoot(20, "OOTS_item_card13");
			SpawnLoot(20, "OOTS_item_card14");
			SpawnLoot(20, "OOTS_item_card15");
			SpawnLoot(20, "OOTS_item_card16");
			SpawnLoot(20, "OOTS_item_card17");
			SpawnLoot(20, "OOTS_item_card18");
			SpawnLoot(20, "OOTS_item_card19");
			SpawnLoot(20, "OOTS_item_card20");
			SpawnLoot(20, "OOTS_item_card21");
			SpawnLoot(20, "OOTS_item_card22");
			SpawnLoot(20, "OOTS_item_card23");
			SpawnLoot(20, "OOTS_item_card24");
			SpawnLoot(20, "OOTS_item_card25");
			SpawnLoot(20, "OOTS_item_card26");
			SpawnLoot(20, "OOTS_item_card27");
			SpawnLoot(20, "OOTS_item_card28");
			SpawnLoot(20, "OOTS_item_card29");
			SpawnLoot(20, "OOTS_item_card30");
            SpawnLoot(30, "JK_BF6_Red");
            SpawnLoot(10, "VZP_VSSK_mag_10rnd");
            SpawnLoot(10, "VZP_M107_mag_10rnd");
            SpawnLoot(10, "VZP_PKM_mag_100rnd");
            SpawnLoot(25, "AmmoBox_762x39_20Rnd");
			SpawnLoot(25, "AmmoBox_762x54_20Rnd");
            SpawnLoot(5,  "CamoBack300_Black");
		    SpawnLoot(15, "VZP_AmmoBox_12JACKIGL_50Rnd");
		    SpawnLoot(15, "VZP_AmmoBox_15x104_10Rnd");
		    SpawnLoot(15, "VZP_AmmoBox_VSSK_50Rnd");
			SpawnLoot(15, "VZP_AmmoBox_127x99_50Rnd");
			SpawnLoot(20, "VZP_JACK_mag_30rnd");
			SpawnLoot(10, "Deagle_Gold");
			SpawnLoot(10, "SRS_ASR14_Gold");
			SpawnLoot(10, "SRS_RPK16_Gold");
			SpawnLoot(10, "SRS_SAIGA12K_Gold");
			SpawnLoot(10, "SRS_SVDM_Gold");
			SpawnLoot(10, "SRS_Handguard_ASR14_Gold");
			SpawnLoot(10, "SRS_Handguard_Saiga_Gold");
			SpawnLoot(10, "SRS_Handguard_RPK16_Gold");
			SpawnLoot(10, "SRS_CompensatorBG_ASRGold");
			SpawnLoot(10, "SRS_SRS_CompensatorSaiga_Gold");
			SpawnLoot(10, "SRS_ASR14_Mag30Rnd_Gold");
			SpawnLoot(10, "SRS_ASR14_Mag45Rnd_Gold");
			SpawnLoot(10, "SRS_ASR14_Mag75Rnd_Gold");
			SpawnLoot(10, "SRS_Mag_RPK16_30Rnd_Gold");
			SpawnLoot(10, "SRS_Mag_RPK16_45Rnd_Gold");
			SpawnLoot(10, "SRS_Mag_RPK16_96Rnd_Gold");
			SpawnLoot(10, "SRS_Mag_Saiga_5Rnd_Gold");
			SpawnLoot(10, "SRS_Mag_Saiga_12Rnd_Gold");
			SpawnLoot(10, "SRS_Mag_Saiga_30Rnd_Gold");
			SpawnLoot(10, "SRS_SVDM_Mag10Rnd_Gold");
			SpawnLoot(10, "KOD_AS50_Camo1");
			SpawnLoot(10, "KOD_AS50_Camo2");
			SpawnLoot(10, "KOD_AS50_Camo3");
			SpawnLoot(10, "KOD_AS50_Camo4");
			SpawnLoot(10, "KOD_AS50_Black");
			SpawnLoot(10, "KOD_GM6Lynx");
			SpawnLoot(10, "KOD_Evolys");
			SpawnLoot(10, "KOD_AR50A1");
			SpawnLoot(10, "KOD_M82A2_Tan");
			SpawnLoot(10, "KOD_M82A2_Grey");
			SpawnLoot(10, "KOD_M82A2_Black");
			SpawnLoot(10, "KOD_AX50_Tan");
			SpawnLoot(10, "KOD_PKP");
			SpawnLoot(10, "KOD_PKP_Tac_Black");
			SpawnLoot(10, "KOD_PKP_Tac_FDE");
			SpawnLoot(10, "KOD_KSVK");
			SpawnLoot(10, "KOD_Kivaari_Grey");
			SpawnLoot(10, "KOD_Kivaari_Black");
			SpawnLoot(10, "KOD_Kivaari_Green");
			SpawnLoot(10, "KOD_Kivaari_Tan");
			SpawnLoot(10, "KOD_CSR50");
			SpawnLoot(10, "KOD_SUB2000_Suppressed");
			SpawnLoot(10, "KOD_AX50_Black");
			SpawnLoot(2,  "CP_CannabisBrickBlackFrost");
			SpawnLoot(2,  "CP_CannabisBrickNomad");
			SpawnLoot(2,  "CP_CannabisBrickS1");
			SpawnLoot(2,  "CP_CannabisBrickFuture");
			SpawnLoot(2,  "CP_CannabisBrickStardawg");
			SpawnLoot(2,  "CP_CannabisBrickKush");
			SpawnLoot(2,  "CP_CannabisBrickBlue");
			SpawnLoot(2,  "CP_CannabisBrickSkunk");
			SpawnLoot(2,  "DP_CocaBrick");
			SpawnLoot(1,  "SRS_M82A1");
			SpawnLoot(10, "SRS_M82A1_Mag10Rnd");
			
		//////////////////////////////////////////////////////
			loot_spawned = true;
		};
		
		GetGame().ObjectDelete( this );
	};
	
	void StartSearch()
	{
		IsOnCooldown = false;
		m_Timer.Stop();
		m_Timer.Run(search_timer, this, "TargetSearch", NULL, true);
	}
	
	void TargetSearch()
	{		
		nearest_objects.Clear();
		proxy_cargos.Clear();
		players.Clear();
		creatures.Clear();
		
		GetGame().GetObjectsAtPosition3D ( this.GetPosition(), 60, nearest_objects, proxy_cargos ); ///радиус поиска тут
		  
		for ( int i = 0; i < nearest_objects.Count(); i++ ) ///проверяем вообще все обьекты рядом
		{
			Object nearest_object = nearest_objects.Get(i);

			if ( nearest_object.IsInherited( PlayerBase ) ) ///если рядом игрок
			{
				PlayerBase player = PlayerBase.Cast( nearest_object );
				if ( player.IsAlive() )	players.Insert( player );
			};
			
			if ( nearest_object.IsInherited( DayZCreature ) && (nearest_object.GetType() != "FirePoltergeist") ) ///если рядом тварь и это не полтер
			{
				EntityAI eai = EntityAI.Cast( nearest_object );
				if ( eai.IsAlive() ) creatures.Insert( eai );
			};
		};
		
		if ( players.Count() == 0 )
		{
			search_timer = 10;
		}
		else 
		{
			search_timer = 6;
		};
		
		int players_in_radius = players.Count();
//		Print("Players found: " + players_in_radius);
		players_in_radius--;
		for ( int p = 0; p < players.Count(); p++ ) ///проверяем массив игроков
		{
			PlayerBase random_player = NULL;
			int random_player_number = Math.RandomIntInclusive(0, players_in_radius); 
			random_player = players.Get(p); ///выбираем рандомного игрока из массива
//			random_player = PlayerBase.Cast( players.Get(p) );
//			Print("Random player number: " + random_player_number);
//			Print("Player target is: " + random_player);
			
			if ( !IsOnCooldown && random_player.IsAlive() ) ///если не в кулдауне и игрок жив
			{
				vector anomaly_spawn_position = random_player.GetPosition();
				anomaly_spawn_position[1] = anomaly_spawn_position[1] + 1;
				GetGame().CreateObject("FP_ANOMALY", anomaly_spawn_position, false); ///спавним аномалию
				
//				Print("Player was alive so anomaly was spawned at target: " + random_player);
				
				p = players_in_radius + 1;
				SearchCooldown(); ///поиск уходит на перезарядку (выход из цикла)
			};
		};
		
		int creatures_in_radius = creatures.Count();
//		Print("Creatures found: " + creatures_in_radius);
		creatures_in_radius--;
		for ( int o = 0; o < creatures.Count(); o++ ) ///проверяем массив тварей
		{
			EntityAI random_creature = NULL;
			int random_creature_number = Math.RandomIntInclusive(0, creatures_in_radius); 
			random_creature = creatures.Get(p); ///выбираем рандомную тварь из массива
			
//			Print("Random creature number: " + random_creature_number);
//			Print("Creature target is: " + random_creature);
				
			if ( !IsOnCooldown && random_creature.IsAlive() ) ///если не в кулдауне и тварь жива
			{
				vector creature_anomaly_spawn_position = random_creature.GetPosition();
				creature_anomaly_spawn_position[1] = creature_anomaly_spawn_position[1] + 1;
				GetGame().CreateObject("FP_ANOMALY", creature_anomaly_spawn_position, false); ///спавним аномалию
				
// 				Print("Creature was alive so anomaly was spawned at target: " + random_creature);
				
				o = creatures_in_radius + 1;
				SearchCooldown(); ///поиск уходит на перезарядку(выход из цикла)
			};
		};
	};
	
	void SearchCooldown()
	{
		m_Timer.Stop();
		m_Timer.Run(1, this, "StartSearch", NULL, false);
		IsOnCooldown = true;
	}	
}