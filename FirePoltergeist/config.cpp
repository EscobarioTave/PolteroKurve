	class CfgPatches
{
	class FirePoltergeist
	{
		units[]={};
		weapons[]={};
		requiredVersion=1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Characters_Zombies",
			"DZ_Animals",
			"DZ_Animals_canis_lupus",
			"DZ_Sounds_Effects"
		};
	};
};

class CfgMods
{
	class FirePoltergeist
	{
		author="Moonny";
		type="mod";
		dependencies[]=
		{
			"Game",
			"World"
		};
		class defs
		{
			class gameScriptModule
			{
				value="";
				files[]=
				{
					"FirePoltergeist/scripts/3_Game"
				};
			};
			class worldScriptModule
			{
				value="";
				files[]=
				{
					"FirePoltergeist/scripts/4_World"
				};
			};
		};
	};
};

class CfgVehicles
{
//	class Animal_GallusGallusDomesticus; 
//	class AnimalBase;
	class Animal_CanisLupus;
	class HouseNoDestruct; 	
	
	class FP_ANOMALY: HouseNoDestruct   
	{
		scope=2;
 		weight=99999999;
		model="\FirePoltergeist\data\EmptySphere.p3d"; 
	}; 
	
	class FP_ANOMALY_ACTIVE: HouseNoDestruct   
	{
		scope=2;
 		weight=99999999;
		model="\FirePoltergeist\data\EmptySphere.p3d"; 
	}; 
	
	class FirePoltergeistDeath: HouseNoDestruct   
	{
		scope=2;
 		weight=99999999;
	}; 
	
	class FirePoltergeistHit: HouseNoDestruct   
	{
		scope=2;
 		weight=99999999;
	}; 
		
	class FirePoltergeist:Animal_CanisLupus
	{
		simulation="dayzanimal";
		scope=2;
		model="FirePoltergeist\data\cube.p3d";
		displayName="Fire Poltergeist";
		descriptionShort="";
		hiddenSelections[]=
		{
			"camo",	"CamoHair"
		};
		hiddenSelectionsTextures[]=
		{
			"FirePoltergeist\data\transparent.paa", "FirePoltergeist\data\transparent.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"FirePoltergeist\data\transparent.rvmat", "FirePoltergeist\data\transparent.rvmat"
		};
		DamageSphereAmmos[]=
		{
			""
		};
//		aiAgentTemplate="Predators_Wolf";
		aiAgentTemplate="Predators_FirePoltergeist";
		injuryLevels[]={1,0.5,0.2,0};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=60000;
					healthLabels[]={1,0.69999999,0.5,0.30000001,0};
				};
				class Blood
				{
					hitpoints=5000;
				};
				class Shock
				{
					hitpoints=100;
				};
			};
		};
		
		class AnimEvents
		{
			class Steps
			{
				class Walk1
				{
					soundLookupTable="";
					noise="";
					effectSet[]=
					{
						
					};
					id=1;
				};
				class Walk2
				{
					soundLookupTable="";
					noise="";
					effectSet[]=
					{
						
					};
					id=2;
				};
				class Walk3
				{
					soundLookupTable="";
					noise="";
					effectSet[]=
					{
						
					};
					id=3;
				};
				class Walk4
				{
					soundLookupTable="";
					noise="";
					effectSet[]=
					{
						
					};
					id=4;
				};
				class Run1
				{
					soundLookupTable="";
					noise="";
					effectSet[]=
					{
						
					};
					id=5;
				};
				class Run2
				{
					soundLookupTable="";
					noise="";
					effectSet[]=
					{
						
					};
					id=6;
				};
				class Run3
				{
					soundLookupTable="";
					noise="";
					effectSet[]=
					{
						
					};
					id=7;
				};
				class Run4
				{
					soundLookupTable="";
					noise="";
					effectSet[]=
					{
						
					};
					id=8;
				};
				class Bodyfall
				{
					soundLookupTable="";
					noise="";
					effectSet[]=
					{
						
					};
					id=11;
				};
				class Settle
				{
					soundLookupTable="";
					noise="";
					effectSet[]=
					{
						
					};
					id=12;
				};
				class Rest2standA
				{
					soundLookupTable="";
					noise="";
					effectSet[]=
					{
						
					};
					id=13;
				};
				class Rest2standB
				{
					soundLookupTable="";
					noise="";
					effectSet[]=
					{
						
					};
					id=14;
				};
				class Stand2restA
				{
					soundLookupTable="";
					noise="";
					effectSet[]=
					{
						
					};
					id=15;
				};
				class Stand2restB
				{
					soundLookupTable="";
					noise="";
					effectSet[]=
					{
						
					};
					id=16;
				};
				class Stand2restC
				{
					soundLookupTable="";
					noise="";
					effectSet[]=
					{
						
					};
					id=17;
				};
				class Jump
				{
					soundLookupTable="";
					noise="";
					effectSet[]=
					{
						
					};
					id=18;
				};
				class Impact
				{
					soundLookupTable="";
					noise="";
					effectSet[]=
					{
						
					};
					id=19;
				};
			};
			class Sounds
			{
				class WolfBark
				{
					soundSet="";
					noise="";
					id=1;
				};
				class WolfBark_1
				{
					soundSet="";
					noise="";
					id=61;
				};
				class WolfBark_2
				{
					soundSet="";
					noise="";
					id=71;
				};
				class WolfBark2
				{
					soundSet="";
					noise="";
					id=2;
				};
				class WolfBark3
				{
					soundSet="";
					noise="";
					id=3;
				};
				class WolfBreath
				{
					soundSet="";
					noise="";
					id=4;
				};
				class WolfGroans
				{
					soundSet="";
					noise="";
					id=5;
				};
				class WolfGrowl_A
				{
					soundSet="";
					noise="";
					id=6;
				};
				class WolfGrowl_B
				{
					soundSet="";
					noise="";
					id=7;
				};
				class WolfGrowl
				{
					soundSet="";
					noise="";
					id=8;
				};
				class WolfPant
				{
					soundSet="";
					noise="";
					id=9;
				};
				class WolfPantShort
				{
					soundSet="";
					noise="";
					id=10;
				};
				class WolfPantLong
				{
					soundSet="";
					noise="";
					id=18;
				};
				class WolfSnarl
				{
					soundSet="";
					noise="";
					id=11;
				};
				class WolfSnarlShort
				{
					soundSet="";
					noise="";
					id=12;
				};
				class WolfWhimper
				{
					soundSet="";
					noise="";
					id=13;
				};
				class WolfYelp
				{
					soundSet="";
					noise="";
					id=14;
				};
				class WolfYawn
				{
					soundSet="";
					noise="";
					id=15;
				};
				class WolfDeath
				{
					soundSet="";
					noise="";
					id=20;
				};
				class WolfHowl
				{
					soundSet="";
					noise="";
					id=16;
				};
				class WolfHowls
				{
					soundSet="";
					noise="";
					id=17;
				};
			};
			class Damages
			{
				class Bite
				{
					damage="";
					id=1;
				};
				class BiteLow
				{
					damage="";
					id=2;
				};
			};
		};
	};
};

class CfgSounds 
{
	class default
	{
		name="";
		titles[]={};
	};
	
	class fp_death_0: default 
	{
		sound[]=
		{
			"\FirePoltergeist\sounds\fp_death_0", //sound path
			2.0, //volume
			1, //pitch
			200 //distance (handled with script while creating a sound)
		};
	};
	
	class fp_death_1: default 
	{
		sound[]=
		{
			"\FirePoltergeist\sounds\fp_death_1", //sound path
			2.0, //volume
			1, //pitch
			200 //distance (handled with script while creating a sound)
		};
	};
	
	class fp_attack_0: default 
	{
		sound[]=
		{
			"\FirePoltergeist\sounds\fp_attack_0", //sound path
			2.0, //volume
			1, //pitch
			100 //distance (handled with script while creating a sound)
		};
	};
	
	class fp_attack_1: default 
	{
		sound[]=
		{
			"\FirePoltergeist\sounds\fp_attack_1", //sound path
			2.0, //volume
			1, //pitch
			100 //distance (handled with script while creating a sound)
		};
	};
	
	class fp_attack_2: default 
	{
		sound[]=
		{
			"\FirePoltergeist\sounds\fp_attack_2", //sound path
			2.0, //volume
			1, //pitch
			100 //distance (handled with script while creating a sound)
		};
	};
	
	class fp_damage_0: default 
	{
		sound[]=
		{
			"\FirePoltergeist\sounds\fp_damage_0", //sound path
			2.0, //volume
			1, //pitch
			100 //distance (handled with script while creating a sound)
		};
	};
	
	class fp_damage_1: default 
	{
		sound[]=
		{
			"\FirePoltergeist\sounds\fp_damage_1", //sound path
			2.0, //volume
			1, //pitch
			100 //distance (handled with script while creating a sound)
		};
	};
	
	class fp_damage_2: default 
	{
		sound[]=
		{
			"\FirePoltergeist\sounds\fp_damage_2", //sound path
			2.0, //volume
			1, //pitch
			100 //distance (handled with script while creating a sound)
		};
	};
	
	class fp_flame_charge: default 
	{
		sound[]=
		{
			"\FirePoltergeist\sounds\fp_flame_charge", //sound path
			2.0, //volume
			1, //pitch
			50 //distance (handled with script while creating a sound)
		};
	};
	
	class fp_flame_blow: default 
	{
		sound[]=
		{
			"\FirePoltergeist\sounds\fp_flame_blow", //sound path
			1.0, //volume
			0.8, //pitch
			100 //distance (handled with script while creating a sound)
		};
	};
}

class CfgSoundShaders
{	
	class fp_idle_SoundShader
	{
		samples[]=
		{
			
			{
				"\FirePoltergeist\sounds\fp_idle_0",
				1
			}
		};
		volume=1.0;
		range=50;
		rangeCurve="defaultAnimalAttenuationCurve";
	};
}

class CfgSoundSets
{	
	class fp_idle_SoundSet
	{
		soundShaders[]=
		{
			"fp_idle_SoundShader"
		};
	};
}

class CfgAIBehaviours
{
	class Predators_FirePoltergeist
	{
		HeadLookBoneName="pin_lookat";
		teamName="Predator";
		defaultGroupTemplateName="DZWolfGroupBeh";
		class PathAgent
		{
			radius=0.30000001;
			height=1;
			lengthRadius=0.69999999;
		};
		class BehaviourHLPredator
		{
			instantAlertRangeMin=0;
			instantAlertRangeMax=0;
			instantAlertStrength=0;
			proximityAttackRange=2.5;
			attackCooldown=3;
			class SlotCalmGrazing
			{
				class BehaviourCalm
				{
					travelingMode="true";
					grazeOnSpotWeight=20;
					grazeWalkingWeight=20;
					restWeight=0;
					travelWeight=0;
					grazeOnSpotDurationMin=5;
					grazeOnSpotDurationMax=10;
					grazeWalkingDurationMin=500;
					grazeWalkingDurationMax=500;
					restingDurationMin=5;
					restingDurationMax=10;
					travelingDurationMin=15;
					travelingDurationMax=30;
					grazeWalkingSpeed=0.2;
					travelingWalkingSpeed=1.36;
					safetyDurationMin=10;
					safetyDurationMax=10;
					safetyLookAngleMin=0.30000001;
					safetyLookAngleMax=0.69999999;
					safetyLookAngleChangeInterval=3;
					class GrazeMovement
					{
						maxSpeed=0.25;
						minSpeed=0.25;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=2;
						stopRadius=1;
						pathFilter="WolfOnHunt";
					};
					class TravelingMovement
					{
						maxSpeed=2.8499999;
						minSpeed=0.77999997;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=2;
						stopRadius=1;
						pathFilter="WolfOnHunt";
						slowToTurn="true";
						smoothAcceleration="true";
					};
					class CatchUpMovement
					{
						maxSpeed=6.3800001;
						minSpeed=0.77999997;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=2;
						stopRadius=1;
						pathFilter="WolfOnHunt";
						slowToTurn="true";
						smoothAcceleration="true";
					};
				};
			};
			class SlotSiege
			{
				class BehaviourSiege
				{
					class SoundsEntering
					{
						class Sound1
						{
							sounds[]=
							{
								
							};
						};
						class Sound2
						{
							sounds[]=
							{
								
							};
						};
						class Sound3
						{
							sounds[]=
							{
								
							};
						};
						probability=1;
					};
					class SoundsDuring
					{
						class Sound1
						{
							sounds[]=
							{
								
							};
						};
						class Sound2
						{
							sounds[]=
							{
								
							};
						};
						class Sound3
						{
							sounds[]=
							{
								
							};
						};
						class Sound4
						{
							sounds[]=
							{
								
							};
						};
						class Sound5
						{
							sounds[]=
							{
								
							};
						};
						class Sound6
						{
							sounds[]=
							{
								
							};
						};
						class Sound7
						{
							sounds[]=
							{
								
							};
						};
						class Sound8
						{
							sounds[]=
							{
								
							};
						};
						probability=0.40000001;
						RepeatTimeMin=5;
						RepeatTimeMax=15;
						RepeatEnabled="true";
					};
					innerRadius=7;
					innerRadiusMin=4.5;
					innerRadiusMax=10;
					outerRadius=16;
					directionChangeTimeMin=7;
					directionChangeTimeMax=25;
					PlayerFOV=1.4;
					preferPlayerFOVCooldown=1;
					attackDistance=3.5;
					class InnerCircleMovement
					{
						maxSpeed=6.3000002;
						optimalSpeed=6.3000002;
						optimalSpeedRange=1;
						minSpeed=1;
						acceleration=7;
						maxAngleSpeed=90;
						slowRadius=0;
						stopRadius=2;
						maxSpeedRange=2;
						pathFilter="WolfOnHunt";
						startAnimationMaxSpeed=0.54000002;
					};
					class Movement
					{
						maxSpeed=9;
						optimalSpeed=6.3000002;
						optimalSpeedRange=15;
						minSpeed=1;
						acceleration=10;
						maxAngleSpeed=180;
						slowRadius=0;
						stopRadius=2;
						maxSpeedRange=20;
						pathFilter="WolfOnOuterCircle";
						startAnimationMaxSpeed=0.54000002;
					};
					class AttackMovement
					{
						maxSpeed=12.175;
						optimalSpeed=12;
						optimalSpeedRange=6;
						minSpeed=0.80000001;
						acceleration=10;
						maxAngleSpeed=180;
						slowRadius=2;
						stopRadius=3;
						maxSpeedRange=30;
						pathFilter="WolfOnHunt";
					};
				};
			};
			class SlotEating
			{
				class BehaviourCalm
				{
					grazeOnSpotWeight=20;
					grazeWalkingWeight=20;
					restWeight=0;
					travelWeight=20;
					eatingWeight=20;
					grazeOnSpotDurationMin=5;
					grazeOnSpotDurationMax=10;
					grazeWalkingDurationMin=10;
					grazeWalkingDurationMax=15;
					restingDurationMin=15;
					restingDurationMax=25;
					travelingDurationMin=15;
					travelingDurationMax=30;
					eatingDurationMin=15;
					eatingDurationMax=25;
					safetyDurationMin=10;
					safetyDurationMax=20;
					safetyLookAngleMin=0.1;
					safetyLookAngleMax=1.5;
					safetyLookAngleChangeInterval=7;
					class GrazeMovement
					{
						maxSpeed=0.25;
						minSpeed=0.25;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=2;
						stopRadius=1;
						pathFilter="WolfOnHunt";
					};
					class TravelingMovement
					{
						maxSpeed=2.8499999;
						minSpeed=0.77999997;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=2;
						stopRadius=1;
						pathFilter="WolfOnHunt";
						slowToTurn="true";
						smoothAcceleration="true";
					};
					class CatchUpMovement
					{
						maxSpeed=6.3800001;
						minSpeed=0.77999997;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=2;
						stopRadius=1;
						pathFilter="WolfOnHunt";
						slowToTurn="true";
						smoothAcceleration="true";
					};
				};
			};
			class SlotHunting
			{
				class BehaviourHunt
				{
					attackRange=3.5;
					followingRadius=15;
					followingRadiusReqroupCooldownMin=5;
					followingRadiusReqroupCooldownMax=15;
					followingRadiusRegroupMinSpeed=1.5;
					predictFollowingMinDistance=10;
					minDistanceToTargetRatio=0.30000001;
					class SoundsEntering
					{
						class Sound1
						{
							sounds[]=
							{
								
							};
						};
						probability=0.30000001;
					};
					class SoundsDuring
					{
						class Sound1
						{
							sounds[]=
							{
								
							};
						};
						class Sound2
						{
							sounds[]=
							{
								
							};
						};
						class Sound3
						{
							sounds[]=
							{
								
							};
						};
						class Sound4
						{
							sounds[]=
							{
								
							};
						};
						class Sound5
						{
							sounds[]=
							{
								
							};
						};
						probability=1;
						RepeatTimeMin=10;
						RepeatTimeMax=30;
						RepeatEnabled="true";
					};
					class Movement
					{
						maxSpeed=10;
						optimalSpeed=9.5;
						minSpeed=1;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=2;
						stopRadius=1;
						maxSpeedRange=15;
						optimalSpeedRange=5;
						pathFilter="WolfOnHunt";
					};
					class MovementAttack
					{
						maxSpeed=12.175;
						optimalSpeed=12.175;
						minSpeed=6;
						acceleration=20;
						maxAngleSpeed=360;
						slowRadius=0;
						stopRadius=0;
						maxSpeedRange=3;
						optimalSpeedRange=1;
						pathFilter="WolfOnHunt";
					};
				};
			};
			class SlotCalmResting
			{
				class BehaviourCalm
				{
					travelingMode="true";
					grazeOnSpotWeight=50;
					grazeWalkingWeight=50;
					restWeight=50;
					travelWeight=0;
					grazeOnSpotDurationMin=5;
					grazeOnSpotDurationMax=10;
					grazeWalkingDurationMin=15;
					grazeWalkingDurationMax=25;
					restingDurationMin=25;
					restingDurationMax=35;
					travelingDurationMin=15;
					travelingDurationMax=30;
					safetyDurationMin=10;
					safetyDurationMax=10;
					safetyLookAngleMin=0.1;
					safetyLookAngleMax=1.5;
					safetyLookAngleChangeInterval=7;
					class GrazeMovement
					{
						maxSpeed=0.25;
						minSpeed=0.25;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=2;
						stopRadius=1;
						pathFilter="WolfOnHunt";
					};
					class TravelingMovement
					{
						maxSpeed=2.8499999;
						minSpeed=0.77999997;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=2;
						stopRadius=1;
						pathFilter="WolfOnHunt";
						slowToTurn="true";
						smoothAcceleration="true";
					};
					class CatchUpMovement
					{
						maxSpeed=6.3800001;
						minSpeed=0.77999997;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=2;
						stopRadius=1;
						pathFilter="WolfOnHunt";
						slowToTurn="true";
						smoothAcceleration="true";
					};
				};
			};
			class SlotCalmTravelling
			{
				class BehaviourCalm
				{
					travelingMode="true";
					grazeOnSpotWeight=20;
					grazeWalkingWeight=20;
					restWeight=0;
					travelWeight=50;
					grazeOnSpotDurationMin=10;
					grazeOnSpotDurationMax=20;
					grazeWalkingDurationMin=25;
					grazeWalkingDurationMax=35;
					restingDurationMin=5;
					restingDurationMax=10;
					travelingDurationMin=10;
					travelingDurationMax=50;
					safetyDurationMin=10;
					safetyDurationMax=10;
					safetyLookAngleMin=0.30000001;
					safetyLookAngleMax=0.69999999;
					safetyLookAngleChangeInterval=3;
					class TravelingMovement
					{
						maxSpeed=2.8499999;
						minSpeed=0.77999997;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=4;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
					};
					class CatchUpMovement
					{
						maxSpeed=6.3800001;
						minSpeed=0.77999997;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=2;
						stopRadius=1;
						pathFilter="WolfOnHunt";
						slowToTurn="true";
						smoothAcceleration="true";
					};
					class GrazeMovement
					{
						maxSpeed=0.25;
						minSpeed=0.25;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=2;
						stopRadius=1;
						pathFilter="WolfOnHunt";
					};
				};
			};
			class SlotAttracted
			{
				class BehaviourCalm
				{
					class SoundsEntering
					{
						class Sound1
						{
							sounds[]=
							{
								
							};
						};
						class Sound2
						{
							sounds[]=
							{
								
							};
						};
						class Sound3
						{
							sounds[]=
							{
								
							};
						};
						class Sound4
						{
							sounds[]=
							{
								
							};
						};
						class Sound5
						{
							sounds[]=
							{
								
							};
						};
						class Sound6
						{
							sounds[]=
							{
								
							};
						};
						class Sound7
						{
							sounds[]=
							{
								
							};
						};
						class Sound8
						{
							sounds[]=
							{
								
							};
						};
						probability=0.89999998;
					};
					class SoundsDuring
					{
						class Sound1
						{
							sounds[]=
							{
								
							};
						};
						class Sound2
						{
							sounds[]=
							{
								
							};
						};
						class Sound3
						{
							sounds[]=
							{
								
							};
						};
						class Sound4
						{
							sounds[]=
							{
								
							};
						};
						class Sound5
						{
							sounds[]=
							{
								
							};
						};
						class Sound6
						{
							sounds[]=
							{
								
							};
						};
						class Sound7
						{
							sounds[]=
							{
								
							};
						};
						class Sound8
						{
							sounds[]=
							{
								
							};
						};
						probability=0.5;
						RepeatTimeMin=5;
						RepeatTimeMax=25;
						RepeatEnabled="true";
					};
					grazeOnSpotWeight=20;
					grazeWalkingWeight=20;
					restWeight=0;
					travelWeight=50;
					grazeOnSpotDurationMin=5;
					grazeOnSpotDurationMax=10;
					grazeWalkingDurationMin=5;
					grazeWalkingDurationMax=10;
					restingDurationMin=5;
					restingDurationMax=10;
					travelingDurationMin=50;
					travelingDurationMax=100;
					grazeWalkingSpeed=0.54400003;
					travelingWalkingSpeed=0.78200001;
					safetyDurationMin=10;
					safetyDurationMax=10;
					safetyLookAngleMin=0.30000001;
					safetyLookAngleMax=0.69999999;
					safetyLookAngleChangeInterval=3;
					class TravelingMovement
					{
						maxSpeed=2.8499999;
						minSpeed=0.77999997;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=5;
						stopRadius=3;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="WolfOnHunt";
					};
					class CatchUpMovement
					{
						maxSpeed=6.3800001;
						minSpeed=0.77999997;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=0;
						stopRadius=0.5;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="WolfOnHunt";
					};
					class GrazeMovement
					{
						maxSpeed=0.25;
						minSpeed=0.25;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=0;
						stopRadius=0.5;
					};
				};
			};
			class SlotFireplace
			{
				class BehaviourCalm
				{
					grazeOnSpotWeight=20;
					grazeWalkingWeight=20;
					restWeight=20;
					travelWeight=0;
					grazeOnSpotDurationMin=50;
					grazeOnSpotDurationMax=100;
					grazeWalkingDurationMin=50;
					grazeWalkingDurationMax=100;
					restingDurationMin=50;
					restingDurationMax=150;
					travelingDurationMin=0;
					travelingDurationMax=0;
					grazeWalkingSpeed=0.2;
					travelingWalkingSpeed=1.36;
					safetyIntervalMin=30;
					safetyIntervalMax=40;
					safetyDurationMin=5;
					safetyDurationMax=10;
					safetyLookAngleMin=0.30000001;
					safetyLookAngleMax=0.69999999;
					safetyLookAngleChangeInterval=3;
					class GrazeMovement
					{
						maxSpeed=0.25;
						minSpeed=0.25;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=0;
						stopRadius=0.5;
					};
					class TravelingMovement
					{
						maxSpeed=2.8499999;
						minSpeed=0.77999997;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=0;
						stopRadius=0.5;
						slowToTurn="true";
						smoothAcceleration="true";
					};
				};
			};
			class SlotScared
			{
				class BehaviourFleeFromTargets
				{
					class SoundsEntering
					{
						class Sound1
						{
							sounds[]=
							{
								
							};
						};
						class Sound2
						{
							sounds[]=
							{
								
							};
						};
						class Sound3
						{
							sounds[]=
							{
								
							};
						};
						probability=1;
					};
					class SoundsDuring
					{
						class Sound1
						{
							sounds[]=
							{
								
							};
						};
						class Sound2
						{
							sounds[]=
							{
								
							};
						};
						class Sound3
						{
							sounds[]=
							{
								
							};
						};
						probability=0.30000001;
						RepeatTimeMin=5;
						RepeatTimeMax=25;
						RepeatEnabled="true";
					};
					class RunMovement
					{
						maxSpeed=12.175;
						optimalSpeed=6.3899999;
						minSpeed=1;
						acceleration=2;
						maxAngleSpeed=360;
						slowRadius=4;
						stopRadius=0;
						maxSpeedRange=15;
						optimalSpeedRange=10;
						pathFilter="DeerOnRun";
					};
				};
			};
			class AlertSystem
			{
				visionToAlertMultiplier=10;
				noiseToAlertMultiplier=1;
				damageToAlertMultiplier=200;
				class Calm
				{
					dropSpeed=3;
					dropDelay=2;
					maxAlertValue=30;
				};
				class Alerted
				{
					dropSpeed=11;
					dropDelay=0;
					maxAlertValue=100;
				};
				class AlertedExtra
				{
					dropSpeed=25;
					dropDelay=10;
					maxAlertValue=500;
				};
			};
		};
		class NoiseSystemParams
		{
			rangeMin=25;
			rangeMax=100;
			rangeShotMin=0;
			rangeShotMax=50;
			class NoiseStrengthTeamMultipliers
			{
				BigGame=0.40000001;
				Zombies=0.60000002;
				Player=1;
			};
		};
		class TargetSystemDZBase
		{
			class VisionTeamMultipliers
			{
				BigGame=0.60000002;
				Zombies=1;
				Player=1;
			};
			visionManSizeStand=1;
			visionManSizeCrouch=0.80000001;
			visionManSizeProne=0.60000002;
			visionAngularSpeedMin=0.1;
			visionAngularSpeedMax=0.5;
			visionAngularSpeedMaxMult=1.5;
			visionRangeMin=100;
			visionRangeMax=200;
			visionFov=1.8;
			visionPeripheralRangeMin=1;
			visionPeripheralRangeMax=16;
			visionPeripheralFov=6.1999998;
			visionNightMinMult=1;
			visionNightMaxMult=0.75;
			visionRainMinMult=1;
			visionRainMaxMult=0.89999998;
			visionFogMinMult=1;
			visionFogMaxMult=0.69999999;
		};
	};
}