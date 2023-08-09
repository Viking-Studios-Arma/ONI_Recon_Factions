class XtdGearModels {
	class CfgWeapons {
		class ONI_Helmet_SF {
			label = "[ONI] Helmet SF";
			author = "Viking Studios";
			options[] = {"camo"};
			class camo {
				changeingame = 0;
				values[] = {"A","B","H","S","sheepshagger","AG"};
				class A { label = "Rifleman"; };
				class B	{ label = "Medic"; };
				class H	{ label = "Hex"; };
				class S	{ label = "Stormwire"; };
				class sheepshagger { label = "Celt"; };
				class AG	{ label = "Carmichael"; };
			};
		};
		class ONI_Flight_Pilot {
			label = "[ONI] Pilot Helmets";
			author = "Viking Studios";
			options[] = {"Visor"};
			class visor{
				changeingame = 0;
				values[] = {"B","A"};
				class B { label = "UP"; };
				class A { label = "Down"; };
			};
		};
		class ONI_Flight_LT {
			label = "[ONI] Pilot Helmets";
			author = "Viking Studios";
			options[] = {"Visor"};
			class visor {
                changeingame = 0;
				values[] = {"B","A"};
				class B { label = "UP"; };
				class A { label = "Down"; };
			};
		};
		class ONI_Flight_CPT {
			label = "[ONI] Pilot Helmets";
			author = "Viking Studios";
			options[] = {"Visor","mask"};
			class visor
			{
				changeingame = 0;
				values[] = {"B","A"};
				class B { label = "UP"; };
				class A { label = "Down"; };
			};
		};
	};
};