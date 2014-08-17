class ExtraRc {
    class bulk_ItemSandbag {
        class sandWatchTower {
            text = "Sandbag Watch Tower";
            script = "[""Land_Fort_Watchtower"",[""ItemToolbox"",""ItemEtool"",""ItemHatchet_DZE""],[[""PartPlankPack"", 1],[""bulk_ItemSandbag"", 1],[""forest_net_kit"", 1]],[0,6.5,2.5]] execVM ""custom\snap_pro\player_build.sqf"";";
        };
		class bigNest {
            text = "Sandbag Big Nest";
            script = "[""Land_fortified_nest_big"",[""ItemToolbox"",""ItemEtool"",""ItemHatchet_DZE""],[[""PartPlankPack"", 1],[""bulk_ItemSandbag"", 1],[""ItemBurlap"", 1]],[0,8,1.1]] execVM ""custom\snap_pro\player_build.sqf"";";
        };
		class bigCamp {
            text = "Sandbag Camp";
            script = "[""WarfareBCamp"",[""ItemToolbox"",""ItemEtool"",""ItemHatchet_DZE""],[[""PartPlankPack"", 1],[""bulk_ItemSandbag"", 1],[""ItemBurlap"", 1]],[0,10,1.1]] execVM ""custom\snap_pro\player_build.sqf"";";
        };
	};
	class ItemPole {
		class milWatchMedium {
            text = "Small Watch Tower";
            script = "[""Land_vez"",[""ItemToolbox"",""ItemEtool"",""ItemCrowbar"",""ItemSledge""],[[""PartGeneric"", 1],[""ItemPole"", 1]],[0,4,4.6]] execVM ""custom\snap_pro\player_build.sqf"";";
        };
		class metalWatchTower {
            text = "Medium Watch Tower";
            script = "[""Land_radar_EP1"",[""ItemToolbox"",""ItemEtool"",""ItemCrowbar"",""ItemSledge""],[[""PartGeneric"", 1],[""ItemPole"", 1],[""CinderBlocks"", 1]],[0,4.5,6.7]] execVM ""custom\snap_pro\player_build.sqf"";";
        };
		class lightWatchTower {
            text = "High Watch Tower (Light)";
            script = "[""Land_Ind_IlluminantTower"",[""ItemToolbox"",""ItemEtool"",""ItemCrowbar"",""ItemSledge""],[[""PartGeneric"", 1],[""ItemPole"", 1],[""ItemLightBulb"", 1],[""CinderBlocks"", 1]],[0,3,10]] execVM ""custom\snap_pro\player_build.sqf"";";
        };
		class stopBoom {
            text = "STOP Gate";
            script = "[""ZavoraAnim"",[""ItemToolbox"",""ItemEtool""],[[""PartGeneric"", 1],[""ItemPole"", 1]],[0,3,4.4]] execVM ""custom\snap_pro\player_build.sqf"";";
        };
		class scaffoldSmall {
            text = "Small Scaffold";
            script = "[""MAP_leseni2x"",[""ItemToolbox"",""ItemEtool""],[[""PartGeneric"", 1],[""ItemPole"", 1],[""PartWoodPlywood"", 1]],[0,3,1.55]] execVM ""custom\snap_pro\player_build.sqf"";";
        };
		class scaffoldHigh {
            text = "High Scaffold";
            script = "[""MAP_leseni4x"",[""ItemToolbox"",""ItemEtool""],[[""PartGeneric"", 1],[""ItemPole"", 1],[""PartWoodPlywood"", 1],[""ItemWoodLadder"", 1]],[0,3,3.87]] execVM ""custom\snap_pro\player_build.sqf"";";
        };
	};
	class PartGeneric {
		class climbingObstacle {
            text = "Climbing Obstacle";
            script = "[""Land_Climbing_Obstacle"",[""ItemToolbox""],[[""PartGeneric"", 1],[""PartWoodPlywood"", 1]],[0,3,1.1]] execVM ""custom\snap_pro\player_build.sqf"";";
        };
		class metalHouse1 {
            text = "Small Metal House 1";
            script = "[""mbg_slum01_EO"",[""ItemToolbox""],[[""PartGeneric"", 1],[""PartWoodPlywood"", 1]],[0,3,1.6]] execVM ""custom\snap_pro\player_build.sqf"";";
        };
		class metalHouse2 {
            text = "Small Metal House 2";
            script = "[""mbg_slum02_EO"",[""ItemToolbox""],[[""PartGeneric"", 1],[""PartWoodPlywood"", 1]],[0,3,1.6]] execVM ""custom\snap_pro\player_build.sqf"";";
        };
		class metalHouse3 {
            text = "Small Metal House 3";
            script = "[""mbg_slum03h_EO"",[""ItemToolbox""],[[""PartGeneric"", 1],[""PartWoodPlywood"", 1]],[0,3,1.7]] execVM ""custom\snap_pro\player_build.sqf"";";
        };
	};
	class PartPlankPack {
		class castleStairs {
            text = "Castle Stairs";
            script = "[""Land_A_Castle_Stairs_A"",[""ItemToolbox"",""ItemCrowbar"",""ItemSledge""],[[""PartPlankPack"", 1],[""PartPlywoodPack""]],[-4,6,3.8]] execVM ""custom\snap_pro\player_build.sqf"";";
        };
		class heliPadRound {
			text = "Heli Pad";
			script = "[""HeliHCivil"",[""ItemToolbox""],[[""PartPlankPack"", 1]],[0,7.5,0]] execVM ""custom\snap_pro\player_build.sqf"";";
		};
	};
	class PartPlywoodPack {
		class stopSignBlue {
            text = "Stop Sign";
            script = "[""Sign_Checkpoint_US_EP1"",[""ItemToolbox""],[[""PartPlywoodPack"", 1]],[0,2,0.45]] execVM ""custom\snap_pro\player_build.sqf"";";
        };
	};
	class ItemFuelBarrel {
		class smallFuelTank {
            text = "Fuel Tank";
            script = "[""Land_Ind_TankSmall2_EP1"",[""ItemToolbox"",""ItemSledge""],[[""ItemPole"", 1],[""PartGeneric"", 1],[""ItemFuelBarrel"", 1]],[0,3,1.5]] execVM ""custom\snap_pro\player_build.sqf"";";
        };
		class fireBarrelBurn {
			text = "Fire Barrel Burning";
			script = "[""Land_Fire_barrel_burning"",[""ItemHatchet_DZE""],[[""PartWoodPile"", 1],[""ItemFuelBarrel"", 1]],[0,2,0.65]] execVM ""custom\snap_pro\player_build.sqf"";";
		};
	};
	class ItemWaterbottle {
		class waterWell {
			text = "Water Well";
			script = "[""MAP_Misc_WellPump"",[""ItemToolbox"",""ItemEtool"",""ItemSledge""],[[""ItemWaterbottle"", 1],[""PartGeneric"", 1],[""PartPlankPack"", 1]],[0,3,0.9]] execVM ""custom\snap_pro\player_build.sqf"";";
        };
		class waterPump {
			text = "Water Pump";
			script = "[""Land_pumpa"",[""ItemToolbox"",""ItemEtool"",""ItemSledge""],[[""ItemWaterbottle"", 1],[""PartGeneric"", 1],[""ItemPole"", 1]],[0,4.5,1.2]] execVM ""custom\snap_pro\player_build.sqf"";";
		};
	};
	class PartWoodPile {
		class campFireLarge {
			text = "CampFire Burning";
			script = "[""Land_Campfire_burning"",[""ItemToolbox"",""ItemHatchet_DZE""],[[""PartWoodPile"", 1],[""CinderBlocks"", 1]],[0,4,0.4]] execVM ""custom\snap_pro\player_build.sqf"";";
		};
	};
	class ItemLightBulb {
		class runwayBlueLight {
			text = "Runway Light Blue";
			script = "[""ASC_runway_BluelightB"",[""ItemToolbox""],[[""ItemLightBulb"", 1],[""PartGeneric"", 1]],[0,2,0.2]] execVM ""custom\snap_pro\player_build.sqf"";";
		};
		class runwayYellowLight {
			text = "Runway Light Yellow";
			script = "[""ASC_runway_YellowlightB"",[""ItemToolbox""],[[""ItemLightBulb"", 1],[""PartGeneric"", 1]],[0,2,0.2]] execVM ""custom\snap_pro\player_build.sqf"";";
		};
		class cam {
			text = "Cam";
			script = "[""Microphone3_ep1"",[""ItemToolbox""],[[""ItemLightBulb"", 1],[""PartGeneric"", 1],[""Laserbatteries"", 1]],[0,5,3]] execVM ""custom\snap_pro\player_build.sqf"";";
		};
		class smallTV {
			text = "TV";
			script = "[""SmallTV"",[""ItemToolbox""],[[""ItemLightBulb"", 1],[""PartGeneric"", 1],[""Laserbatteries"", 1]],[0,3,1.5]] execVM ""custom\snap_pro\player_build.sqf"";";
		};
	};
	class CinderBlocks {
		class cinderBlockBY {
			text = "Color Cinder Block";
			script = "[""Land_CncBlock_Stripes"",[""ItemToolbox""],[[""CinderBlocks"", 1],[""PartGeneric"", 1]],[0,2,0.4]] execVM ""custom\snap_pro\player_build.sqf"";";
		};
		class rampConcreteNormal {
			text = "Concrete Ramp";
			script = "[""RampConcrete"",[""ItemToolbox""],[[""CinderBlocks"", 1],[""cinder_wall_kit"", 1]],[0,8,0.5]] execVM ""custom\snap_pro\player_build.sqf"";";
		};
	};
	class Binocular_Vector  {
		class viewdistanceTitle {
			text = "View Distance:";
			script = "systemChat('Change View Distance Locally. Click on one of the distance options');";
		};
		class distance400m {
			text = "400 Meters";
			script = "setViewDistance 400; systemChat('ViewDistance: 400');";
		};
		class distance600m {
			text = "600 Meters";
			script = "setViewDistance 600; systemChat('ViewDistance: 600');";
		};
		class distance800m {
			text = "800 Meters";
			script = "setViewDistance 800; systemChat('ViewDistance: 800');";
		};
		class distance1000m {
			text = "1000 Meters";
			script = "setViewDistance 1000; systemChat('ViewDistance: 1000');";
		};
		class distance1250m {
			text = "1250 Meters";
			script = "setViewDistance 1250; systemChat('ViewDistance: 1250');";
		};
		class distance1500m {
			text = "1500 Meters";
			script = "setViewDistance 1500; systemChat('ViewDistance: 1500');";
		};
		class distance2000m {
			text = "2000 Meters";
			script = "setViewDistance 2000; systemChat('ViewDistance: 2000'); systemChat('Warning: Higher the view distance Lower the FPS');";
		};
		class distance3000m {
			text = "3000 Meters";
			script = "setViewDistance 3000; systemChat('ViewDistance: 3000'); systemChat('Warning: Higher the view distance Lower the FPS');";
		};
		class distance5000m {
			text = "5000 Meters";
			script = "setViewDistance 5000; systemChat('ViewDistance: 5000'); systemChat('Warning: Higher the view distance Lower the FPS');";
		};
	};
	class Binocular : Binocular_Vector {};
};
