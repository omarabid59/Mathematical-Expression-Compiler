/*
 * Class KL_STANDARD_FILES
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_871 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type1_871 [] = {0xFF11,236,0xFF12,870,0xFFFF};
static EIF_TYPE_INDEX gen_type2_871 [] = {0xFF11,870,0xFFFF};
static EIF_TYPE_INDEX gen_type3_871 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_871 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_871 [] = {0xFF11,870,0xFFFF};
static EIF_TYPE_INDEX gen_type6_871 [] = {0xFF11,870,0xFFFF};
static EIF_TYPE_INDEX gen_type7_871 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_871 [] = {0xFF11,13,0xFFFF};
static EIF_TYPE_INDEX gen_type9_871 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type10_871 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type11_871 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type12_871 [] = {0xFF11,870,0xFFFF};
static EIF_TYPE_INDEX gen_type13_871 [] = {0xFF11,1505,0xFFFF};
static EIF_TYPE_INDEX gen_type14_871 [] = {0xFF11,1507,0xFFFF};
static EIF_TYPE_INDEX gen_type15_871 [] = {0xFF11,1506,0xFFFF};


static struct desc_info desc_871[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, gen_type0_871},
	{1, (BODY_INDEX)-1, 236, gen_type1_871},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{4, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 870, gen_type2_871},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_871},
	{14, (BODY_INDEX)-1, 0, gen_type4_871},
	{15, (BODY_INDEX)-1, 870, gen_type5_871},
	{16, (BODY_INDEX)-1, 870, gen_type6_871},
	{17, (BODY_INDEX)-1, 0, gen_type7_871},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 13, gen_type8_871},
	{21, (BODY_INDEX)-1, 219, gen_type9_871},
	{22, (BODY_INDEX)-1, 219, gen_type10_871},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type11_871},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 870, NULL},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 870, gen_type12_871},
	{13758, (BODY_INDEX)-1, 1505, gen_type13_871},
	{13759, (BODY_INDEX)-1, 1507, gen_type14_871},
	{13760, (BODY_INDEX)-1, 1506, gen_type15_871},
};

extern void Init871(void);
void Init871(void)
{
	IDSC(desc_871, 0, 870);
	IDSC(desc_871 + 1, 1, 870);
	IDSC(desc_871 + 32, 593, 870);
}


#ifdef __cplusplus
}
#endif
