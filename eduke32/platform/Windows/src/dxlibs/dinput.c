
#define DIRECTINPUT_VERSION 0x0700
#include "dx/dinput.h"
/* This is a replacement for parts of dinput.lib. */

DIOBJECTDATAFORMAT rgodf_c_dfDIKeyboard[] = {
{&GUID_Key, 0, -2147483636, 0},
{&GUID_Key, 1, -2147483380, 0},
{&GUID_Key, 2, -2147483124, 0},
{&GUID_Key, 3, -2147482868, 0},
{&GUID_Key, 4, -2147482612, 0},
{&GUID_Key, 5, -2147482356, 0},
{&GUID_Key, 6, -2147482100, 0},
{&GUID_Key, 7, -2147481844, 0},
{&GUID_Key, 8, -2147481588, 0},
{&GUID_Key, 9, -2147481332, 0},
{&GUID_Key, 10, -2147481076, 0},
{&GUID_Key, 11, -2147480820, 0},
{&GUID_Key, 12, -2147480564, 0},
{&GUID_Key, 13, -2147480308, 0},
{&GUID_Key, 14, -2147480052, 0},
{&GUID_Key, 15, -2147479796, 0},
{&GUID_Key, 16, -2147479540, 0},
{&GUID_Key, 17, -2147479284, 0},
{&GUID_Key, 18, -2147479028, 0},
{&GUID_Key, 19, -2147478772, 0},
{&GUID_Key, 20, -2147478516, 0},
{&GUID_Key, 21, -2147478260, 0},
{&GUID_Key, 22, -2147478004, 0},
{&GUID_Key, 23, -2147477748, 0},
{&GUID_Key, 24, -2147477492, 0},
{&GUID_Key, 25, -2147477236, 0},
{&GUID_Key, 26, -2147476980, 0},
{&GUID_Key, 27, -2147476724, 0},
{&GUID_Key, 28, -2147476468, 0},
{&GUID_Key, 29, -2147476212, 0},
{&GUID_Key, 30, -2147475956, 0},
{&GUID_Key, 31, -2147475700, 0},
{&GUID_Key, 32, -2147475444, 0},
{&GUID_Key, 33, -2147475188, 0},
{&GUID_Key, 34, -2147474932, 0},
{&GUID_Key, 35, -2147474676, 0},
{&GUID_Key, 36, -2147474420, 0},
{&GUID_Key, 37, -2147474164, 0},
{&GUID_Key, 38, -2147473908, 0},
{&GUID_Key, 39, -2147473652, 0},
{&GUID_Key, 40, -2147473396, 0},
{&GUID_Key, 41, -2147473140, 0},
{&GUID_Key, 42, -2147472884, 0},
{&GUID_Key, 43, -2147472628, 0},
{&GUID_Key, 44, -2147472372, 0},
{&GUID_Key, 45, -2147472116, 0},
{&GUID_Key, 46, -2147471860, 0},
{&GUID_Key, 47, -2147471604, 0},
{&GUID_Key, 48, -2147471348, 0},
{&GUID_Key, 49, -2147471092, 0},
{&GUID_Key, 50, -2147470836, 0},
{&GUID_Key, 51, -2147470580, 0},
{&GUID_Key, 52, -2147470324, 0},
{&GUID_Key, 53, -2147470068, 0},
{&GUID_Key, 54, -2147469812, 0},
{&GUID_Key, 55, -2147469556, 0},
{&GUID_Key, 56, -2147469300, 0},
{&GUID_Key, 57, -2147469044, 0},
{&GUID_Key, 58, -2147468788, 0},
{&GUID_Key, 59, -2147468532, 0},
{&GUID_Key, 60, -2147468276, 0},
{&GUID_Key, 61, -2147468020, 0},
{&GUID_Key, 62, -2147467764, 0},
{&GUID_Key, 63, -2147467508, 0},
{&GUID_Key, 64, -2147467252, 0},
{&GUID_Key, 65, -2147466996, 0},
{&GUID_Key, 66, -2147466740, 0},
{&GUID_Key, 67, -2147466484, 0},
{&GUID_Key, 68, -2147466228, 0},
{&GUID_Key, 69, -2147465972, 0},
{&GUID_Key, 70, -2147465716, 0},
{&GUID_Key, 71, -2147465460, 0},
{&GUID_Key, 72, -2147465204, 0},
{&GUID_Key, 73, -2147464948, 0},
{&GUID_Key, 74, -2147464692, 0},
{&GUID_Key, 75, -2147464436, 0},
{&GUID_Key, 76, -2147464180, 0},
{&GUID_Key, 77, -2147463924, 0},
{&GUID_Key, 78, -2147463668, 0},
{&GUID_Key, 79, -2147463412, 0},
{&GUID_Key, 80, -2147463156, 0},
{&GUID_Key, 81, -2147462900, 0},
{&GUID_Key, 82, -2147462644, 0},
{&GUID_Key, 83, -2147462388, 0},
{&GUID_Key, 84, -2147462132, 0},
{&GUID_Key, 85, -2147461876, 0},
{&GUID_Key, 86, -2147461620, 0},
{&GUID_Key, 87, -2147461364, 0},
{&GUID_Key, 88, -2147461108, 0},
{&GUID_Key, 89, -2147460852, 0},
{&GUID_Key, 90, -2147460596, 0},
{&GUID_Key, 91, -2147460340, 0},
{&GUID_Key, 92, -2147460084, 0},
{&GUID_Key, 93, -2147459828, 0},
{&GUID_Key, 94, -2147459572, 0},
{&GUID_Key, 95, -2147459316, 0},
{&GUID_Key, 96, -2147459060, 0},
{&GUID_Key, 97, -2147458804, 0},
{&GUID_Key, 98, -2147458548, 0},
{&GUID_Key, 99, -2147458292, 0},
{&GUID_Key, 100, -2147458036, 0},
{&GUID_Key, 101, -2147457780, 0},
{&GUID_Key, 102, -2147457524, 0},
{&GUID_Key, 103, -2147457268, 0},
{&GUID_Key, 104, -2147457012, 0},
{&GUID_Key, 105, -2147456756, 0},
{&GUID_Key, 106, -2147456500, 0},
{&GUID_Key, 107, -2147456244, 0},
{&GUID_Key, 108, -2147455988, 0},
{&GUID_Key, 109, -2147455732, 0},
{&GUID_Key, 110, -2147455476, 0},
{&GUID_Key, 111, -2147455220, 0},
{&GUID_Key, 112, -2147454964, 0},
{&GUID_Key, 113, -2147454708, 0},
{&GUID_Key, 114, -2147454452, 0},
{&GUID_Key, 115, -2147454196, 0},
{&GUID_Key, 116, -2147453940, 0},
{&GUID_Key, 117, -2147453684, 0},
{&GUID_Key, 118, -2147453428, 0},
{&GUID_Key, 119, -2147453172, 0},
{&GUID_Key, 120, -2147452916, 0},
{&GUID_Key, 121, -2147452660, 0},
{&GUID_Key, 122, -2147452404, 0},
{&GUID_Key, 123, -2147452148, 0},
{&GUID_Key, 124, -2147451892, 0},
{&GUID_Key, 125, -2147451636, 0},
{&GUID_Key, 126, -2147451380, 0},
{&GUID_Key, 127, -2147451124, 0},
{&GUID_Key, 128, -2147450868, 0},
{&GUID_Key, 129, -2147450612, 0},
{&GUID_Key, 130, -2147450356, 0},
{&GUID_Key, 131, -2147450100, 0},
{&GUID_Key, 132, -2147449844, 0},
{&GUID_Key, 133, -2147449588, 0},
{&GUID_Key, 134, -2147449332, 0},
{&GUID_Key, 135, -2147449076, 0},
{&GUID_Key, 136, -2147448820, 0},
{&GUID_Key, 137, -2147448564, 0},
{&GUID_Key, 138, -2147448308, 0},
{&GUID_Key, 139, -2147448052, 0},
{&GUID_Key, 140, -2147447796, 0},
{&GUID_Key, 141, -2147447540, 0},
{&GUID_Key, 142, -2147447284, 0},
{&GUID_Key, 143, -2147447028, 0},
{&GUID_Key, 144, -2147446772, 0},
{&GUID_Key, 145, -2147446516, 0},
{&GUID_Key, 146, -2147446260, 0},
{&GUID_Key, 147, -2147446004, 0},
{&GUID_Key, 148, -2147445748, 0},
{&GUID_Key, 149, -2147445492, 0},
{&GUID_Key, 150, -2147445236, 0},
{&GUID_Key, 151, -2147444980, 0},
{&GUID_Key, 152, -2147444724, 0},
{&GUID_Key, 153, -2147444468, 0},
{&GUID_Key, 154, -2147444212, 0},
{&GUID_Key, 155, -2147443956, 0},
{&GUID_Key, 156, -2147443700, 0},
{&GUID_Key, 157, -2147443444, 0},
{&GUID_Key, 158, -2147443188, 0},
{&GUID_Key, 159, -2147442932, 0},
{&GUID_Key, 160, -2147442676, 0},
{&GUID_Key, 161, -2147442420, 0},
{&GUID_Key, 162, -2147442164, 0},
{&GUID_Key, 163, -2147441908, 0},
{&GUID_Key, 164, -2147441652, 0},
{&GUID_Key, 165, -2147441396, 0},
{&GUID_Key, 166, -2147441140, 0},
{&GUID_Key, 167, -2147440884, 0},
{&GUID_Key, 168, -2147440628, 0},
{&GUID_Key, 169, -2147440372, 0},
{&GUID_Key, 170, -2147440116, 0},
{&GUID_Key, 171, -2147439860, 0},
{&GUID_Key, 172, -2147439604, 0},
{&GUID_Key, 173, -2147439348, 0},
{&GUID_Key, 174, -2147439092, 0},
{&GUID_Key, 175, -2147438836, 0},
{&GUID_Key, 176, -2147438580, 0},
{&GUID_Key, 177, -2147438324, 0},
{&GUID_Key, 178, -2147438068, 0},
{&GUID_Key, 179, -2147437812, 0},
{&GUID_Key, 180, -2147437556, 0},
{&GUID_Key, 181, -2147437300, 0},
{&GUID_Key, 182, -2147437044, 0},
{&GUID_Key, 183, -2147436788, 0},
{&GUID_Key, 184, -2147436532, 0},
{&GUID_Key, 185, -2147436276, 0},
{&GUID_Key, 186, -2147436020, 0},
{&GUID_Key, 187, -2147435764, 0},
{&GUID_Key, 188, -2147435508, 0},
{&GUID_Key, 189, -2147435252, 0},
{&GUID_Key, 190, -2147434996, 0},
{&GUID_Key, 191, -2147434740, 0},
{&GUID_Key, 192, -2147434484, 0},
{&GUID_Key, 193, -2147434228, 0},
{&GUID_Key, 194, -2147433972, 0},
{&GUID_Key, 195, -2147433716, 0},
{&GUID_Key, 196, -2147433460, 0},
{&GUID_Key, 197, -2147433204, 0},
{&GUID_Key, 198, -2147432948, 0},
{&GUID_Key, 199, -2147432692, 0},
{&GUID_Key, 200, -2147432436, 0},
{&GUID_Key, 201, -2147432180, 0},
{&GUID_Key, 202, -2147431924, 0},
{&GUID_Key, 203, -2147431668, 0},
{&GUID_Key, 204, -2147431412, 0},
{&GUID_Key, 205, -2147431156, 0},
{&GUID_Key, 206, -2147430900, 0},
{&GUID_Key, 207, -2147430644, 0},
{&GUID_Key, 208, -2147430388, 0},
{&GUID_Key, 209, -2147430132, 0},
{&GUID_Key, 210, -2147429876, 0},
{&GUID_Key, 211, -2147429620, 0},
{&GUID_Key, 212, -2147429364, 0},
{&GUID_Key, 213, -2147429108, 0},
{&GUID_Key, 214, -2147428852, 0},
{&GUID_Key, 215, -2147428596, 0},
{&GUID_Key, 216, -2147428340, 0},
{&GUID_Key, 217, -2147428084, 0},
{&GUID_Key, 218, -2147427828, 0},
{&GUID_Key, 219, -2147427572, 0},
{&GUID_Key, 220, -2147427316, 0},
{&GUID_Key, 221, -2147427060, 0},
{&GUID_Key, 222, -2147426804, 0},
{&GUID_Key, 223, -2147426548, 0},
{&GUID_Key, 224, -2147426292, 0},
{&GUID_Key, 225, -2147426036, 0},
{&GUID_Key, 226, -2147425780, 0},
{&GUID_Key, 227, -2147425524, 0},
{&GUID_Key, 228, -2147425268, 0},
{&GUID_Key, 229, -2147425012, 0},
{&GUID_Key, 230, -2147424756, 0},
{&GUID_Key, 231, -2147424500, 0},
{&GUID_Key, 232, -2147424244, 0},
{&GUID_Key, 233, -2147423988, 0},
{&GUID_Key, 234, -2147423732, 0},
{&GUID_Key, 235, -2147423476, 0},
{&GUID_Key, 236, -2147423220, 0},
{&GUID_Key, 237, -2147422964, 0},
{&GUID_Key, 238, -2147422708, 0},
{&GUID_Key, 239, -2147422452, 0},
{&GUID_Key, 240, -2147422196, 0},
{&GUID_Key, 241, -2147421940, 0},
{&GUID_Key, 242, -2147421684, 0},
{&GUID_Key, 243, -2147421428, 0},
{&GUID_Key, 244, -2147421172, 0},
{&GUID_Key, 245, -2147420916, 0},
{&GUID_Key, 246, -2147420660, 0},
{&GUID_Key, 247, -2147420404, 0},
{&GUID_Key, 248, -2147420148, 0},
{&GUID_Key, 249, -2147419892, 0},
{&GUID_Key, 250, -2147419636, 0},
{&GUID_Key, 251, -2147419380, 0},
{&GUID_Key, 252, -2147419124, 0},
{&GUID_Key, 253, -2147418868, 0},
{&GUID_Key, 254, -2147418612, 0},
{&GUID_Key, 255, -2147418356, 0}
};

const DIDATAFORMAT c_dfDIKeyboard = {sizeof(DIDATAFORMAT),
sizeof(DIOBJECTDATAFORMAT),
0x00000002,
256,
256,
&rgodf_c_dfDIKeyboard[0]};

DIOBJECTDATAFORMAT rgodf_c_dfDIMouse[] = {
{&GUID_XAxis, 0, 16776963, 0},
{&GUID_YAxis, 4, 16776963, 0},
{&GUID_ZAxis, 8, -2130706685, 0},
{0, 12, 16776972, 0},
{0, 13, 16776972, 0},
{0, 14, -2130706676, 0},
{0, 15, -2130706676, 0}};
const DIDATAFORMAT c_dfDIMouse = {sizeof(DIDATAFORMAT),
sizeof(DIOBJECTDATAFORMAT),
0x00000002,
16,
7,
rgodf_c_dfDIMouse};

DIOBJECTDATAFORMAT rgodf_c_dfDIMouse2[] = {
{&GUID_XAxis, 0, 16776963, 0},
{&GUID_YAxis, 4, 16776963, 0},
{&GUID_ZAxis, 8, -2130706685, 0},
{0, 12, 16776972, 0},
{0, 13, 16776972, 0},
{0, 14, -2130706676, 0},
{0, 15, -2130706676, 0},
{0, 16, -2130706676, 0},
{0, 17, -2130706676, 0},
{0, 18, -2130706676,0},
{0, 19, -2130706676, 0}};
const DIDATAFORMAT c_dfDIMouse2 = {sizeof(DIDATAFORMAT),
sizeof(DIOBJECTDATAFORMAT),
0x00000002,
20,
11,
rgodf_c_dfDIMouse2};

DIOBJECTDATAFORMAT rgodf_c_dfDIJoystick[] = {
{&GUID_XAxis, 0, -2130706685, 256},
{&GUID_YAxis, 4, -2130706685, 256},
{&GUID_ZAxis, 8, -2130706685, 256},
{&GUID_RxAxis, 12, -2130706685, 256},
{&GUID_RyAxis, 16, -2130706685, 256},
{&GUID_RzAxis, 20, -2130706685, 256},
{&GUID_Slider, 24, -2130706685, 256},
{&GUID_Slider, 28, -2130706685, 256},
{&GUID_POV, 32, -2130706672, 0},
{&GUID_POV, 36, -2130706672, 0},
{&GUID_POV, 40, -2130706672, 0},
{&GUID_POV, 44, -2130706672, 0},
{0, 48, -2130706676, 0},
{0, 49, -2130706676, 0},
{0, 50, -2130706676, 0},
{0, 51, -2130706676, 0},
{0, 52, -2130706676, 0},
{0, 53, -2130706676, 0},
{0, 54, -2130706676, 0},
{0, 55, -2130706676, 0},
{0, 56, -2130706676, 0},
{0, 57, -2130706676, 0},
{0, 58, -2130706676, 0},
{0, 59, -2130706676, 0},
{0, 60, -2130706676, 0},
{0, 61, -2130706676, 0},
{0, 62, -2130706676, 0},
{0, 63, -2130706676, 0},
{0, 64, -2130706676, 0},
{0, 65, -2130706676, 0},
{0, 66, -2130706676, 0},
{0, 67, -2130706676, 0},
{0, 68, -2130706676, 0},
{0, 69, -2130706676, 0},
{0, 70, -2130706676, 0},
{0, 71, -2130706676, 0},
{0, 72, -2130706676, 0},
{0, 73, -2130706676, 0},
{0, 74, -2130706676, 0},
{0, 75, -2130706676, 0},
{0, 76, -2130706676, 0},
{0, 77, -2130706676, 0},
{0, 78, -2130706676, 0},
{0, 79, -2130706676, 0}};
const DIDATAFORMAT c_dfDIJoystick = {sizeof(DIDATAFORMAT),
sizeof(DIOBJECTDATAFORMAT),
0x00000001,
80,
44,
rgodf_c_dfDIJoystick};

DIOBJECTDATAFORMAT rgodf_c_dfDIJoystick2[] = {
{&GUID_XAxis, 0, -2130706685, 256},
{&GUID_YAxis, 4, -2130706685, 256},
{&GUID_ZAxis, 8, -2130706685, 256},
{&GUID_RxAxis, 12, -2130706685, 256},
{&GUID_RyAxis, 16, -2130706685, 256},
{&GUID_RzAxis, 20, -2130706685, 256},
{&GUID_Slider, 24, -2130706685, 256},
{&GUID_Slider, 28, -2130706685, 256},
{&GUID_POV, 32, -2130706672, 0},
{&GUID_POV, 36, -2130706672, 0},
{&GUID_POV, 40, -2130706672, 0},
{&GUID_POV, 44, -2130706672, 0},
{0, 48, -2130706676, 0},
{0, 49, -2130706676, 0},
{0, 50, -2130706676, 0},
{0, 51, -2130706676, 0},
{0, 52, -2130706676, 0},
{0, 53, -2130706676, 0},
{0, 54, -2130706676, 0},
{0, 55, -2130706676, 0},
{0, 56, -2130706676, 0},
{0, 57, -2130706676, 0},
{0, 58, -2130706676, 0},
{0, 59, -2130706676, 0},
{0, 60, -2130706676, 0},
{0, 61, -2130706676, 0},
{0, 62, -2130706676, 0},
{0, 63, -2130706676, 0},
{0, 64, -2130706676, 0},
{0, 65, -2130706676, 0},
{0, 66, -2130706676, 0},
{0, 67, -2130706676, 0},
{0, 68, -2130706676, 0},
{0, 69, -2130706676, 0},
{0, 70, -2130706676, 0},
{0, 71, -2130706676, 0},
{0, 72, -2130706676, 0},
{0, 73, -2130706676, 0},
{0, 74, -2130706676, 0},
{0, 75, -2130706676, 0},
{0, 76, -2130706676, 0},
{0, 77, -2130706676, 0},
{0, 78, -2130706676, 0},
{0, 79, -2130706676, 0},
{0, 80, -2130706676, 0},
{0, 81, -2130706676, 0},
{0, 82, -2130706676, 0},
{0, 83, -2130706676, 0},
{0, 84, -2130706676, 0},
{0, 85, -2130706676, 0},
{0, 86, -2130706676, 0},
{0, 87, -2130706676, 0},
{0, 88, -2130706676, 0},
{0, 89, -2130706676, 0},
{0, 90, -2130706676, 0},
{0, 91, -2130706676, 0},
{0, 92, -2130706676, 0},
{0, 93, -2130706676, 0},
{0, 94, -2130706676, 0},
{0, 95, -2130706676, 0},
{0, 96, -2130706676, 0},
{0, 97, -2130706676, 0},
{0, 98, -2130706676, 0},
{0, 99, -2130706676, 0},
{0, 100, -2130706676, 0},
{0, 101, -2130706676, 0},
{0, 102, -2130706676, 0},
{0, 103, -2130706676, 0},
{0, 104, -2130706676, 0},
{0, 105, -2130706676, 0},
{0, 106, -2130706676, 0},
{0, 107, -2130706676, 0},
{0, 108, -2130706676, 0},
{0, 109, -2130706676, 0},
{0, 110, -2130706676, 0},
{0, 111, -2130706676, 0},
{0, 112, -2130706676, 0},
{0, 113, -2130706676, 0},
{0, 114, -2130706676, 0},
{0, 115, -2130706676, 0},
{0, 116, -2130706676, 0},
{0, 117, -2130706676, 0},
{0, 118, -2130706676, 0},
{0, 119, -2130706676, 0},
{0, 120, -2130706676, 0},
{0, 121, -2130706676, 0},
{0, 122, -2130706676, 0},
{0, 123, -2130706676, 0},
{0, 124, -2130706676, 0},
{0, 125, -2130706676, 0},
{0, 126, -2130706676, 0},
{0, 127, -2130706676, 0},
{0, 128, -2130706676, 0},
{0, 129, -2130706676, 0},
{0, 130, -2130706676, 0},
{0, 131, -2130706676, 0},
{0, 132, -2130706676, 0},
{0, 133, -2130706676, 0},
{0, 134, -2130706676, 0},
{0, 135, -2130706676, 0},
{0, 136, -2130706676, 0},
{0, 137, -2130706676, 0},
{0, 138, -2130706676, 0},
{0, 139, -2130706676, 0},
{0, 140, -2130706676, 0},
{0, 141, -2130706676, 0},
{0, 142, -2130706676, 0},
{0, 143, -2130706676, 0},
{0, 144, -2130706676, 0},
{0, 145, -2130706676, 0},
{0, 146, -2130706676, 0},
{0, 147, -2130706676, 0},
{0, 148, -2130706676, 0},
{0, 149, -2130706676, 0},
{0, 150, -2130706676, 0},
{0, 151, -2130706676, 0},
{0, 152, -2130706676, 0},
{0, 153, -2130706676, 0},
{0, 154, -2130706676, 0},
{0, 155, -2130706676, 0},
{0, 156, -2130706676, 0},
{0, 157, -2130706676, 0},
{0, 158, -2130706676, 0},
{0, 159, -2130706676, 0},
{0, 160, -2130706676, 0},
{0, 161, -2130706676, 0},
{0, 162, -2130706676, 0},
{0, 163, -2130706676, 0},
{0, 164, -2130706676, 0},
{0, 165, -2130706676, 0},
{0, 166, -2130706676, 0},
{0, 167, -2130706676, 0},
{0, 168, -2130706676, 0},
{0, 169, -2130706676, 0},
{0, 170, -2130706676, 0},
{0, 171, -2130706676, 0},
{0, 172, -2130706676, 0},
{0, 173, -2130706676, 0},
{0, 174, -2130706676, 0},
{0, 175, -2130706676, 0},
{&GUID_XAxis, 176, -2130706685, 512},
{&GUID_YAxis, 180, -2130706685, 512},
{&GUID_ZAxis, 184, -2130706685, 512},
{&GUID_RxAxis, 188, -2130706685, 512},
{&GUID_RyAxis, 192, -2130706685, 512},
{&GUID_RzAxis, 196, -2130706685, 512},
{&GUID_Slider, 24, -2130706685, 512},
{&GUID_Slider, 28, -2130706685, 512},
{&GUID_XAxis, 208, -2130706685, 768},
{&GUID_YAxis, 212, -2130706685, 768},
{&GUID_ZAxis, 216, -2130706685, 768},
{&GUID_RxAxis, 220, -2130706685, 768},
{&GUID_RyAxis, 224, -2130706685, 768},
{&GUID_RzAxis, 228, -2130706685, 768},
{&GUID_Slider, 24, -2130706685, 768},
{&GUID_Slider, 28, -2130706685, 768},
{&GUID_XAxis, 240, -2130706685, 1024},
{&GUID_YAxis, 244, -2130706685, 1024},
{&GUID_ZAxis, 248, -2130706685, 1024},
{&GUID_RxAxis, 252, -2130706685, 1024},
{&GUID_RyAxis, 256, -2130706685, 1024},
{&GUID_RzAxis, 260, -2130706685, 1024},
{&GUID_Slider, 24, -2130706685, 1024},
{&GUID_Slider, 28, -2130706685, 1024}};
const DIDATAFORMAT c_dfDIJoystick2 = {sizeof(DIDATAFORMAT),
sizeof(DIOBJECTDATAFORMAT),
0x00000001,
272,
164,
rgodf_c_dfDIJoystick2};





