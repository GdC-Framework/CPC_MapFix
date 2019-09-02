class CfgPatches
{
	class CPC_MapFix_Lingor
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.10;
		requiredAddons[] = {"A3_Structures_F","lingor_objects"};
	};
};


class CfgVehicles
{	
	class HouseBase;
	class House: HouseBase
	{
		class DestructionEffects;
	};
	class House_F: House
	{
		class DestructionEffects: DestructionEffects
		{
			class DamageAround1
			{
				intensity = 1;
				interval = 1;
				lifeTime = 1;
				position = "";
				simulation = "damageAround";
				type = "DamageAroundHouse";
			};
			class DestroyPhase1
			{
				intensity = 1;
				interval = 1;
				lifeTime = 2.5;
				position = "";
				simulation = "destroy";
				type = "DelayedDestruction";
			};
			class Smoke1
			{
				simulation = "particles";
				type = "HouseDestructionSmoke3";
				position = "destructionEffect1";
				qualityLevel = 2;
				intensity = 0.15;
				interval = 1;
				lifeTime = 0.05;
			};
			class Smoke2: Smoke1
			{
				type = "HouseDestructionSmoke4";
				lifeTime = 0.035;
			};
			class Smoke3: Smoke1
			{
				type = "HouseDestrSmokeLong";
				lifeTime = 0.035;
			};
			class Smoke1Med
			{
				simulation = "particles";
				type = "HouseDestructionSmoke3Med";
				position = "destructionEffect1";
				qualityLevel = 1;
				intensity = 0.15;
				interval = 1;
				lifeTime = 0.05;
			};
			class Smoke2Med: Smoke1Med
			{
				type = "HouseDestructionSmoke4Med";
				lifeTime = 0.035;
			};
			class Smoke3Med: Smoke1Med
			{
				type = "HouseDestrSmokeLongMed";
				lifeTime = 0.035;
			};
			class Smoke1Low
			{
				simulation = "particles";
				type = "HouseDestructionSmoke3Low";
				position = "destructionEffect1";
				qualityLevel = 0;
				intensity = 0.15;
				interval = 1;
				lifeTime = 0.05;
			};
			class Smoke2Low: Smoke1Low
			{
				type = "HouseDestructionSmoke4Low";
				lifeTime = 0.035;
			};
			class Smoke3Low: Smoke1Low
			{
				type = "HouseDestrSmokeLongLow";
				lifeTime = 0.035;
			};
			class Sound
			{
				intensity = 1;
				interval = 1;
				lifeTime = 0.125;
				position = "destructionEffect1";
				simulation = "sound";
				type = "DestrHouse";
			};
		};
	};
};