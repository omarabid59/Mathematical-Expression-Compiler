/*
 * Code for class UC_SHARED_STRING_EQUALITY_TESTER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F893_8312(EIF_REFERENCE);
extern void EIF_Minit893(void);

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {UC_SHARED_STRING_EQUALITY_TESTER}.string_equality_tester */
RTOID (F893_8312)
EIF_TYPED_VALUE F893_8312 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "string_equality_tester";
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTCDD;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOTDR(F893_8312);
	dtype = Dtype(Current);

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 892, Current, 0, 0, 13988);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(892, Current, 13988);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF800045B, 0,0); /* Result */
	
	tr1 = RTLN(1115);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("string_equality_tester_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef Result
}

void EIF_Minit893 (void)
{
	GTCX
	RTOTS (8312,F893_8312)
}


#ifdef __cplusplus
}
#endif