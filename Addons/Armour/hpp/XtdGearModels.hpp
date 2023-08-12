	class XtdGearModels 
	{
    class CfgWeapons 
	{
        class ONI_SF_Armour 
		{
            label = "[ONI] Special Forces Armour";
            author = "Viking Studios";
            options[] = {"camo"};

            class camo 
			{
                changeingame = 0;
                values[] = {"G", "A", "B", "C", "D", "E", "F", "AG", "H", "sheepshagger", "purple","american"};
                class G { label = "Basic"; };
                class A { label = "Rifleman"; };
                class B { label = "Medic"; };
                class C { label = "Marksman"; };
                class D { label = "Sniper"; };
                class E { label = "Scout"; };
                class F { label = "Demolitions"; };
                class AG { label = "Carmichael"; }; // AG for Amteur-God
                class H { label = "Hex"; }; // H for Hex
                class sheepshagger { label = "Celt"; }; // <-- I wrote this classname months ago and i still laugh at it everytime i see it in the code 
                class purple { label = "Storm"; }; // Because he loves purple
                class american { label = "gumbekk"; }; // Because he loves America // And is a CUNT
            };
        };
        class ONI_Recon_Crew_Armour 
		{
            label = "[ONI] Crew Armour";
            author = "Viking Studios";
            options[] = {"camo"};
            class camo {
                changeingame = 0;
                values[] = {"Crew"};   

                class Crew { label = "Crew"; }; 
            };
        };
    };
};