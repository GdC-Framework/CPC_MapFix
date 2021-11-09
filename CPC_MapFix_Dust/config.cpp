class CfgPatches
{
	class CPC_MapFix_Dust
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.10;
		requiredAddons[]= {"A3_Data_F"};
	};
};

class CfgDustEffectsMan
{
	class Both{};
	class Right : Both
	{
		#include "\CPC_MapFix\CPC_MapFix_Dust\cup\man_r.hpp"
		#include "\CPC_MapFix\CPC_MapFix_Dust\a2\man_r.hpp"
		#include "\CPC_MapFix\CPC_MapFix_Dust\ib\man_r.hpp"
		#include "\CPC_MapFix\CPC_MapFix_Dust\makhno\man_r.hpp"
		#include "\CPC_MapFix\CPC_MapFix_Dust\gm\man_r.hpp"
		#include "\CPC_MapFix\CPC_MapFix_Dust\pkl\man_r.hpp"
		#include "\CPC_MapFix\CPC_MapFix_Dust\chernarus2020\man_r.hpp"
		#include "\CPC_MapFix\CPC_MapFix_Dust\temppa\man_r.hpp"
	};
	class Left: Both
	{
		#include "\CPC_MapFix\CPC_MapFix_Dust\cup\man_l.hpp"
		#include "\CPC_MapFix\CPC_MapFix_Dust\a2\man_l.hpp"
		#include "\CPC_MapFix\CPC_MapFix_Dust\ib\man_l.hpp"
		#include "\CPC_MapFix\CPC_MapFix_Dust\makhno\man_l.hpp"
		#include "\CPC_MapFix\CPC_MapFix_Dust\gm\man_l.hpp"
		#include "\CPC_MapFix\CPC_MapFix_Dust\pkl\man_l.hpp"
		#include "\CPC_MapFix\CPC_MapFix_Dust\chernarus2020\man_l.hpp"
		#include "\CPC_MapFix\CPC_MapFix_Dust\temppa\man_l.hpp"
	};
};

class CfgDustEffectsCar
{
	class Both{};
	class Right : Both
	{
		#include "\CPC_MapFix\CPC_MapFix_Dust\cup\car_r.hpp"
		#include "\CPC_MapFix\CPC_MapFix_Dust\a2\car_r.hpp"
		#include "\CPC_MapFix\CPC_MapFix_Dust\ib\car_r.hpp"
		#include "\CPC_MapFix\CPC_MapFix_Dust\makhno\car_r.hpp"
		#include "\CPC_MapFix\CPC_MapFix_Dust\gm\car_r.hpp"
		#include "\CPC_MapFix\CPC_MapFix_Dust\pkl\car_r.hpp"
		#include "\CPC_MapFix\CPC_MapFix_Dust\chernarus2020\car_r.hpp"
		#include "\CPC_MapFix\CPC_MapFix_Dust\temppa\car_r.hpp"
	};
	class Left: Both
	{
		#include "\CPC_MapFix\CPC_MapFix_Dust\cup\car_l.hpp"
		#include "\CPC_MapFix\CPC_MapFix_Dust\a2\car_l.hpp"
		#include "\CPC_MapFix\CPC_MapFix_Dust\ib\car_l.hpp"
		#include "\CPC_MapFix\CPC_MapFix_Dust\makhno\car_l.hpp"
		#include "\CPC_MapFix\CPC_MapFix_Dust\gm\car_l.hpp"
		#include "\CPC_MapFix\CPC_MapFix_Dust\pkl\car_l.hpp"
		#include "\CPC_MapFix\CPC_MapFix_Dust\chernarus2020\car_l.hpp"
		#include "\CPC_MapFix\CPC_MapFix_Dust\temppa\car_l.hpp"
	};
};

class CfgDustEffectsTank
{
	class Both{};
	class Right : Both
	{
		#include "\CPC_MapFix\CPC_MapFix_Dust\cup\tank_r.hpp"
		#include "\CPC_MapFix\CPC_MapFix_Dust\a2\tank_r.hpp"
		#include "\CPC_MapFix\CPC_MapFix_Dust\ib\tank_r.hpp"
		#include "\CPC_MapFix\CPC_MapFix_Dust\makhno\tank_r.hpp"
		#include "\CPC_MapFix\CPC_MapFix_Dust\gm\tank_r.hpp"
		#include "\CPC_MapFix\CPC_MapFix_Dust\pkl\tank_r.hpp"
		#include "\CPC_MapFix\CPC_MapFix_Dust\chernarus2020\tank_r.hpp"
		#include "\CPC_MapFix\CPC_MapFix_Dust\temppa\tank_r.hpp"
	};
	class Left: Both
	{
		#include "\CPC_MapFix\CPC_MapFix_Dust\cup\tank_l.hpp"
		#include "\CPC_MapFix\CPC_MapFix_Dust\a2\tank_l.hpp"
		#include "\CPC_MapFix\CPC_MapFix_Dust\ib\tank_l.hpp"
		#include "\CPC_MapFix\CPC_MapFix_Dust\makhno\tank_l.hpp"
		#include "\CPC_MapFix\CPC_MapFix_Dust\gm\tank_l.hpp"
		#include "\CPC_MapFix\CPC_MapFix_Dust\pkl\tank_l.hpp"
		#include "\CPC_MapFix\CPC_MapFix_Dust\chernarus2020\tank_l.hpp"
		#include "\CPC_MapFix\CPC_MapFix_Dust\temppa\tank_l.hpp"
	};
};

class CfgDustEffectsTankSmall
{
	class Both{};
	class Right : Both
	{
		#include "\CPC_MapFix\CPC_MapFix_Dust\cup\car_r.hpp"
		#include "\CPC_MapFix\CPC_MapFix_Dust\a2\car_r.hpp"
		#include "\CPC_MapFix\CPC_MapFix_Dust\ib\car_r.hpp"
		#include "\CPC_MapFix\CPC_MapFix_Dust\makhno\car_r.hpp"
		#include "\CPC_MapFix\CPC_MapFix_Dust\gm\car_r.hpp"
		#include "\CPC_MapFix\CPC_MapFix_Dust\pkl\car_r.hpp"
		#include "\CPC_MapFix\CPC_MapFix_Dust\chernarus2020\car_r.hpp"
		#include "\CPC_MapFix\CPC_MapFix_Dust\temppa\car_r.hpp"
	};
	class Left: Both
	{
		#include "\CPC_MapFix\CPC_MapFix_Dust\cup\car_l.hpp"
		#include "\CPC_MapFix\CPC_MapFix_Dust\a2\car_l.hpp"
		#include "\CPC_MapFix\CPC_MapFix_Dust\ib\car_l.hpp"
		#include "\CPC_MapFix\CPC_MapFix_Dust\makhno\car_l.hpp"
		#include "\CPC_MapFix\CPC_MapFix_Dust\gm\car_l.hpp"
		#include "\CPC_MapFix\CPC_MapFix_Dust\pkl\car_l.hpp"
		#include "\CPC_MapFix\CPC_MapFix_Dust\chernarus2020\car_l.hpp"
		#include "\CPC_MapFix\CPC_MapFix_Dust\temppa\car_l.hpp"
	};
};

class CfgDustEffectsAir
{
	class Both{};
	class Right : Both
	{
		#include "\CPC_MapFix\CPC_MapFix_Dust\makhno\air_r.hpp"
		#include "\CPC_MapFix\CPC_MapFix_Dust\ib\air_r.hpp"
	};
	class Left: Both
	{
		#include "\CPC_MapFix\CPC_MapFix_Dust\makhno\air_l.hpp"
		#include "\CPC_MapFix\CPC_MapFix_Dust\ib\air_l.hpp"
	};
};
			