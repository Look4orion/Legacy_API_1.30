class CfgPatches
{
	class Legacy_API_130
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data", "DZ_Scripts"};
	};
};

class CfgMods
{
	class Legacy_API_130
	{
		type = "mod";
		dir = "Legacy_API_130";
		name = "Legacy_API_1.30";
		dependencies[] = {"Game", "World"};
		class defs
		{
			class gameScriptModule
			{
				value = "";
				files[] = {"Legacy_API_130/scripts/3_Game"};
			};
			class worldScriptModule
			{
				value = "";
				files[] = {"Legacy_API_130/scripts/4_World"};
			};
		};
	};
};
