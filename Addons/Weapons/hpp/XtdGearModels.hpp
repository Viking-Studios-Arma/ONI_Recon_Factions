class XtdGearModels {
	class CfgWeapons {
		class ONI_Commando {
			label = "[ONI] Commando";
			options[] = {"camo"};
			class camo {
				changeingame = 0;
				values[] = {"Standard", "Black", "Tan", "Snow"};
				class Standard { 
					label = "Standard"; 
					image="#(rgb,8,8,3)color(0.49,0.54,0.42,1)";
					};
				class Black { 
					label = "Black";
					image="#(rgb,8,8,3)color(0.31,0.31,0.31,1)";
				};
				class Tan { 
					label = "Tan"; 
					// image="#(rgb,8,8,3)color(0.49,0.54,0.42,1)"; // Tan has a color by Standard
				};
				class Snow {
					label = "Snow";
					image="#(rgb,8,8,3)color(0.74,0.73,0.74,1)";
				};
			};
		};
		class ONI_FC_T25 {
			label = "[ONI] FC-T25";
			options[] = {"variant"};
			class variant {
				label = "Variant";
				changeingame = 0;
				values[] = {"Standard", "J"};
				class Standard { label = "Standard"; };
				class J { label = "J"; };
			};
		};
		class ONI_FC_T50 {
			label = "[ONI] FC-T50";
			options[] = {"variant"};
			class variant {
				label = "Variant";
				changeingame = 0;
				values[] = {"ConcussionRifle", "SRS"};
				class ConcussionRifle { label = "Concussion Rifle"; };
				class SRS { label = "SRS"; };
			};
		};
		class ONI_FC_T51 {
			label = "[ONI] FC-T51";
			options[] = {"type", "variant"};
			class type {
				label = "Type";
				changeingame = 0;
				values[] = {"Carbine", "Repeater"};
				class Standard { label = "Carbine"; };
				class Repeater { label = "Repeater"; };
			};
			class variant {
				label = "Variant";
				changeingame = 0;
				values[] = {"Standard", "J"};
				class Standard { label = "Standard"; };
				class J { label = "J"; };
			};
		};
		class ONI_M295_BMR {
			label = "[ONI] M295 BMR";
			options[] = {"camo"};
			class camo {
				changeingame = 0;
				values[] = {"Standard", "Desert", "Woodland", "Snow"};
				class Standard { 
					label = "Standard"; 
					image="#(rgb,8,8,3)color(0.31,0.31,0.31,1)";
					};
				class Desert {
					label = "Desert";
					image="#(rgb,8,8,3)color(0.53,0.45,0.37,1)";
				};
				class Woodland {
					label = "Woodland";
					image="#(rgb,8,8,3)color(0.49,0.54,0.42,1)";
				};
				class Snow {
					label = "Snow";
					image="#(rgb,8,8,3)color(0.74,0.73,0.74,1)";
				};
			};
		};
		class ONI_M319 {
			label = "[ONI] M319";
			options[] = {"attachment"};
			class attachment {
				Label = "Attachment";
				changeingame = 0;
				values[] = {"Standard", "Foregrip"};
				class Standard { label = "Standard"; };
				class Foregrip { label = "Foregrip"; };
			};
		};
		class ONI_M393_DMR
		{
			label = "[ONI] M393 DMR";
			options[] = {"variant"};
			class variant {
				label = "Variant";
				changeingame = 0;
				values[] = {"Standard", "S"};
				class Standard { label = "Standard"; };
				class S { label = "S"; };
			};
		};
		class ONI_M45
		{
			label = "[ONI] M45";
			options[] = {"variant", "type"};
			class variant {
				label = "Variant";
				changeingame = 0;
				values[] = {"Standard", "A", "E"};
				class Standard { label = "Standard"; };
				class A { label = "A"; };
				class E { label = "E"; };
			};
			class type {
				label = "Type";
				changeingame = 0;
				values[] = {"Standard", "ATAC"};
				class Standard { label = "Standard"; };
				class ATAC { label = "ATAC"; };
			};
		};
		class ONI_MA32 {
			label = "[ONI] MA32";
			options[] = {"variant", "attachment"};
			class variant {
				label = "Variant";
				changeingame = 0;
				values[] = {"Standard", "B"};
				class Standard { label = "Standard"; };
				class B { label = "B"; };
			};
			class attachment {
				Label = "Attachment";
				changeingame = 0;
				values[] = {"Standard", "UGL"};
				class Standard { label = "Standard"; };
				class UGL { label = "UGL"; };
			};
		};
		class ONI_MA37 {
			label = "[ONI] MA37";
			options[] = {"variant", "attachment"};
			class variant {
				label = "Variant";
				changeingame = 0;
				values[] = {"Standard", "B"};
				class Standard { label = "Standard"; };
				class B { label = "B"; };
			};
			class attachment {
				Label = "Attachment";
				changeingame = 0;
				values[] = {"Standard", "UGL"};
				class Standard { label = "Standard"; };
				class UGL { label = "UGL"; };
			};
		};
		class ONI_MA5 {
			label = "[ONI] MA5";
			options[] = {"variant", "attachment"};
			class variant {
				label = "Variant";
				changeingame = 0;
				values[] = {"A", "B", "C", "K"};
				class A { label = "A"; };
				class B { label = "B"; };
				class C { label = "C"; };
				class K { label = "K"; };
			};
			class attachment {
				Label = "Attachment";
				changeingame = 0;
				values[] = {"Standard", "UGL"};
				class Standard { label = "Standard"; };
				class UGL { label = "UGL"; };
			};
		};
		class ONI_SRM77
		{
			label = "[ONI] SRM77";
			options[] = {"variant"};
			class variant {
				label = "Variant";
				changeingame = 0;
				values[] = {"S1", "S2"};
				class S1 { label = "S1"; };
				class S2 { label = "S2"; };
			};
		};
		class ONI_SRS99
		{
			label = "[ONI] SRS99";
			options[] = {"variant"};
			class variant {
				label = "Variant";
				changeingame = 0;
				values[] = {"C", "D"};
				class C { label = "C"; };
				class D { label = "D"; };
			};
		};
		class ONI_ARM
		{
			label = "[ONI] ARM";
			options[] = {"Variant","attachment","camo"};
			class variant 
			{
				label = "variant";
				changeingame = 0;
				values[] = {"A","B"};
				class A { label = "37"; };
				class B { label = "X"; };
			};
			class attachment
			{
				label = "attachment";
				changeingame = 0;
				values[] = {"A","B","C"};
				class A { label = "Standard"; };
				class B { label = "UGL"; };
				class C { label = "Breacher"; };
			};
			class camo
			{
				label = "Camo";
				changingame = 0;
				values[] = {"A","B"};
				class A { label = "Dark"; };
				class B { label = "Light"; };
			};
		};
		class ONI_BR55
		{
			label = "[ONI] BR55";
			options[] = {"Variant"};
			class variant
			{
				label = "Variant";
				changeingame = 0;
				values[] = {"A","B"};
				class A { label = "Standard"; };
				class B { label = "HB"; };
			};
		};
		// Secondaries
		class ONI_FC_T25_Folded
		{
			label = "[ONI] FC-T25 Folded";
			options[] = {"variant"};
			class variant {
				label = "Variant";
				changeingame = 0;
				values[] = {"Standard", "J"};
				class Standard { label = "Standard"; };
				class J { label = "J"; };
			};
		};
		class ONI_319_Secondary
		{
			label = "[ONI] M319";
			options[] = {"camo"};
			class camo {
				label = "Camo";
				changeingame = 0;
				values[] = {"Standard", "Orange"};
				class Standard { label = "Standard"; };
				class Orange { label = "Orange"; };
			};
		};
		class ONI_M6 {
			label = "[ONI] M6";
			options[] = {"variant"};
			class variant {
				label = "Variant";
				changeingame = 0;
				values[] = {"B", "C", "G"};
				class B { label = "B"; };
				class C { label = "C"; };
				class G { label = "G"; };
			};
		};
		//Launchers
		class ONI_FC_T33
		{
			label = "[ONI] FC-T33";
			options[] = {"variant"};
			class variant {
				label = "Variant";
				changeingame = 0;
				values[] = {"Unguided", "Guided"};
				class Unguided { label = "Unguided"; };
				class Guided { label = "Guided"; };
			};
		};
		class ONI_M96_LAW
		{
			label = "[ONI] M96 LAW";
			options[] = {"camo"};
			class Camo
			{
				label = "Camo";
				changeingame = 0;
				values[] = {"A","B","C","D"};
				class A { label = "Standard"; };
				class B { label = "Black"; };
				class C { label = "Desert"; };
				class D { label = "Arc"; };
			};
		};
		class ONI_Pilum
		{
			label = "[ONI] Pilum";
			options[] = {"camo"};
			class Camo
			{
				label = "Camo";
				changeingame = 0;
				values[] = {"A","B"};
				class A { label = "Standard"; };
				class B { label = "Black"; };
			};
		};
		class ONI_Melee
		{
			label = "[ONI] Melee Weapons";
			options[] = {"variant"};
			class variant {
				label = "Variant";
				changeingame = 0;
				values[] = {"A", "B","C"};
				class A { label = "M3"; };
				class B { label = "UNSC"; };
				class C { label = "UNSC Reversed"; };
			};
		};
	};
};