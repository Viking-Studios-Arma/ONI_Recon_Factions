class GrenadeLauncher;	
class ONI_Weapons_Fake_GL: GrenadeLauncher {
	magazines[] = {};
	magazineWell[] = {};
	displayName = "Fake GL";
	modes[] = {"Fake"};
	enableAttack = 0;
	showToPlayer = 0;
	class Fake: Mode_ONI_Fake{};
};
class ONI_Weapon_ARM37_bcsewpn: ONI_Weapon_ARM37  {
    enableAttack = 0;
    type = 4;
    scope = 1;
    scopeArsenal = 0;
    handAnim[] = {};
    class Fake: Mode_ONI_Fake{};
    modes[] = {"Fake"};
    class Fake_GL: ONI_Weapons_Fake_GL{};
    muzzles[] = {"this","Fake_GL"};
	_generalMacro = "";
    baseWeapon = "";
    hiddenSelections[] = {"zasleh"};
    hiddenSelectionsTextures[] = {""};
};
class ONI_Weapon_ARM37_GL_bcsewpn: ONI_Weapon_ARM37_GL
{
    enableAttack = 0;
    type = 4;
    scope = 1;    scopeArsenal = 0;
    handAnim[] = {};
    class Fake:mode_ONI_fake{};
    modes[] = {"Fake"};
    class Fake_GL: ONI_Weapons_Fake_GL{};
    muzzles[] = {"this","Fake_GL"};
    baseWeapon = "";
    hiddenSelections[] = {"zasleh"};
    hiddenSelectionsTextures[] = {""};
};
class ONI_Weapon_ARM37_SHT_bcsewpn: ONI_Weapon_ARM37_SHT
{
    enableAttack = 0;
    type = 4;
    scope = 1;    scopeArsenal = 0;
    handAnim[] = {};
    class Fake:mode_ONI_fake{};
    modes[] = {"Fake"};
    class Fake_GL: ONI_Weapons_Fake_GL{};
    muzzles[] = {"this","Fake_GL"};
    baseWeapon = "";
    hiddenSelections[] = {"zasleh"};
    hiddenSelectionsTextures[] = {""};
};
class ONI_Weapon_ARMX_bcsewpn: ONI_Weapon_ARMX
{
    enableAttack = 0;
    type = 4;
    scope = 1;    scopeArsenal = 0;
    handAnim[] = {};
    class Fake:mode_ONI_fake{};
    modes[] = {"Fake"};
    class Fake_GL: ONI_Weapons_Fake_GL{};
    muzzles[] = {"this","Fake_GL"};
    baseWeapon = "";
    hiddenSelections[] = {"zasleh"};
    hiddenSelectionsTextures[] = {""};
};
class ONI_Weapon_ARMX_GL_bcsewpn: ONI_Weapon_ARMX_GL
{
    enableAttack = 0;
    type = 4;
    scope = 1;    scopeArsenal = 0;
    handAnim[] = {};
    class Fake:mode_ONI_fake{};
    modes[] = {"Fake"};
    class Fake_GL: ONI_Weapons_Fake_GL{};
    muzzles[] = {"this","Fake_GL"};
    baseWeapon = "";
    hiddenSelections[] = {"zasleh"};
    hiddenSelectionsTextures[] = {""};
};
class ONI_Weapon_ARMX_GL_light_bcsewpn: ONI_Weapon_ARMX_GL_light
{
    enableAttack = 0;
    type = 4;
    scope = 1;    scopeArsenal = 0;
    handAnim[] = {};
    class Fake:mode_ONI_fake{};
    modes[] = {"Fake"};
    class Fake_GL: ONI_Weapons_Fake_GL{};
    muzzles[] = {"this","Fake_GL"};
    baseWeapon = "";
    hiddenSelections[] = {"zasleh"};
    hiddenSelectionsTextures[] = {""};
};
class ONI_Weapon_ARMX_light_bcsewpn: ONI_Weapon_ARMX_light
{
    enableAttack = 0;
    type = 4;
    scope = 1;    scopeArsenal = 0;
    handAnim[] = {};
    class Fake:mode_ONI_fake{};
    modes[] = {"Fake"};
    class Fake_GL: ONI_Weapons_Fake_GL{};
    muzzles[] = {"this","Fake_GL"};
    baseWeapon = "";
    hiddenSelections[] = {"zasleh"};
    hiddenSelectionsTextures[] = {""};
};
class ONI_Weapon_BR37_bcsewpn: ONI_Weapon_BR37
{
    enableAttack = 0;
    type = 4;
    scope = 1;    scopeArsenal = 0;
    handAnim[] = {};
    class Fake:mode_ONI_fake{};
    modes[] = {"Fake"};
    class Fake_GL: ONI_Weapons_Fake_GL{};
    muzzles[] = {"this","Fake_GL"};
    baseWeapon = "";
    hiddenSelections[] = {"zasleh"};
    hiddenSelectionsTextures[] = {""};
};
class ONI_Weapon_BR45_bcsewpn: ONI_Weapon_BR45
{
    enableAttack = 0;
    type = 4;
    scope = 1;    scopeArsenal = 0;
    handAnim[] = {};
    class Fake:mode_ONI_fake{};
    modes[] = {"Fake"};
    class Fake_GL: ONI_Weapons_Fake_GL{};
    muzzles[] = {"this","Fake_GL"};
    baseWeapon = "";
    hiddenSelections[] = {"zasleh"};
    hiddenSelectionsTextures[] = {""};
};
class ONI_Weapon_BR55_bcsewpn: ONI_Weapon_BR55
{
    enableAttack = 0;
    type = 4;
    scope = 1;    scopeArsenal = 0;
    handAnim[] = {};
    class Fake:mode_ONI_fake{};
    modes[] = {"Fake"};
    class Fake_GL: ONI_Weapons_Fake_GL{};
    muzzles[] = {"this","Fake_GL"};
    baseWeapon = "";
    hiddenSelections[] = {"zasleh"};
    hiddenSelectionsTextures[] = {""};
};
class ONI_Weapon_BR55_HB_bcsewpn: ONI_Weapon_BR55_HB
{
    enableAttack = 0;
    type = 4;
    scope = 1;    scopeArsenal = 0;
    handAnim[] = {};
    class Fake:mode_ONI_fake{};
    modes[] = {"Fake"};
    class Fake_GL: ONI_Weapons_Fake_GL{};
    muzzles[] = {"this","Fake_GL"};
    baseWeapon = "";
    hiddenSelections[] = {"zasleh"};
    hiddenSelectionsTextures[] = {""};
};
class ONI_Weapon_BR55HB_bcsewpn: ONI_Weapon_BR55HB
{
    enableAttack = 0;
    type = 4;
    scope = 1;    scopeArsenal = 0;
    handAnim[] = {};
    class Fake:mode_ONI_fake{};
    modes[] = {"Fake"};
    class Fake_GL: ONI_Weapons_Fake_GL{};
    muzzles[] = {"this","Fake_GL"};
    baseWeapon = "";
    hiddenSelections[] = {"zasleh"};
    hiddenSelectionsTextures[] = {""};
};
class ONI_Weapon_Commando_bcsewpn: ONI_Weapon_Commando
{
    enableAttack = 0;
    type = 4;
    scope = 1;    scopeArsenal = 0;
    handAnim[] = {};
    class Fake:mode_ONI_fake{};
    modes[] = {"Fake"};
    class Fake_GL: ONI_Weapons_Fake_GL{};
    muzzles[] = {"this","Fake_GL"};
    baseWeapon = "";
    hiddenSelections[] = {"zasleh"};
    hiddenSelectionsTextures[] = {""};
};
class ONI_Weapon_Commando_Black_bcsewpn: ONI_Weapon_Commando_Black
{
    enableAttack = 0;
    type = 4;
    scope = 1;    scopeArsenal = 0;
    handAnim[] = {};
    class Fake:mode_ONI_fake{};
    modes[] = {"Fake"};
    class Fake_GL: ONI_Weapons_Fake_GL{};
    muzzles[] = {"this","Fake_GL"};
    baseWeapon = "";
    hiddenSelections[] = {"zasleh"};
    hiddenSelectionsTextures[] = {""};
};
class ONI_Weapon_Commando_Snow_bcsewpn: ONI_Weapon_Commando_Snow
{
    enableAttack = 0;
    type = 4;
    scope = 1;    scopeArsenal = 0;
    handAnim[] = {};
    class Fake:mode_ONI_fake{};
    modes[] = {"Fake"};
    class Fake_GL: ONI_Weapons_Fake_GL{};
    muzzles[] = {"this","Fake_GL"};
    baseWeapon = "";
    hiddenSelections[] = {"zasleh"};
    hiddenSelectionsTextures[] = {""};
};
class ONI_Weapon_Commando_Tan_bcsewpn: ONI_Weapon_Commando_Tan
{
    enableAttack = 0;
    type = 4;
    scope = 1;    scopeArsenal = 0;
    handAnim[] = {};
    class Fake:mode_ONI_fake{};
    modes[] = {"Fake"};
    class Fake_GL: ONI_Weapons_Fake_GL{};
    muzzles[] = {"this","Fake_GL"};
    baseWeapon = "";
    hiddenSelections[] = {"zasleh"};
    hiddenSelectionsTextures[] = {""};
};
class ONI_Weapon_GRL_45_bcsewpn: ONI_Weapon_GRL_45
{
    enableAttack = 0;
    type = 4;
    scope = 1;    scopeArsenal = 0;
    handAnim[] = {};
    class Fake:mode_ONI_fake{};
    modes[] = {"Fake"};
    class Fake_GL: ONI_Weapons_Fake_GL{};
    muzzles[] = {"this","Fake_GL"};
    baseWeapon = "";
    hiddenSelections[] = {"zasleh"};
    hiddenSelectionsTextures[] = {""};
};
class ONI_Weapon_HMG38_bcsewpn: ONI_Weapon_HMG38
{
    enableAttack = 0;
    type = 4;
    scope = 1;    scopeArsenal = 0;
    handAnim[] = {};
    class Fake:mode_ONI_fake{};
    modes[] = {"Fake"};
    class Fake_GL: ONI_Weapons_Fake_GL{};
    muzzles[] = {"this","Fake_GL"};
    baseWeapon = "";
    hiddenSelections[] = {"zasleh"};
    hiddenSelectionsTextures[] = {""};
};
class ONI_Weapon_M247_bcsewpn: ONI_Weapon_M247
{
    enableAttack = 0;
    type = 4;
    scope = 1;    scopeArsenal = 0;
    handAnim[] = {};
    class Fake:mode_ONI_fake{};
    modes[] = {"Fake"};
    class Fake_GL: ONI_Weapons_Fake_GL{};
    muzzles[] = {"this","Fake_GL"};
    baseWeapon = "";
    hiddenSelections[] = {"zasleh"};
    hiddenSelectionsTextures[] = {""};
};
class ONI_Weapon_M247H_Etilka_bcsewpn: ONI_Weapon_M247H_Etilka
{
    enableAttack = 0;
    type = 4;
    scope = 1;    scopeArsenal = 0;
    handAnim[] = {};
    class Fake:mode_ONI_fake{};
    modes[] = {"Fake"};
    class Fake_GL: ONI_Weapons_Fake_GL{};
    muzzles[] = {"this","Fake_GL"};
    baseWeapon = "";
    hiddenSelections[] = {"zasleh"};
    hiddenSelectionsTextures[] = {""};
};
class ONI_Weapon_M295_BMR_bcsewpn: ONI_Weapon_M295_BMR
{
    enableAttack = 0;
    type = 4;
    scope = 1;    scopeArsenal = 0;
    handAnim[] = {};
    class Fake:mode_ONI_fake{};
    modes[] = {"Fake"};
    class Fake_GL: ONI_Weapons_Fake_GL{};
    muzzles[] = {"this","Fake_GL"};
    baseWeapon = "";
    hiddenSelections[] = {"zasleh"};
    hiddenSelectionsTextures[] = {""};
};
class ONI_Weapon_M295_BMR_Desert_bcsewpn: ONI_Weapon_M295_BMR_Desert
{
    enableAttack = 0;
    type = 4;
    scope = 1;    scopeArsenal = 0;
    handAnim[] = {};
    class Fake:mode_ONI_fake{};
    modes[] = {"Fake"};
    class Fake_GL: ONI_Weapons_Fake_GL{};
    muzzles[] = {"this","Fake_GL"};
    baseWeapon = "";
    hiddenSelections[] = {"zasleh"};
    hiddenSelectionsTextures[] = {""};
};
class ONI_Weapon_M295_BMR_Snow_bcsewpn: ONI_Weapon_M295_BMR_Snow
{
    enableAttack = 0;
    type = 4;
    scope = 1;    scopeArsenal = 0;
    handAnim[] = {};
    class Fake:mode_ONI_fake{};
    modes[] = {"Fake"};
    class Fake_GL: ONI_Weapons_Fake_GL{};
    muzzles[] = {"this","Fake_GL"};
    baseWeapon = "";
    hiddenSelections[] = {"zasleh"};
    hiddenSelectionsTextures[] = {""};
};
class ONI_Weapon_M295_BMR_Woodland_bcsewpn: ONI_Weapon_M295_BMR_Woodland
{
    enableAttack = 0;
    type = 4;
    scope = 1;    scopeArsenal = 0;
    handAnim[] = {};
    class Fake:mode_ONI_fake{};
    modes[] = {"Fake"};
    class Fake_GL: ONI_Weapons_Fake_GL{};
    muzzles[] = {"this","Fake_GL"};
    baseWeapon = "";
    hiddenSelections[] = {"zasleh"};
    hiddenSelectionsTextures[] = {""};
};
class ONI_Weapon_M319n_bcsewpn: ONI_Weapon_M319n
{
    enableAttack = 0;
    type = 4;
    scope = 1;    scopeArsenal = 0;
    handAnim[] = {};
    class Fake:mode_ONI_fake{};
    modes[] = {"Fake"};
    class Fake_GL: ONI_Weapons_Fake_GL{};
    muzzles[] = {"this","Fake_GL"};
    baseWeapon = "";
    hiddenSelections[] = {"zasleh"};
    hiddenSelectionsTextures[] = {""};
};
class ONI_Weapon_M319_bcsewpn: ONI_Weapon_M319
{
    enableAttack = 0;
    type = 4;
    scope = 1;    scopeArsenal = 0;
    handAnim[] = {};
    class Fake:mode_ONI_fake{};
    modes[] = {"Fake"};
    class Fake_GL: ONI_Weapons_Fake_GL{};
    muzzles[] = {"this","Fake_GL"};
    baseWeapon = "";
    hiddenSelections[] = {"zasleh"};
    hiddenSelectionsTextures[] = {""};
};
class ONI_Weapon_M392_DMR_bcsewpn: ONI_Weapon_M392_DMR
{
    enableAttack = 0;
    type = 4;
    scope = 1;    scopeArsenal = 0;
    handAnim[] = {};
    class Fake:mode_ONI_fake{};
    modes[] = {"Fake"};
    class Fake_GL: ONI_Weapons_Fake_GL{};
    muzzles[] = {"this","Fake_GL"};
    baseWeapon = "";
    hiddenSelections[] = {"zasleh"};
    hiddenSelectionsTextures[] = {""};
};
class ONI_Weapon_M393_DMR_bcsewpn: ONI_Weapon_M393_DMR
{
    enableAttack = 0;
    type = 4;
    scope = 1;    scopeArsenal = 0;
    handAnim[] = {};
    class Fake:mode_ONI_fake{};
    modes[] = {"Fake"};
    class Fake_GL: ONI_Weapons_Fake_GL{};
    muzzles[] = {"this","Fake_GL"};
    baseWeapon = "";
    hiddenSelections[] = {"zasleh"};
    hiddenSelectionsTextures[] = {""};
};
class ONI_Weapon_M393S_DMR_bcsewpn: ONI_Weapon_M393S_DMR
{
    enableAttack = 0;
    type = 4;
    scope = 1;    scopeArsenal = 0;
    handAnim[] = {};
    class Fake:mode_ONI_fake{};
    modes[] = {"Fake"};
    class Fake_GL: ONI_Weapons_Fake_GL{};
    muzzles[] = {"this","Fake_GL"};
    baseWeapon = "";
    hiddenSelections[] = {"zasleh"};
    hiddenSelectionsTextures[] = {""};
};
class ONI_Weapon_M45_bcsewpn: ONI_Weapon_M45
{
    enableAttack = 0;
    type = 4;
    scope = 1;    scopeArsenal = 0;
    handAnim[] = {};
    class Fake:mode_ONI_fake{};
    modes[] = {"Fake"};
    class Fake_GL: ONI_Weapons_Fake_GL{};
    muzzles[] = {"this","Fake_GL"};
    baseWeapon = "";
    hiddenSelections[] = {"zasleh"};
    hiddenSelectionsTextures[] = {""};
};
class ONI_Weapon_M45A_bcsewpn: ONI_Weapon_M45A
{
    enableAttack = 0;
    type = 4;
    scope = 1;    scopeArsenal = 0;
    handAnim[] = {};
    class Fake:mode_ONI_fake{};
    modes[] = {"Fake"};
    class Fake_GL: ONI_Weapons_Fake_GL{};
    muzzles[] = {"this","Fake_GL"};
    baseWeapon = "";
    hiddenSelections[] = {"zasleh"};
    hiddenSelectionsTextures[] = {""};
};
class ONI_Weapon_M45ATAC_bcsewpn: ONI_Weapon_M45ATAC
{
    enableAttack = 0;
    type = 4;
    scope = 1;    scopeArsenal = 0;
    handAnim[] = {};
    class Fake:mode_ONI_fake{};
    modes[] = {"Fake"};
    class Fake_GL: ONI_Weapons_Fake_GL{};
    muzzles[] = {"this","Fake_GL"};
    baseWeapon = "";
    hiddenSelections[] = {"zasleh"};
    hiddenSelectionsTextures[] = {""};
};
class ONI_Weapon_M45E_bcsewpn: ONI_Weapon_M45E
{
    enableAttack = 0;
    type = 4;
    scope = 1;    scopeArsenal = 0;
    handAnim[] = {};
    class Fake:mode_ONI_fake{};
    modes[] = {"Fake"};
    class Fake_GL: ONI_Weapons_Fake_GL{};
    muzzles[] = {"this","Fake_GL"};
    baseWeapon = "";
    hiddenSelections[] = {"zasleh"};
    hiddenSelectionsTextures[] = {""};
};
class ONI_Weapon_M45TAC_bcsewpn: ONI_Weapon_M45TAC
{
    enableAttack = 0;
    type = 4;
    scope = 1;    scopeArsenal = 0;
    handAnim[] = {};
    class Fake:mode_ONI_fake{};
    modes[] = {"Fake"};
    class Fake_GL: ONI_Weapons_Fake_GL{};
    muzzles[] = {"this","Fake_GL"};
    baseWeapon = "";
    hiddenSelections[] = {"zasleh"};
    hiddenSelectionsTextures[] = {""};
};
class ONI_Weapon_M58S_bcsewpn: ONI_Weapon_M58S
{
    enableAttack = 0;
    type = 4;
    scope = 1;    scopeArsenal = 0;
    handAnim[] = {};
    class Fake:mode_ONI_fake{};
    modes[] = {"Fake"};
    class Fake_GL: ONI_Weapons_Fake_GL{};
    muzzles[] = {"this","Fake_GL"};
    baseWeapon = "";
    hiddenSelections[] = {"zasleh"};
    hiddenSelectionsTextures[] = {""};
};
class ONI_Weapon_M7_bcsewpn: ONI_Weapon_M7
{
    enableAttack = 0;
    type = 4;
    scope = 1;    scopeArsenal = 0;
    handAnim[] = {};
    class Fake:mode_ONI_fake{};
    modes[] = {"Fake"};
    class Fake_GL: ONI_Weapons_Fake_GL{};
    muzzles[] = {"this","Fake_GL"};
    baseWeapon = "";
    hiddenSelections[] = {"zasleh"};
    hiddenSelectionsTextures[] = {""};
};
class ONI_Weapon_M73_bcsewpn: ONI_Weapon_M73
{
    enableAttack = 0;
    type = 4;
    scope = 1;    scopeArsenal = 0;
    handAnim[] = {};
    class Fake:mode_ONI_fake{};
    modes[] = {"Fake"};
    class Fake_GL: ONI_Weapons_Fake_GL{};
    muzzles[] = {"this","Fake_GL"};
    baseWeapon = "";
    hiddenSelections[] = {"zasleh"};
    hiddenSelectionsTextures[] = {""};
};
class ONI_Weapon_M90A_bcsewpn: ONI_Weapon_M90A
{
    enableAttack = 0;
    type = 4;
    scope = 1;    scopeArsenal = 0;
    handAnim[] = {};
    class Fake:mode_ONI_fake{};
    modes[] = {"Fake"};
    class Fake_GL: ONI_Weapons_Fake_GL{};
    muzzles[] = {"this","Fake_GL"};
    baseWeapon = "";
    hiddenSelections[] = {"zasleh"};
    hiddenSelectionsTextures[] = {""};
};
class ONI_Weapon_M99A2S3_bcsewpn: ONI_Weapon_M99A2S3
{
    enableAttack = 0;
    type = 4;
    scope = 1;    scopeArsenal = 0;
    handAnim[] = {};
    class Fake:mode_ONI_fake{};
    modes[] = {"Fake"};
    class Fake_GL: ONI_Weapons_Fake_GL{};
    muzzles[] = {"this","Fake_GL"};
    baseWeapon = "";
    hiddenSelections[] = {"zasleh"};
    hiddenSelectionsTextures[] = {""};
};
class ONI_Weapon_MA32_bcsewpn: ONI_Weapon_MA32
{
    enableAttack = 0;
    type = 4;
    scope = 1;    scopeArsenal = 0;
    handAnim[] = {};
    class Fake:mode_ONI_fake{};
    modes[] = {"Fake"};
    class Fake_GL: ONI_Weapons_Fake_GL{};
    muzzles[] = {"this","Fake_GL"};
    baseWeapon = "";
    hiddenSelections[] = {"zasleh"};
    hiddenSelectionsTextures[] = {""};
};
class ONI_Weapon_MA32B_bcsewpn: ONI_Weapon_MA32B
{
    enableAttack = 0;
    type = 4;
    scope = 1;    scopeArsenal = 0;
    handAnim[] = {};
    class Fake:mode_ONI_fake{};
    modes[] = {"Fake"};
    class Fake_GL: ONI_Weapons_Fake_GL{};
    muzzles[] = {"this","Fake_GL"};
    baseWeapon = "";
    hiddenSelections[] = {"zasleh"};
    hiddenSelectionsTextures[] = {""};
};
class ONI_Weapon_MA32BGL_bcsewpn: ONI_Weapon_MA32BGL
{
    enableAttack = 0;
    type = 4;
    scope = 1;    scopeArsenal = 0;
    handAnim[] = {};
    class Fake:mode_ONI_fake{};
    modes[] = {"Fake"};
    class Fake_GL: ONI_Weapons_Fake_GL{};
    muzzles[] = {"this","Fake_GL"};
    baseWeapon = "";
    hiddenSelections[] = {"zasleh"};
    hiddenSelectionsTextures[] = {""};
};
class ONI_Weapon_MA32GL_bcsewpn: ONI_Weapon_MA32GL
{
    enableAttack = 0;
    type = 4;
    scope = 1;    scopeArsenal = 0;
    handAnim[] = {};
    class Fake:mode_ONI_fake{};
    modes[] = {"Fake"};
    class Fake_GL: ONI_Weapons_Fake_GL{};
    muzzles[] = {"this","Fake_GL"};
    baseWeapon = "";
    hiddenSelections[] = {"zasleh"};
    hiddenSelectionsTextures[] = {""};
};
class ONI_Weapon_MA37_bcsewpn: ONI_Weapon_MA37
{
    enableAttack = 0;
    type = 4;
    scope = 1;    scopeArsenal = 0;
    handAnim[] = {};
    class Fake:mode_ONI_fake{};
    modes[] = {"Fake"};
    class Fake_GL: ONI_Weapons_Fake_GL{};
    muzzles[] = {"this","Fake_GL"};
    baseWeapon = "";
    hiddenSelections[] = {"zasleh"};
    hiddenSelectionsTextures[] = {""};
};
class ONI_Weapon_MA37B_bcsewpn: ONI_Weapon_MA37B
{
    enableAttack = 0;
    type = 4;
    scope = 1;    scopeArsenal = 0;
    handAnim[] = {};
    class Fake:mode_ONI_fake{};
    modes[] = {"Fake"};
    class Fake_GL: ONI_Weapons_Fake_GL{};
    muzzles[] = {"this","Fake_GL"};
    baseWeapon = "";
    hiddenSelections[] = {"zasleh"};
    hiddenSelectionsTextures[] = {""};
};
class ONI_Weapon_MA37BGL_bcsewpn: ONI_Weapon_MA37BGL
{
    enableAttack = 0;
    type = 4;
    scope = 1;    scopeArsenal = 0;
    handAnim[] = {};
    class Fake:mode_ONI_fake{};
    modes[] = {"Fake"};
    class Fake_GL: ONI_Weapons_Fake_GL{};
    muzzles[] = {"this","Fake_GL"};
    baseWeapon = "";
    hiddenSelections[] = {"zasleh"};
    hiddenSelectionsTextures[] = {""};
};
class ONI_Weapon_MA37GL_bcsewpn: ONI_Weapon_MA37GL
{
    enableAttack = 0;
    type = 4;
    scope = 1;    scopeArsenal = 0;
    handAnim[] = {};
    class Fake:mode_ONI_fake{};
    modes[] = {"Fake"};
    class Fake_GL: ONI_Weapons_Fake_GL{};
    muzzles[] = {"this","Fake_GL"};
    baseWeapon = "";
    hiddenSelections[] = {"zasleh"};
    hiddenSelectionsTextures[] = {""};
};
class ONI_Weapon_MA37K_bcsewpn: ONI_Weapon_MA37K
{
    enableAttack = 0;
    type = 4;
    scope = 1;    scopeArsenal = 0;
    handAnim[] = {};
    class Fake:mode_ONI_fake{};
    modes[] = {"Fake"};
    class Fake_GL: ONI_Weapons_Fake_GL{};
    muzzles[] = {"this","Fake_GL"};
    baseWeapon = "";
    hiddenSelections[] = {"zasleh"};
    hiddenSelectionsTextures[] = {""};
};
class ONI_Weapon_MA5A_bcsewpn: ONI_Weapon_MA5A
{
    enableAttack = 0;
    type = 4;
    scope = 1;    scopeArsenal = 0;
    handAnim[] = {};
    class Fake:mode_ONI_fake{};
    modes[] = {"Fake"};
    class Fake_GL: ONI_Weapons_Fake_GL{};
    muzzles[] = {"this","Fake_GL"};
    baseWeapon = "";
    hiddenSelections[] = {"zasleh"};
    hiddenSelectionsTextures[] = {""};
};
class ONI_Weapon_MA5AGL_bcsewpn: ONI_Weapon_MA5AGL
{
    enableAttack = 0;
    type = 4;
    scope = 1;    scopeArsenal = 0;
    handAnim[] = {};
    class Fake:mode_ONI_fake{};
    modes[] = {"Fake"};
    class Fake_GL: ONI_Weapons_Fake_GL{};
    muzzles[] = {"this","Fake_GL"};
    baseWeapon = "";
    hiddenSelections[] = {"zasleh"};
    hiddenSelectionsTextures[] = {""};
};
class ONI_Weapon_MA5B_bcsewpn: ONI_Weapon_MA5B
{
    enableAttack = 0;
    type = 4;
    scope = 1;    scopeArsenal = 0;
    handAnim[] = {};
    class Fake:mode_ONI_fake{};
    modes[] = {"Fake"};
    class Fake_GL: ONI_Weapons_Fake_GL{};
    muzzles[] = {"this","Fake_GL"};
    baseWeapon = "";
    hiddenSelections[] = {"zasleh"};
    hiddenSelectionsTextures[] = {""};
};
class ONI_Weapon_MA5BGL_bcsewpn: ONI_Weapon_MA5BGL
{
    enableAttack = 0;
    type = 4;
    scope = 1;    scopeArsenal = 0;
    handAnim[] = {};
    class Fake:mode_ONI_fake{};
    modes[] = {"Fake"};
    class Fake_GL: ONI_Weapons_Fake_GL{};
    muzzles[] = {"this","Fake_GL"};
    baseWeapon = "";
    hiddenSelections[] = {"zasleh"};
    hiddenSelectionsTextures[] = {""};
};
class ONI_Weapon_MA5C_bcsewpn: ONI_Weapon_MA5C
{
    enableAttack = 0;
    type = 4;
    scope = 1;    scopeArsenal = 0;
    handAnim[] = {};
    class Fake:mode_ONI_fake{};
    modes[] = {"Fake"};
    class Fake_GL: ONI_Weapons_Fake_GL{};
    muzzles[] = {"this","Fake_GL"};
    baseWeapon = "";
    hiddenSelections[] = {"zasleh"};
    hiddenSelectionsTextures[] = {""};
};
class ONI_Weapon_MA5CGL_bcsewpn: ONI_Weapon_MA5CGL
{
    enableAttack = 0;
    type = 4;
    scope = 1;    scopeArsenal = 0;
    handAnim[] = {};
    class Fake:mode_ONI_fake{};
    modes[] = {"Fake"};
    class Fake_GL: ONI_Weapons_Fake_GL{};
    muzzles[] = {"this","Fake_GL"};
    baseWeapon = "";
    hiddenSelections[] = {"zasleh"};
    hiddenSelectionsTextures[] = {""};
};
class ONI_Weapon_MA5K_bcsewpn: ONI_Weapon_MA5K
{
    enableAttack = 0;
    type = 4;
    scope = 1;    scopeArsenal = 0;
    handAnim[] = {};
    class Fake:mode_ONI_fake{};
    modes[] = {"Fake"};
    class Fake_GL: ONI_Weapons_Fake_GL{};
    muzzles[] = {"this","Fake_GL"};
    baseWeapon = "";
    hiddenSelections[] = {"zasleh"};
    hiddenSelectionsTextures[] = {""};
};
class ONI_Weapon_SRM77_S1_bcsewpn: ONI_Weapon_SRM77_S1
{
    enableAttack = 0;
    type = 4;
    scope = 1;    scopeArsenal = 0;
    handAnim[] = {};
    class Fake:mode_ONI_fake{};
    modes[] = {"Fake"};
    class Fake_GL: ONI_Weapons_Fake_GL{};
    muzzles[] = {"this","Fake_GL"};
    baseWeapon = "";
    hiddenSelections[] = {"zasleh"};
    hiddenSelectionsTextures[] = {""};
};
class ONI_Weapon_SRM77_S2_bcsewpn: ONI_Weapon_SRM77_S2
{
    enableAttack = 0;
    type = 4;
    scope = 1;    scopeArsenal = 0;
    handAnim[] = {};
    class Fake:mode_ONI_fake{};
    modes[] = {"Fake"};
    class Fake_GL: ONI_Weapons_Fake_GL{};
    muzzles[] = {"this","Fake_GL"};
    baseWeapon = "";
    hiddenSelections[] = {"zasleh"};
    hiddenSelectionsTextures[] = {""};
};
class ONI_Weapon_SRS99C_bcsewpn: ONI_Weapon_SRS99C
{
    enableAttack = 0;
    type = 4;
    scope = 1;    scopeArsenal = 0;
    handAnim[] = {};
    class Fake:mode_ONI_fake{};
    modes[] = {"Fake"};
    class Fake_GL: ONI_Weapons_Fake_GL{};
    muzzles[] = {"this","Fake_GL"};
    baseWeapon = "";
    hiddenSelections[] = {"zasleh"};
    hiddenSelectionsTextures[] = {""};
};
class ONI_Weapon_SRS99D_bcsewpn: ONI_Weapon_SRS99D
{
    enableAttack = 0;
    type = 4;
    scope = 1;    scopeArsenal = 0;
    handAnim[] = {};
    class Fake:mode_ONI_fake{};
    modes[] = {"Fake"};
    class Fake_GL: ONI_Weapons_Fake_GL{};
    muzzles[] = {"this","Fake_GL"};
    baseWeapon = "";
    hiddenSelections[] = {"zasleh"};
    hiddenSelectionsTextures[] = {""};
};
class ONI_Weapon_M57_Pilum_bcsewpn: ONI_Weapon_M57_Pilum
{
    enableAttack = 0;
    type = 4;
    scope = 1;    scopeArsenal = 0;
    handAnim[] = {};
    class Fake:mode_ONI_fake{};
    modes[] = {"Fake"};
    class Fake_GL: ONI_Weapons_Fake_GL{};
    muzzles[] = {"this","Fake_GL"};
    baseWeapon = "";
    hiddenSelections[] = {"zasleh"};
    hiddenSelectionsTextures[] = {""};
};
class ONI_Weapon_M41_SSR_bcsewpn: ONI_Weapon_M41_SSR
{
    enableAttack = 0;
    type = 4;
    scope = 1;    scopeArsenal = 0;
    handAnim[] = {};
    class Fake:mode_ONI_fake{};
    modes[] = {"Fake"};
    class Fake_GL: ONI_Weapons_Fake_GL{};
    muzzles[] = {"this","Fake_GL"};
    baseWeapon = "";
    hiddenSelections[] = {"zasleh"};
    hiddenSelectionsTextures[] = {""};
};
class ONI_Weapon_M96_LAW_bcsewpn: ONI_Weapon_M96_LAW
{
    enableAttack = 0;
    type = 4;
    scope = 1;    scopeArsenal = 0;
    handAnim[] = {};
    class Fake:mode_ONI_fake{};
    modes[] = {"Fake"};
    class Fake_GL: ONI_Weapons_Fake_GL{};
    muzzles[] = {"this","Fake_GL"};
    baseWeapon = "";
    hiddenSelections[] = {"zasleh"};
    hiddenSelectionsTextures[] = {""};
};
class ONI_Weapon_M96_LAW_Blk_bcsewpn: ONI_Weapon_M96_LAW_Blk
{
    enableAttack = 0;
    type = 4;
    scope = 1;    scopeArsenal = 0;
    handAnim[] = {};
    class Fake:mode_ONI_fake{};
    modes[] = {"Fake"};
    class Fake_GL: ONI_Weapons_Fake_GL{};
    muzzles[] = {"this","Fake_GL"};
    baseWeapon = "";
    hiddenSelections[] = {"zasleh"};
    hiddenSelectionsTextures[] = {""};
};
class ONI_Weapon_M96_LAW_Arc_bcsewpn: ONI_Weapon_M96_LAW_Arc
{
    enableAttack = 0;
    type = 4;
    scope = 1;    scopeArsenal = 0;
    handAnim[] = {};
    class Fake:mode_ONI_fake{};
    modes[] = {"Fake"};
    class Fake_GL: ONI_Weapons_Fake_GL{};
    muzzles[] = {"this","Fake_GL"};
    baseWeapon = "";
    hiddenSelections[] = {"zasleh"};
    hiddenSelectionsTextures[] = {""};
};
class ONI_Weapon_M96_LAW_Des_bcsewpn: ONI_Weapon_M96_LAW_Des
{
    enableAttack = 0;
    type = 4;
    scope = 1;    scopeArsenal = 0;
    handAnim[] = {};
    class Fake:mode_ONI_fake{};
    modes[] = {"Fake"};
    class Fake_GL: ONI_Weapons_Fake_GL{};
    muzzles[] = {"this","Fake_GL"};
    baseWeapon = "";
    hiddenSelections[] = {"zasleh"};
    hiddenSelectionsTextures[] = {""};
};
class ONI_Weapon_hgun_comet_F_bcsewpn: ONI_Weapon_hgun_comet_F
{
    enableAttack = 0;
    type = 4;
    scope = 1;    scopeArsenal = 0;
    handAnim[] = {};
    class Fake:mode_ONI_fake{};
    modes[] = {"Fake"};
    class Fake_GL: ONI_Weapons_Fake_GL{};
    muzzles[] = {"this","Fake_GL"};
    baseWeapon = "";
    hiddenSelections[] = {"zasleh"};
    hiddenSelectionsTextures[] = {""};
};
class ONI_Weapon_hgun_sas10_F_bcsewpn: ONI_Weapon_hgun_sas10_F
{
    enableAttack = 0;
    type = 4;
    scope = 1;    scopeArsenal = 0;
    handAnim[] = {};
    class Fake:mode_ONI_fake{};
    modes[] = {"Fake"};
    class Fake_GL: ONI_Weapons_Fake_GL{};
    muzzles[] = {"this","Fake_GL"};
    baseWeapon = "";
    hiddenSelections[] = {"zasleh"};
    hiddenSelectionsTextures[] = {""};
};
class ONI_Weapon_m3_bcsewpn: ONI_Weapon_m3
{
    enableAttack = 0;
    type = 4;
    scope = 1;    scopeArsenal = 0;
    handAnim[] = {};
    class Fake:mode_ONI_fake{};
    modes[] = {"Fake"};
    class Fake_GL: ONI_Weapons_Fake_GL{};
    muzzles[] = {"this","Fake_GL"};
    baseWeapon = "";
    hiddenSelections[] = {"zasleh"};
    hiddenSelectionsTextures[] = {""};
};
class ONI_Weapon_M319M_bcsewpn: ONI_Weapon_M319M
{
    enableAttack = 0;
    type = 4;
    scope = 1;    scopeArsenal = 0;
    handAnim[] = {};
    class Fake:mode_ONI_fake{};
    modes[] = {"Fake"};
    class Fake_GL: ONI_Weapons_Fake_GL{};
    muzzles[] = {"this","Fake_GL"};
    baseWeapon = "";
    hiddenSelections[] = {"zasleh"};
    hiddenSelectionsTextures[] = {""};
};
class ONI_Weapon_M319S_bcsewpn: ONI_Weapon_M319S
{
    enableAttack = 0;
    type = 4;
    scope = 1;    scopeArsenal = 0;
    handAnim[] = {};
    class Fake:mode_ONI_fake{};
    modes[] = {"Fake"};
    class Fake_GL: ONI_Weapons_Fake_GL{};
    muzzles[] = {"this","Fake_GL"};
    baseWeapon = "";
    hiddenSelections[] = {"zasleh"};
    hiddenSelectionsTextures[] = {""};
};
class ONI_Weapon_M6B_bcsewpn: ONI_Weapon_M6B
{
    enableAttack = 0;
    type = 4;
    scope = 1;    scopeArsenal = 0;
    handAnim[] = {};
    class Fake:mode_ONI_fake{};
    modes[] = {"Fake"};
    class Fake_GL: ONI_Weapons_Fake_GL{};
    muzzles[] = {"this","Fake_GL"};
    baseWeapon = "";
    hiddenSelections[] = {"zasleh"};
    hiddenSelectionsTextures[] = {""};
};
class ONI_Weapon_M6C_bcsewpn: ONI_Weapon_M6C
{
    enableAttack = 0;
    type = 4;
    scope = 1;    scopeArsenal = 0;
    handAnim[] = {};
    class Fake:mode_ONI_fake{};
    modes[] = {"Fake"};
    class Fake_GL: ONI_Weapons_Fake_GL{};
    muzzles[] = {"this","Fake_GL"};
    baseWeapon = "";
    hiddenSelections[] = {"zasleh"};
    hiddenSelectionsTextures[] = {""};
};
class ONI_Weapon_M7_Folded_bcsewpn: ONI_Weapon_M7_Folded
{
    enableAttack = 0;
    type = 4;
    scope = 1;    scopeArsenal = 0;
    handAnim[] = {};
    class Fake:mode_ONI_fake{};
    modes[] = {"Fake"};
    class Fake_GL: ONI_Weapons_Fake_GL{};
    muzzles[] = {"this","Fake_GL"};
    baseWeapon = "";
    hiddenSelections[] = {"zasleh"};
    hiddenSelectionsTextures[] = {""};
};
class ONI_Weapon_UNSC_Knife_bcsewpn: ONI_Weapon_UNSC_Knife
{
    enableAttack = 0;
    type = 4;
    scope = 1;    scopeArsenal = 0;
    handAnim[] = {};
    class Fake:mode_ONI_fake{};
    modes[] = {"Fake"};
    class Fake_GL: ONI_Weapons_Fake_GL{};
    muzzles[] = {"this","Fake_GL"};
    baseWeapon = "";
    hiddenSelections[] = {"zasleh"};
    hiddenSelectionsTextures[] = {""};
};
class ONI_Weapon_UNSC_Knife_reversed_bcsewpn: ONI_Weapon_UNSC_Knife_reversed
{
    enableAttack = 0;
    type = 4;
    scope = 1;    scopeArsenal = 0;
    handAnim[] = {};
    class Fake:mode_ONI_fake{};
    modes[] = {"Fake"};
    class Fake_GL: ONI_Weapons_Fake_GL{};
    muzzles[] = {"this","Fake_GL"};
    baseWeapon = "";
    hiddenSelections[] = {"zasleh"};
    hiddenSelectionsTextures[] = {""};
};
class ONI_Weapon_M6G_bcsewpn: ONI_Weapon_M6G
{
    enableAttack = 0;
    type = 4;
    scope = 1;    scopeArsenal = 0;
    handAnim[] = {};
    class Fake:mode_ONI_fake{};
    modes[] = {"Fake"};
    class Fake_GL: ONI_Weapons_Fake_GL{};
    muzzles[] = {"this","Fake_GL"};
    baseWeapon = "";
    hiddenSelections[] = {"zasleh"};
    hiddenSelectionsTextures[] = {""};
};