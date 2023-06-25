class CfgPatches
{
	class FirePoltergeistS
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
			"FirePoltergeist"
		};
	};
};

class CfgMods
{
	class FirePoltergeistS
	{
		author="Moonny";
		type="mod";
		dependencies[]=
		{
			"World"
		};
		class defs
		{
			class worldScriptModule
			{
				value="";
				files[]=
				{
					"FirePoltergeistS/scripts/4_World"
				};
			};
		};
	};
};

class CfgAmmo 
{
	class FP_Damage
	{
		hit=2;
		indirectHit=0;
		indirectHitRange=0;
		model="shotShell";
		affectSkeleton=1;
		caliber=0.1;
		deflecting=0;
		class DamageApplied
		{
			type="FP";
			class Health
			{
				damage=5;
			};
			class Blood
			{
				damage=0;
			};
			class Shock
			{
				damage=0;
			};
		};
		class NoiseHit
		{
			strength=20;
			type="sound";
		};
	};
}

