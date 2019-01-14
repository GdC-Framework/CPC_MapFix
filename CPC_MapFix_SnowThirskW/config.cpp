class CfgPatches
{
	class CPC_MapFix_SnowThirskW
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.10;
		requiredAddons[] = {"ThirskW","A3_Sounds_F_Exp"};
	};
};

class CfgWorlds
{
	class CAWorld;
	class ThirskW : CAWorld
	{
		startWeather = 0.8;
		forecastWeather = 0.8;
		startFog = 0.4;
		forecastFog = 0.4;
		#include "\CUP\Terrains\cup_terrains_worlds\Ambient\AmbientWinter.hpp"
		#include "\CUP\Terrains\cup_terrains_weather\snowfall.hpp"
		class EnvSounds
		{
			class Rain
			{
				name = "$STR_DN_RAIN";
				sound[] = {"A3\sounds_f\ambient\winds\wind-synth-slow", 0.0199526, 1};
				soundNight[] = {"A3\sounds_f\ambient\winds\wind-synth-slow", 0.03, 1};
				volume = "(windy factor[0,1])";
			};
			class Meadows
			{
				name = "$STR_DN_MEADOWS";
				sound[] = {"A3\sounds_f\dummysound",0.031622775,1};
				volume = "(1-forest)*(1-houses)*(1-night)*(1-sea)";
				random[] = {};
			};
			class MeadowsNight
			{
				name = "$STR_DN_MEADOWS";
				sound[] = {"A3\sounds_f\dummysound",0.031622775,1};
				volume = "(1-forest)*(1-houses)*night*(1-sea)";
				random[] = {};
			};
			class WindForestHigh
			{
				name = "$STR_DN_WIND";
				sound[] = {"A3\sounds_f\ambient\winds\wind-synth-slow", 0.0199526, 1};
				volume = "forest*(windy factor[0,1])*(0.1+(hills factor[0,1])*0.9)-(night*0.25)";
				random[] = {};
			};
			class WindNoForestHigh
			{
				name = "$STR_DN_WIND";
				sound[] = {"A3\sounds_f\ambient\winds\wind-synth-slow", 0.0199526, 1};
				volume = "(1-forest)*(windy factor[0,1])*(0.1+(hills factor[0,1])*0.9)-(night*0.25)";
				random[] = {};
			};
			class Forest
			{
				name = "$STR_DN_WIND";
				sound[] = {"A3\sounds_f\dummysound",0.031622775,1};
				volume = "forest*(1-night)";
				random[] = {};
			};
			class ForestNight
			{
				name = "$STR_DN_WIND";
				sound[] = {"A3\sounds_f\dummysound",0.031622775,1};
				volume = "forest*night";
				random[] = {};
			};
			class Houses
			{
				name = "$STR_DN_WIND";
				sound[] = {"A3\sounds_f\dummysound",0.031622775,1};
				volume = "(houses-0.75)*4";
				random[] = {};
			};
		};
	};
};
class CfgSoundShaders
{
	class footsteps_default_run_Exp_SoundShader;
	class CPC_footsteps_snow_run_SoundShader: footsteps_default_run_Exp_SoundShader
	{
		samples[] = {{"\RHNET\Thirsk4\Sounds\Snow\run1",1},{"\RHNET\Thirsk4\Sounds\Snow\run2",1},{"\RHNET\Thirsk4\Sounds\Snow\run3",1},{"\RHNET\Thirsk4\Sounds\Snow\run4",1},{"\RHNET\Thirsk4\Sounds\Snow\run5",1}};
		volume = 0.3;
		frequency = 1;
	};
	class footsteps_default_walk_Exp_SoundShader;
	class CPC_footsteps_snow_walk_SoundShader: footsteps_default_walk_Exp_SoundShader
	{
		samples[] = {{"\RHNET\Thirsk4\Sounds\Snow\walk1",1},{"\RHNET\Thirsk4\Sounds\Snow\walk2",1},{"\RHNET\Thirsk4\Sounds\Snow\walk3",1},{"\RHNET\Thirsk4\Sounds\Snow\walk4",1},{"\RHNET\Thirsk4\Sounds\Snow\walk5",1}};
		volume = 0.25;
		frequency = 1;
	};
	class footsteps_default_sprint_Exp_SoundShader;
	class CPC_footsteps_snow_sprint_SoundShader: footsteps_default_sprint_Exp_SoundShader
	{
		samples[] = {{"\RHNET\Thirsk4\Sounds\Snow\sprint1",1},{"\RHNET\Thirsk4\Sounds\Snow\sprint2",1},{"\RHNET\Thirsk4\Sounds\Snow\sprint3",1},{"\RHNET\Thirsk4\Sounds\Snow\sprint4",1},{"\RHNET\Thirsk4\Sounds\Snow\sprint5",1}};
		volume = 0.4;
		frequency = 1;
	};
};

class CfgSoundSets
{
	class footsteps_default_run_Exp_SoundSet;
	class CPC_footsteps_snow_run_SoundSet: footsteps_default_run_Exp_SoundSet
	{
		soundShaders[] = {"CPC_footsteps_snow_run_SoundShader","CPC_footsteps_snow_run_SoundShader","CPC_footsteps_snow_run_SoundShader","CPC_footsteps_snow_run_SoundShader"};
	};
	class footsteps_default_walk_Exp_SoundSet;
	class CPC_footsteps_snow_walk_SoundSet: footsteps_default_walk_Exp_SoundSet
	{
		soundShaders[] = {"CPC_footsteps_snow_walk_SoundShader","CPC_footsteps_snow_walk_SoundShader","CPC_footsteps_snow_walk_SoundShader","CPC_footsteps_snow_walk_SoundShader"};
	};
	class footsteps_default_sprint_Exp_SoundSet;
	class CPC_footsteps_snow_sprint_SoundSet: footsteps_default_sprint_Exp_SoundSet
	{
		soundShaders[] = {"CPC_footsteps_snow_sprint_SoundShader","CPC_footsteps_snow_sprint_SoundShader","CPC_footsteps_snow_sprint_SoundShader","CPC_footsteps_snow_sprint_SoundShader"};
	};
	class footsteps_default_tactical_Exp_SoundSet;
	class CPC_footsteps_snow_tactical_SoundSet: footsteps_default_tactical_Exp_SoundSet
	{
		soundShaders[] = {"CPC_footsteps_snow_walk_SoundShader","CPC_footsteps_snow_walk_SoundShader","CPC_footsteps_snow_walk_SoundShader","CPC_footsteps_snow_walk_SoundShader"};
	};
};

class CfgVehicles {
	class Land;
	class Man : Land {};
	class CAManBase : Man
	{
		class SoundEnvironExt
		{
			snow[] = {{"run",{"soundset","CPC_footsteps_snow_run_SoundSet"}},{"walk",{"soundset","CPC_footsteps_snow_walk_SoundSet"}},{"sprint",{"soundset","CPC_footsteps_snow_sprint_SoundSet"}},{"tactical",{"soundset","CPC_footsteps_snow_tactical_SoundSet"}},{"crawl",{"soundset","footsteps_sand_crawl_Exp_SoundSet"}}};
		};
	};
};