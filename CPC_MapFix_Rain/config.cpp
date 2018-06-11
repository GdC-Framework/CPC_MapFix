class CfgPatches
{
	class CPC_MapFix_Rain
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.10;
		requiredAddons[] = {"pja305","A3_Sounds_F_Mak"};
	};
};

class CfgWorlds
{
	class CAWorld;
	class pja305 : CAWorld
	{
		class CfgEnvSounds;
		class EnvSounds : CfgEnvSounds
		{
			class Rain
			{
				name = "Rain";
				sound[] = {"A3\sounds_f\ambient\rain\rain_new_1",0.251189,1,200};
				soundNight[] = {"A3\sounds_f\ambient\rain\rain_new_2",0.316228,1,200};
				volume = "rain";
			};
		};
	};
};