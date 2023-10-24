<p align="center">
	<img src="https://github.com/Viking-Studios-Arma/ONI_Recon_Essentials/blob/5d17ad1523638d20144793f82f990c9eececcb5a/Falcon%20flight%20banner%20W-logo.png" alt="ONI Recon Banner Banner" />
	<br />
	<a href="https://discord.gg/9pJTHHzaFC">
		<img src="https://img.shields.io/discord/1032437213100777502.svg?label=Discord&logo=Discord&colorB=7289da&style=for-the-badge" alt="Discord Server">
	</a>
	<a href="https://steamcommunity.com/sharedfiles/filedetails/?id=2877010969">
		<img src="https://img.shields.io/steam/subscriptions/2877010969?style=for-the-badge" alt="Steam Subscriptions">
	</a>
	
</p>
</p>
<p align="center">
	<a href="https://steamcommunity.com/sharedfiles/filedetails/?id=2877010969">
		<img src="https://img.shields.io/steam/size/2877010969?label=Download&logo=steam" alt="Download" />
	</a>
	<a href="https://github.com/Viking-Studios-Arma/ONI_Recon_Factions/releases">
		<img src="https://img.shields.io/github/release/Viking-Studios-Arma/ONI_Recon_Factions.svg?label=Version" alt="Version" />
	</a>
	<a href="https://github.com/Viking-Studios-Arma/ONI_Recon_Factions/issues">
		<img src="http://img.shields.io/github/issues-raw/Viking-Studios-Arma/ONI_Recon_Factions.svg?label=Issues&style=flat" alt="Issues" />
	</a>
	<a href="Viking-Studios-Arma/ONI_Recon_Factions/blob/main/LICENSE">
		<img src="https://img.shields.io/github/license/Viking-Studios-Arma/ONI_Recon_Factions.svg?style=flat&label=Licence" alt="License">
	</a>
</p>

<p align="center"><sup><strong>Introducing a new Non-Canon UNSC ONI Faction to OPTRE and making life easier for members of ONI Recon.</strong></sup></p>

## Dependencies
### Required
- [CBA A3](https://steamcommunity.com/sharedfiles/filedetails/?id=450814997)
- [Operation TREBUCHET](https://steamcommunity.com/workshop/filedetails/?id=769440155)
- [Operation TREBUCHET First Contact](https://steamcommunity.com/workshop/filedetails/?id=1572627279)

### Recommended Mods
Whilst ONI Recon Essentials doesn't depend on the following mods, some individual functionality will be missing without them:
- [ACE](https://steamcommunity.com/workshop/filedetails/?id=463939057)
- [Operation TREBUCHET ACE Compat](https://steamcommunity.com/workshop/filedetails/?id=1267657613)
- [Operation TREBUCHET First Contact ACE Compat](https://steamcommunity.com/workshop/filedetails/?id=1572642262)
- [Task Force Arrowhead Radio (BETA!!!)](https://steamcommunity.com/workshop/filedetails/?id=894678801)
- [ACE3 Arsenal Extended - Core](https://steamcommunity.com/sharedfiles/filedetails/?id=2522638637)
- [Ace Arsenal Category Framework](https://steamcommunity.com/sharedfiles/filedetails/?id=2850254784)

# For Developers of this mod
## Install
We have a build system to allow for key signing and addon compiling.

### Requirements
1. [Git for Windows](https://git-scm.com/download/win)
1. Windows PowerShell v5.1 or higher

<ins>Automated Process:</ins>

To automatically set up your system and build the mod you can execute the included `build.bat` file.
You can do this by either going to `\tools` and double clicking the `build.bat` file, or if you use VSC you can select the bat file then in the `TERMINAL` at the bottom you can select the `Run Active File` option from the `...` menu.

<ins>Manual Proccess:</ins>

To set up your system to use the build script:
- Open Windows PowerShell as Administrator and execute `set-executionpolicy remotesigned`
- In the future, always use PowerShell as Admin

### Windows
If on Windows, use the `tools\make.ps1` file to build the mod for you. It will build the mod, sign the addons, include the public key in the `keys` folder, and also copy across all files found in the `extras` folder, as well as the files specified in the file `tools\support-files.txt`.

The build script will NOT leave the private key in the `keys` folder. It will delete it instead, to avoid any accidental uploading or distribution.

Be aware, that the names of the `.bisign` and `.bikey` files depend on the latest tag on git. This means that, if you wish to upload a release, it is advised to first tag the latest git commit, and then build the mod. That way you have a nice version, such as `VS_ONI_v1.0.0.bikey` rather than `VS_ONI_Stable-gae17a97.bikey`.
## Naming conventions
For standardisation between class names and to prevent any possible future conflicts with class names the following naming convention has been developed:
- for code: ONI_Factions
- for presentation: ONI Factions - {Addon Name}
</p>
<br />

## Preview images of the Medic and standard Armour and Helmet

| 			    | 				| 			    |
|:-------------------------:|:-------------------------:|:-------------------------:|
|Medic Helmet Back|Medic Helmet Front|Medic Armour Side|
|<img width="1604" src="https://steamuserimages-a.akamaihd.net/ugc/2056502367325485483/8D0CAB0BD329124FDD81C264D317888196160629/" alt="Medic Helmet Back" />   |  <img width="1604" alt="Medic Helmet Front" src="https://steamuserimages-a.akamaihd.net/ugc/2056502367325486082/C1E8B5D0E36770943CE1FBF8257814C3E2444A4C/">|<img width="1604" alt="Medic Armour Side" src="https://steamuserimages-a.akamaihd.net/ugc/2056502367325486572/F85C7F575BA30034E157B1EC4AD84B30BE8A390E/" />
| 			    | 				| 			    |
|Medic Armour Front (Full)|Medic Armour Back (Full)|Standard Armour Front (Full)|
|<img width="1604" alt="Medic Armour Front (Full)" src="https://steamuserimages-a.akamaihd.net/ugc/2056502367325487291/3FF5D505158EAF1F48175C62A43EF294095BD70A/" >|<img width="1604" alt="Medic Armour Back (Full)" src="https://steamuserimages-a.akamaihd.net/ugc/2056502367325487483/29872B12959F5EEB911D90B5E6574D0B10140A9B/" >|<img width="1604" alt="Standard Armour Front (Full)" src="https://steamuserimages-a.akamaihd.net/ugc/2056502367325488607/3836867BCABB2F11FBCCDC959707EC671EC97357/" />|
| 			    | 				| 			    |
|Standard Helmet + Upper Body Side|Standard Helmet Front|Standard Helmet + Upper Body Back|
|<img width="1604" alt="Standard Helmet + Upper Body Side" src="https://steamuserimages-a.akamaihd.net/ugc/2056502367325488897/6E1015E14448B630D80B7205428D5CAB89547D26/" >|<img width="1604" alt="Standard Helmet Front" src="https://steamuserimages-a.akamaihd.net/ugc/2056502367325488001/7DD068ACFFCBBE2079A9A37B6E8A29A77857C2B1/" >|<img width="1604" alt="Standard Helmet + Upper Body Back" src="https://steamuserimages-a.akamaihd.net/ugc/2056502367325488224/46CB77B4AAFBA52C19408BC97DAF4C729112E1DB/" >|
| 			    | 				| 			    |
||Standard Armour Back (Full)||
||<img width="1604" alt="Standard Armour Back (Full)" src="https://steamuserimages-a.akamaihd.net/ugc/2056502367325488432/71D1A6792DE875DFD75943DD658486AA62DD494A/" >
