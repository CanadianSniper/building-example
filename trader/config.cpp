class CfgPatches
{
	class cs_trader
	{
		requiredAddons[] = {"DZ_Data"};
	};
};

class CfgVehicles
{
	class HouseNoDestruct;
	class land_trader_container: HouseNoDestruct
	{
		scope = 2;
		model = "trader\trader.p3d";
		class Doors
        {
            class Door1
            {
                displayName = "Door1";
                component = "Door1";
                soundPos = "Door1";
                animPeriod = 1.0;
                initPhase = 0.0;
                initOpened = 0.0;
                soundOpen = "doorMetalTwinBigOpen";
                soundClose = "doorMetalTwinBigClose";
                soundLocked = "doorMetalTwinBigRattle";
                soundOpenABit = "doorMetalTwinBigOpenABit";
            };
		};
	};
};