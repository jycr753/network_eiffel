/*
 * Code for class INET_ADDRESS_FACTORY
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F878_7289(EIF_REFERENCE);
extern EIF_TYPED_VALUE F878_7290(EIF_REFERENCE);
extern EIF_TYPED_VALUE F878_7291(EIF_REFERENCE);
extern EIF_TYPED_VALUE F878_7292(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F878_7293(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F878_7294(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F878_7295(EIF_REFERENCE);
extern EIF_TYPED_VALUE F878_7296(EIF_REFERENCE);
extern EIF_TYPED_VALUE F878_7297(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F878_7298(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F878_7299(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F878_7300(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F878_7301(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F878_7302(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F878_7303(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F878_7304(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F878_7305(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F878_7306(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F878_7307(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F878_7308(EIF_REFERENCE, EIF_TYPED_VALUE);extern EIF_POINTER en_getaddrinfo(EIF_POINTER);

extern EIF_TYPED_VALUE F878_7309(EIF_REFERENCE, EIF_TYPED_VALUE);extern EIF_INTEGER_32 en_sockaddr_get_family(EIF_POINTER);

extern void EIF_Minit878(void);

#ifdef __cplusplus
}
#endif

#include <ctype.h>
#include "eif_misc.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {INET_ADDRESS_FACTORY}.create_any_local */
EIF_TYPED_VALUE F878_7289 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "create_any_local";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,Result);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 877, Current, 0, 0, 12739);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(877, Current, 12739);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF8000365, 0,0); /* Result */
	
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(877, 135, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(866, 33, "any_local_address", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	Result = (EIF_REFERENCE) RTCCL(tr2);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("create_any_local_attached", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef up2
}

/* {INET_ADDRESS_FACTORY}.create_loopback */
EIF_TYPED_VALUE F878_7290 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "create_loopback";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,Result);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 877, Current, 0, 0, 12740);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(877, Current, 12740);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF8000365, 0,0); /* Result */
	
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(877, 135, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(866, 34, "loopback_address", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	Result = (EIF_REFERENCE) RTCCL(tr2);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("create_any_localhost_attached", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef up2
}

/* {INET_ADDRESS_FACTORY}.create_localhost */
EIF_TYPED_VALUE F878_7291 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "create_localhost";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,loc2);
	RTLR(5,ur1);
	RTLR(6,Result);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 877, Current, 2, 0, 12741);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(877, Current, 12741);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 1, 0xF80000DB, 0, 0); /* loc1 */
	
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(877, 135, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(866, 32, "local_host_name", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	loc1 = (EIF_REFERENCE) RTCCL(tr2);
	RTHOOK(2);
	RTDBGAL(Current, 2, 0xF8000365, 0, 0); /* loc2 */
	
	ur1 = RTCCL(loc1);
	loc2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(877, 132, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	if (RTAL & CK_CHECK) {
		RTHOOK(3);
		RTCT("l_result_attached", EX_CHECK);
		if ((EIF_BOOLEAN)(loc2 != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTHOOK(4);
	RTDBGAL(Current, 0, 0xF8000365, 0,0); /* Result */
	
	Result = (EIF_REFERENCE) RTCCL(loc2);
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("create_localhost_attached", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef up2
#undef ur1
}

/* {INET_ADDRESS_FACTORY}.create_from_name */
EIF_TYPED_VALUE F878_7292 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "create_from_name";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLR(3,ur1);
	RTLR(4,tr1);
	RTLR(5,Result);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 877, Current, 1, 1, 12742);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(877, Current, 12742);
	if (arg1) {
		RTCC(arg1, 877, l_feature_name, 1, 219);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = '\0';
	ur1 = RTCCL(arg1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(877, 137, Dtype(Current)))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = RTCCL(tr1);
	if (EIF_TEST(loc1)) {
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVPF(78, 1, "is_empty", loc1))(loc1)).it_b);
		tb1 = (EIF_BOOLEAN) !tb2;
	}
	if (tb1) {
		RTHOOK(2);
		RTDBGAL(Current, 0, 0xF8000365, 0,0); /* Result */
		
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVPF(333, 0, "first", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		Result = (EIF_REFERENCE) RTCCL(tr1);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef arg1
}

/* {INET_ADDRESS_FACTORY}.create_from_address */
EIF_TYPED_VALUE F878_7293 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "create_from_address";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLR(4,ur2);
	RTLR(5,Result);
	RTLR(6,loc1);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 877, Current, 1, 1, 12743);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(877, Current, 12743);
	if (arg1) {
		{
			static EIF_TYPE_INDEX typarr0[] = {877,647,196,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), 647, typarr0)));
			RTCC(arg1, 877, l_feature_name, 1, typres0);
		}
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_address", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVPF(51, 0, "count", arg1))(arg1)).it_i4);
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(870, 39, 870))(Current)).it_i4);
	if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
		RTHOOK(3);
		RTDBGAL(Current, 0, 0xF8000365, 0,0); /* Result */
		
		tr1 = RTLN(870);
		ur1 = NULL;
		ur2 = RTCCL(arg1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(870, 40, Dtype(tr1)))(tr1, ur1x, ur2x);
		RTNHOOK(3,1);
		Result = (EIF_REFERENCE) RTCCL(tr1);
	} else {
		RTHOOK(4);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVPF(51, 0, "count", arg1))(arg1)).it_i4);
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(871, 42, 871))(Current)).it_i4);
		if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
			RTHOOK(5);
			RTDBGAL(Current, 1, 0xF8000287, 0, 0); /* loc1 */
			
			ur1 = RTCCL(arg1);
			loc1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(877, 141, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTHOOK(6);
			if ((EIF_BOOLEAN)(loc1 != NULL)) {
				RTHOOK(7);
				RTDBGAL(Current, 0, 0xF8000365, 0,0); /* Result */
				
				tr1 = RTLN(870);
				ur1 = NULL;
				ur2 = RTCCL(loc1);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(870, 40, Dtype(tr1)))(tr1, ur1x, ur2x);
				RTNHOOK(7,1);
				Result = (EIF_REFERENCE) RTCCL(tr1);
			} else {
				RTHOOK(8);
				RTDBGAL(Current, 0, 0xF8000365, 0,0); /* Result */
				
				tr1 = RTLN(871);
				ur1 = NULL;
				ur2 = RTCCL(arg1);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(871, 43, Dtype(tr1)))(tr1, ur1x, ur2x);
				RTNHOOK(8,1);
				Result = (EIF_REFERENCE) RTCCL(tr1);
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ur2
#undef arg1
}

/* {INET_ADDRESS_FACTORY}.create_from_sockaddr */
EIF_TYPED_VALUE F878_7294 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "create_from_sockaddr";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_p
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,ur1);
	RTLR(3,Result);
	RTLR(4,tr2);
	RTLR(5,ur2);
	RTLU (SK_REF, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	
	RTEAA(l_feature_name, 877, Current, 1, 1, 12744);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(877, Current, 12744);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_sockaddr", EX_PRE);
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(877, 30, dtype))(Current)).it_p);
		RTTE((EIF_BOOLEAN)(arg1 != tp1), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	
	up1 = arg1;
	loc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(877, 149, dtype))(Current, up1x)).it_i4);
	RTHOOK(3);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(877, 120, dtype))(Current)).it_i4);
	if ((EIF_BOOLEAN)(loc1 == ti4_1)) {
		RTHOOK(4);
		RTDBGAL(Current, 0, 0xF8000365, 0,0); /* Result */
		
		tr1 = RTLN(870);
		ur1 = NULL;
		up1 = arg1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(870, 41, Dtype(tr1)))(tr1, ur1x, up1x);
		RTNHOOK(4,1);
		Result = (EIF_REFERENCE) RTCCL(tr1);
	} else {
		RTHOOK(5);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(877, 121, dtype))(Current)).it_i4);
		if ((EIF_BOOLEAN)(loc1 == ti4_1)) {
			RTHOOK(6);
			RTDBGAL(Current, 0, 0xF8000365, 0,0); /* Result */
			
			tr1 = RTLN(871);
			ur1 = NULL;
			up1 = arg1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(871, 46, Dtype(tr1)))(tr1, ur1x, up1x);
			RTNHOOK(6,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(7);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(869, 47, "raw_address", Result))(Result)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr1);
			tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(877, 142, dtype))(Current, ur1x)).it_b);
			if (tb1) {
				RTHOOK(8);
				RTDBGAL(Current, 0, 0xF8000365, 0,0); /* Result */
				
				tr1 = RTLN(870);
				ur1 = NULL;
				tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(869, 47, "raw_address", Result))(Result)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				ur2 = RTCCL(tr2);
				tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(877, 141, dtype))(Current, ur2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				ur2 = RTCCL(tr2);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(870, 40, Dtype(tr1)))(tr1, ur1x, ur2x);
				RTNHOOK(8,1);
				Result = (EIF_REFERENCE) RTCCL(tr1);
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ur2
#undef arg1
}

/* {INET_ADDRESS_FACTORY}.impl */
RTOID (F878_7295)
EIF_TYPED_VALUE F878_7295 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "impl";
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOTDR(F878_7295);

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 877, Current, 0, 0, 12745);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(877, Current, 12745);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(877, 32, Dtype(Current)))(Current)).it_b);
	if (tb1) {
		RTHOOK(2);
		RTDBGAL(Current, 0, 0xF8000362, 0,0); /* Result */
		
		tr1 = RTLN(868);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(868, 26, Dtype(tr1)))(tr1);
		RTNHOOK(2,1);
		Result = (EIF_REFERENCE) RTCCL(tr1);
	} else {
		RTHOOK(3);
		RTDBGAL(Current, 0, 0xF8000362, 0,0); /* Result */
		
		tr1 = RTLN(867);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(867, 26, Dtype(tr1)))(tr1);
		RTNHOOK(3,1);
		Result = (EIF_REFERENCE) RTCCL(tr1);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef Result
}

/* {INET_ADDRESS_FACTORY}.int16sz */
EIF_TYPED_VALUE F878_7296 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
	return r;
}

/* {INET_ADDRESS_FACTORY}.get_all_by_name */
EIF_TYPED_VALUE F878_7297 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "get_all_by_name";
	RTEX;
	EIF_BOOLEAN loc1 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc8 = (EIF_BOOLEAN) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ur3x = {{0}, SK_REF};
#define ur3 ur3x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(12);
	RTLR(0,arg1);
	RTLR(1,loc2);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,Result);
	RTLR(5,tr2);
	RTLR(6,ur1);
	RTLR(7,loc3);
	RTLR(8,loc6);
	RTLR(9,loc4);
	RTLR(10,ur2);
	RTLR(11,ur3);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_BOOL, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_INT32, &loc5);
	RTLU(SK_REF, &loc6);
	RTLU(SK_INT32, &loc7);
	RTLU(SK_BOOL, &loc8);
	
	RTEAA(l_feature_name, 877, Current, 8, 1, 12747);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(877, Current, 12747);
	if (arg1) {
		RTCC(arg1, 877, l_feature_name, 1, 219);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 2, 0xF80000DB, 0, 0); /* loc2 */
	
	loc2 = (EIF_REFERENCE) RTCCL(arg1);
	RTHOOK(2);
	RTDBGAL(Current, 5, 0x10000000, 1, 0); /* loc5 */
	
	loc5 = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
	RTHOOK(3);
	tb1 = '\01';
	if (!(EIF_BOOLEAN)(loc2 == NULL)) {
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVPF(337, 17, "is_empty", loc2))(loc2)).it_b);
		tb1 = tb2;
	}
	if (tb1) {
		RTHOOK(4);
		RTDBGAL(Current, 0, 0xF800012F, 0,0); /* Result */
		
		{
			static EIF_TYPE_INDEX typarr0[] = {877,303,869,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, 303, typarr0)));
			tr1 = RTLN(typres0);
		}
		ui4_1 = ((EIF_INTEGER_32) 1L);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWPC(39, 0, Dtype(tr1)))(tr1, ui4_1x);
		RTNHOOK(4,1);
		Result = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(5);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(877, 135, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(5,1);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(866, 34, "loopback_address", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		ur1 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVPF(285, 4, "extend", Result))(Result, ur1x);
	} else {
		RTHOOK(6);
		RTDBGAL(Current, 8, 0x04000000, 1, 0); /* loc8 */
		
		loc8 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		RTHOOK(7);
		ui4_1 = ((EIF_INTEGER_32) 1L);
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVPF(259, 0, "item", loc2))(loc2, ui4_1x)).it_c1);
		if ((EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '[')) {
			RTHOOK(8);
			tb1 = '\0';
			ti4_1 = *(EIF_INTEGER_32 *)(loc2 + RTVPA(341, 30, "count", loc2));
			if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 2L))) {
				ti4_1 = *(EIF_INTEGER_32 *)(loc2 + RTVPA(341, 30, "count", loc2));
				ui4_1 = ti4_1;
				tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVPF(259, 0, "item", loc2))(loc2, ui4_1x)).it_c1);
				tb1 = (EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) ']');
			}
			if (tb1) {
				RTHOOK(9);
				RTDBGAL(Current, 2, 0xF80000DB, 0, 0); /* loc2 */
				
				ui4_1 = ((EIF_INTEGER_32) 2L);
				ti4_1 = *(EIF_INTEGER_32 *)(loc2 + RTVPA(341, 30, "count", loc2));
				ui4_2 = (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L));
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVPF(337, 78, "substring", loc2))(loc2, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				loc2 = (EIF_REFERENCE) RTCCL(tr1);
				RTHOOK(10);
				RTDBGAL(Current, 1, 0x04000000, 1, 0); /* loc1 */
				
				loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			} else {
				RTHOOK(11);
				RTDBGAL(Current, 8, 0x04000000, 1, 0); /* loc8 */
				
				loc8 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			}
		}
		RTHOOK(12);
		if ((EIF_BOOLEAN) !loc8) {
			RTHOOK(13);
			tb1 = '\01';
			ui4_1 = ((EIF_INTEGER_32) 1L);
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVPF(259, 0, "item", loc2))(loc2, ui4_1x)).it_c1);
			RTNHOOK(13,1);
			tr1 = RTLN(184);
			*(EIF_CHARACTER_8 *)tr1 = tc1;
			
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVPF(308, 24, "is_hexa_digit", tr1))(tr1)).it_b);
			if (!tb2) {
				ui4_1 = ((EIF_INTEGER_32) 1L);
				tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVPF(259, 0, "item", loc2))(loc2, ui4_1x)).it_c1);
				tb1 = (EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) ':');
			}
			if (tb1) {
				RTHOOK(14);
				RTDBGAL(Current, 3, 0xF8000287, 0, 0); /* loc3 */
				
				ur1 = RTCCL(loc2);
				loc3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(877, 139, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTHOOK(15);
				if ((EIF_BOOLEAN)(loc3 == NULL)) {
					RTHOOK(16);
					RTDBGAL(Current, 7, 0x10000000, 1, 0); /* loc7 */
					
					uc1 = (EIF_CHARACTER_8) '%';
					ui4_1 = ((EIF_INTEGER_32) 1L);
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVPF(341, 9, "index_of", loc2))(loc2, uc1x, ui4_1x)).it_i4);
					loc7 = (EIF_INTEGER_32) ti4_1;
					RTHOOK(17);
					if ((EIF_BOOLEAN)(loc7 != ((EIF_INTEGER_32) 0L))) {
						RTHOOK(18);
						RTDBGAL(Current, 5, 0x10000000, 1, 0); /* loc5 */
						
						ur1 = RTCCL(loc2);
						loc5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(877, 138, dtype))(Current, ur1x)).it_i4);
						RTHOOK(19);
						if ((EIF_BOOLEAN)(loc5 == ((EIF_INTEGER_32) -1L))) {
							RTHOOK(20);
							RTDBGAL(Current, 6, 0xF80000DB, 0, 0); /* loc6 */
							
							ui4_1 = (EIF_INTEGER_32) (loc7 + ((EIF_INTEGER_32) 1L));
							ti4_1 = *(EIF_INTEGER_32 *)(loc2 + RTVPA(341, 30, "count", loc2));
							ui4_2 = ti4_1;
							tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVPF(337, 78, "substring", loc2))(loc2, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							loc6 = (EIF_REFERENCE) RTCCL(tr1);
						}
					}
					RTHOOK(21);
					RTDBGAL(Current, 3, 0xF8000287, 0, 0); /* loc3 */
					
					ur1 = RTCCL(loc2);
					loc3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(877, 140, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				} else {
					RTHOOK(22);
					if (loc1) {
						RTHOOK(23);
						RTDBGAL(Current, 8, 0x04000000, 1, 0); /* loc8 */
						
						loc8 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
					}
				}
				RTHOOK(24);
				if ((EIF_BOOLEAN) !loc8) {
					RTHOOK(25);
					if ((EIF_BOOLEAN)(loc3 != NULL)) {
						RTHOOK(26);
						RTDBGAL(Current, 0, 0xF800012F, 0,0); /* Result */
						
						{
							static EIF_TYPE_INDEX typarr0[] = {877,303,869,0xFFFF};
							EIF_TYPE_INDEX typres0;
							static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
							
							typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, 303, typarr0)));
							tr1 = RTLN(typres0);
						}
						ui4_1 = ((EIF_INTEGER_32) 1L);
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWPC(39, 0, Dtype(tr1)))(tr1, ui4_1x);
						RTNHOOK(26,1);
						Result = (EIF_REFERENCE) RTCCL(tr1);
						RTHOOK(27);
						ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVPF(51, 0, "count", loc3))(loc3)).it_i4);
						ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(870, 39, 870))(Current)).it_i4);
						if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
							RTHOOK(28);
							RTDBGAL(Current, 4, 0xF8000365, 0, 0); /* loc4 */
							
							tr1 = RTLN(870);
							ur1 = NULL;
							ur2 = RTCCL(loc3);
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(870, 40, Dtype(tr1)))(tr1, ur1x, ur2x);
							RTNHOOK(28,1);
							loc4 = (EIF_REFERENCE) RTCCL(tr1);
						} else {
							RTHOOK(29);
							if ((EIF_BOOLEAN)(loc6 != NULL)) {
								RTHOOK(30);
								RTDBGAL(Current, 4, 0xF8000365, 0, 0); /* loc4 */
								
								tr1 = RTLN(871);
								ur1 = NULL;
								ur2 = RTCCL(loc3);
								ur3 = RTCCL(loc6);
								(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(871, 44, Dtype(tr1)))(tr1, ur1x, ur2x, ur3x);
								RTNHOOK(30,1);
								loc4 = (EIF_REFERENCE) RTCCL(tr1);
							} else {
								RTHOOK(31);
								RTDBGAL(Current, 4, 0xF8000365, 0, 0); /* loc4 */
								
								tr1 = RTLN(871);
								ur1 = NULL;
								ur2 = RTCCL(loc3);
								ui4_1 = loc5;
								(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(871, 45, Dtype(tr1)))(tr1, ur1x, ur2x, ui4_1x);
								RTNHOOK(31,1);
								loc4 = (EIF_REFERENCE) RTCCL(tr1);
							}
						}
						RTHOOK(32);
						ur1 = RTCCL(loc4);
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVPF(285, 4, "extend", Result))(Result, ur1x);
					}
				}
			} else {
				RTHOOK(33);
				if (loc1) {
					RTHOOK(34);
					RTDBGAL(Current, 8, 0x04000000, 1, 0); /* loc8 */
					
					loc8 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
					RTHOOK(35);
					RTDBGAL(Current, 0, 0xF800012F, 0,0); /* Result */
					
					Result = (EIF_REFERENCE) NULL;
				}
			}
			RTHOOK(36);
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(Result == NULL) && (EIF_BOOLEAN) !loc8)) {
				RTHOOK(37);
				RTDBGAL(Current, 0, 0xF800012F, 0,0); /* Result */
				
				ur1 = RTCCL(loc2);
				Result = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(877, 146, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(38);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(11);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef up2
#undef ur1
#undef ur2
#undef ur3
#undef ui4_1
#undef ui4_2
#undef uc1
#undef arg1
}

/* {INET_ADDRESS_FACTORY}.check_numeric_zone */
EIF_TYPED_VALUE F878_7298 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "check_numeric_zone";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_8 loc4 = (EIF_CHARACTER_8) 0;
	EIF_BOOLEAN loc5 = (EIF_BOOLEAN) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLU (SK_INT32, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_CHAR8, &loc4);
	RTLU(SK_BOOL, &loc5);
	
	RTEAA(l_feature_name, 877, Current, 5, 1, 12748);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(877, Current, 12748);
	if (arg1) {
		RTCC(arg1, 877, l_feature_name, 1, 219);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	
	uc1 = (EIF_CHARACTER_8) '%';
	ui4_1 = ((EIF_INTEGER_32) 1L);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVPF(341, 9, "index_of", arg1))(arg1, uc1x, ui4_1x)).it_i4);
	loc1 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(2);
	RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
	
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(341, 30, "count", arg1));
	loc2 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(3);
	if ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 0L))) {
		RTHOOK(4);
		RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
		
		Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
	} else {
		RTHOOK(5);
		RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
		
		loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L));
		RTHOOK(6);
		RTDBGAL(Current, 5, 0x04000000, 1, 0); /* loc5 */
		
		loc5 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		for (;;) {
			RTHOOK(7);
			if ((EIF_BOOLEAN) (loc5 || (EIF_BOOLEAN) (loc3 > loc2))) break;
			RTHOOK(8);
			RTDBGAL(Current, 4, 0x08000000, 1, 0); /* loc4 */
			
			ui4_1 = loc3;
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVPF(259, 0, "item", arg1))(arg1, ui4_1x)).it_c1);
			loc4 = (EIF_CHARACTER_8) tc1;
			RTHOOK(9);
			if ((EIF_BOOLEAN)(loc4 == (EIF_CHARACTER_8) ']')) {
				RTHOOK(10);
				if ((EIF_BOOLEAN)(loc3 == (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)))) {
					RTHOOK(11);
					RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
					
					Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
				}
				RTHOOK(12);
				RTDBGAL(Current, 5, 0x04000000, 1, 0); /* loc5 */
				
				loc5 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			} else {
				RTHOOK(13);
				tb1 = EIF_TEST(isdigit(loc4));
				if ((EIF_BOOLEAN) !tb1) {
					RTHOOK(14);
					RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
					
					Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
					RTHOOK(15);
					RTDBGAL(Current, 5, 0x04000000, 1, 0); /* loc5 */
					
					loc5 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				} else {
					RTHOOK(16);
					RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
					
					ti4_1 = (EIF_INTEGER_32) (loc4);
					ti4_2 = (EIF_INTEGER_32) ((EIF_CHARACTER_8) '0');
					Result = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (Result * ((EIF_INTEGER_32) 10L)) + (EIF_INTEGER_32) (ti4_1 - ti4_2));
				}
			}
			RTHOOK(17);
			RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
			
			loc3++;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(18);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(8);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef ui4_1
#undef uc1
#undef arg1
}

/* {INET_ADDRESS_FACTORY}.text_to_numeric_format_v4 */
EIF_TYPED_VALUE F878_7299 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "text_to_numeric_format_v4";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE uu1_1x = {{0}, SK_UINT8};
#define uu1_1 uu1_1x.it_n1
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLR(4,loc1);
	RTLR(5,ur1);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	
	RTEAA(l_feature_name, 877, Current, 3, 1, 12749);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(877, Current, 12749);
	if (arg1) {
		RTCC(arg1, 877, l_feature_name, 1, 219);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_src", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVPF(337, 17, "is_empty", arg1))(arg1)).it_b);
	if ((EIF_BOOLEAN) !tb1) {
		RTHOOK(3);
		RTDBGAL(Current, 0, 0xF8000287, 0,0); /* Result */
		
		{
			static EIF_TYPE_INDEX typarr0[] = {877,647,196,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), 647, typarr0)));
			tr1 = RTLN(typres0);
		}
		uu1_1 = ((EIF_NATURAL_8) 0U);
		ui4_1 = ((EIF_INTEGER_32) 1L);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(870, 39, 870))(Current)).it_i4);
		ui4_2 = ti4_1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWPC(4, 1, Dtype(tr1)))(tr1, uu1_1x, ui4_1x, ui4_2x);
		RTNHOOK(3,1);
		Result = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(4);
		RTDBGAL(Current, 1, 0xF800012F, 0, 0); /* loc1 */
		
		ur1 = RTCCL(arg1);
		uc1 = (EIF_CHARACTER_8) '.';
		loc1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(877, 144, dtype))(Current, ur1x, uc1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTHOOK(5);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVPF(51, 0, "count", loc1))(loc1)).it_i4);
		switch (ti4_1) {
			case 1L:
				RTHOOK(6);
				ui4_1 = ((EIF_INTEGER_32) 1L);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVPF(190, 0, "i_th", loc1))(loc1, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(6,1);
				tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVPF(337, 30, "is_integer_32", tr1))(tr1)).it_b);
				if (tb1) {
					RTHOOK(7);
					RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
					
					ui4_1 = ((EIF_INTEGER_32) 1L);
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVPF(190, 0, "i_th", loc1))(loc1, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					RTNHOOK(7,1);
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVPF(337, 64, "to_integer_32", tr1))(tr1)).it_i4);
					loc2 = (EIF_INTEGER_32) ti4_1;
					RTHOOK(8);
					tb1 = '\0';
					if ((EIF_BOOLEAN) (loc2 >= ((EIF_INTEGER_32) 0L))) {
						ti4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_64) RTI64C(4294967295));
						tb1 = (EIF_BOOLEAN) (loc2 <= ti4_1);
					}
					if (tb1) {
						RTHOOK(9);
						ui4_1 = ((EIF_INTEGER_32) 24L);
						ti4_1 = eif_bit_shift_right(loc2,ui4_1);
						ui4_1 = ((EIF_INTEGER_32) 255L);
						ti4_2 = eif_bit_and((ti4_1),ui4_1);
						tu1_1 = (EIF_NATURAL_8) ti4_2;
						uu1_1 = tu1_1;
						ui4_1 = ((EIF_INTEGER_32) 1L);
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVPF(190, 3, "put", Result))(Result, uu1_1x, ui4_1x);
						RTHOOK(10);
						ui4_1 = ((EIF_INTEGER_32) 16777215L);
						ti4_1 = eif_bit_and(loc2,ui4_1);
						ui4_1 = ((EIF_INTEGER_32) 16L);
						ti4_2 = eif_bit_shift_right((ti4_1),ui4_1);
						ui4_1 = ((EIF_INTEGER_32) 255L);
						ti4_1 = eif_bit_and((ti4_2),ui4_1);
						tu1_1 = (EIF_NATURAL_8) ti4_1;
						uu1_1 = tu1_1;
						ui4_1 = ((EIF_INTEGER_32) 2L);
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVPF(190, 3, "put", Result))(Result, uu1_1x, ui4_1x);
						RTHOOK(11);
						ui4_1 = ((EIF_INTEGER_32) 65535L);
						ti4_1 = eif_bit_and(loc2,ui4_1);
						ui4_1 = ((EIF_INTEGER_32) 8L);
						ti4_2 = eif_bit_shift_right((ti4_1),ui4_1);
						ui4_1 = ((EIF_INTEGER_32) 255L);
						ti4_1 = eif_bit_and((ti4_2),ui4_1);
						tu1_1 = (EIF_NATURAL_8) ti4_1;
						uu1_1 = tu1_1;
						ui4_1 = ((EIF_INTEGER_32) 3L);
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVPF(190, 3, "put", Result))(Result, uu1_1x, ui4_1x);
						RTHOOK(12);
						ui4_1 = ((EIF_INTEGER_32) 255L);
						ti4_1 = eif_bit_and(loc2,ui4_1);
						tu1_1 = (EIF_NATURAL_8) ti4_1;
						uu1_1 = tu1_1;
						ui4_1 = ((EIF_INTEGER_32) 4L);
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVPF(190, 3, "put", Result))(Result, uu1_1x, ui4_1x);
					} else {
						RTHOOK(13);
						RTDBGAL(Current, 0, 0xF8000287, 0,0); /* Result */
						
						Result = (EIF_REFERENCE) NULL;
					}
				} else {
					RTHOOK(14);
					RTDBGAL(Current, 0, 0xF8000287, 0,0); /* Result */
					
					Result = (EIF_REFERENCE) NULL;
				}
				break;
			case 2L:
				RTHOOK(15);
				ui4_1 = ((EIF_INTEGER_32) 1L);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVPF(190, 0, "i_th", loc1))(loc1, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(15,1);
				tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVPF(337, 30, "is_integer_32", tr1))(tr1)).it_b);
				if (tb1) {
					RTHOOK(16);
					RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
					
					ui4_1 = ((EIF_INTEGER_32) 1L);
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVPF(190, 0, "i_th", loc1))(loc1, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					RTNHOOK(16,1);
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVPF(337, 64, "to_integer_32", tr1))(tr1)).it_i4);
					loc2 = (EIF_INTEGER_32) ti4_1;
					RTHOOK(17);
					if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc2 >= ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (loc2 <= ((EIF_INTEGER_32) 255L)))) {
						RTHOOK(18);
						ui4_1 = ((EIF_INTEGER_32) 255L);
						ti4_1 = eif_bit_and(loc2,ui4_1);
						tu1_1 = (EIF_NATURAL_8) ti4_1;
						uu1_1 = tu1_1;
						ui4_1 = ((EIF_INTEGER_32) 1L);
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVPF(190, 3, "put", Result))(Result, uu1_1x, ui4_1x);
						RTHOOK(19);
						ui4_1 = ((EIF_INTEGER_32) 2L);
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVPF(190, 0, "i_th", loc1))(loc1, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						RTNHOOK(19,1);
						tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVPF(337, 30, "is_integer_32", tr1))(tr1)).it_b);
						if (tb1) {
							RTHOOK(20);
							RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
							
							ui4_1 = ((EIF_INTEGER_32) 2L);
							tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVPF(190, 0, "i_th", loc1))(loc1, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							RTNHOOK(20,1);
							ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVPF(337, 64, "to_integer_32", tr1))(tr1)).it_i4);
							loc2 = (EIF_INTEGER_32) ti4_1;
							RTHOOK(21);
							tb1 = '\0';
							if ((EIF_BOOLEAN) (loc2 >= ((EIF_INTEGER_32) 0L))) {
								ti4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_64) RTI64C(4294967295));
								tb1 = (EIF_BOOLEAN) (loc2 <= ti4_1);
							}
							if (tb1) {
								RTHOOK(22);
								ui4_1 = ((EIF_INTEGER_32) 16L);
								ti4_1 = eif_bit_shift_right(loc2,ui4_1);
								ui4_1 = ((EIF_INTEGER_32) 255L);
								ti4_2 = eif_bit_and((ti4_1),ui4_1);
								tu1_1 = (EIF_NATURAL_8) ti4_2;
								uu1_1 = tu1_1;
								ui4_1 = ((EIF_INTEGER_32) 2L);
								(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVPF(190, 3, "put", Result))(Result, uu1_1x, ui4_1x);
								RTHOOK(23);
								ui4_1 = ((EIF_INTEGER_32) 65535L);
								ti4_1 = eif_bit_and(loc2,ui4_1);
								ui4_1 = ((EIF_INTEGER_32) 8L);
								ti4_2 = eif_bit_shift_right((ti4_1),ui4_1);
								ui4_1 = ((EIF_INTEGER_32) 255L);
								ti4_1 = eif_bit_and((ti4_2),ui4_1);
								tu1_1 = (EIF_NATURAL_8) ti4_1;
								uu1_1 = tu1_1;
								ui4_1 = ((EIF_INTEGER_32) 3L);
								(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVPF(190, 3, "put", Result))(Result, uu1_1x, ui4_1x);
								RTHOOK(24);
								ui4_1 = ((EIF_INTEGER_32) 255L);
								ti4_1 = eif_bit_and(loc2,ui4_1);
								tu1_1 = (EIF_NATURAL_8) ti4_1;
								uu1_1 = tu1_1;
								ui4_1 = ((EIF_INTEGER_32) 4L);
								(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVPF(190, 3, "put", Result))(Result, uu1_1x, ui4_1x);
							} else {
								RTHOOK(25);
								RTDBGAL(Current, 0, 0xF8000287, 0,0); /* Result */
								
								Result = (EIF_REFERENCE) NULL;
							}
						} else {
							RTHOOK(26);
							RTDBGAL(Current, 0, 0xF8000287, 0,0); /* Result */
							
							Result = (EIF_REFERENCE) NULL;
						}
					}
				} else {
					RTHOOK(27);
					RTDBGAL(Current, 0, 0xF8000287, 0,0); /* Result */
					
					Result = (EIF_REFERENCE) NULL;
				}
				break;
			case 3L:
				RTHOOK(28);
				RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
				
				loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
				for (;;) {
					RTHOOK(29);
					if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc3 > ((EIF_INTEGER_32) 2L)) || (EIF_BOOLEAN)(Result == NULL))) break;
					RTHOOK(30);
					ui4_1 = loc3;
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVPF(190, 0, "i_th", loc1))(loc1, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					RTNHOOK(30,1);
					tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVPF(337, 30, "is_integer_32", tr1))(tr1)).it_b);
					if (tb1) {
						RTHOOK(31);
						RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
						
						ui4_1 = loc3;
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVPF(190, 0, "i_th", loc1))(loc1, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						RTNHOOK(31,1);
						ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVPF(337, 64, "to_integer_32", tr1))(tr1)).it_i4);
						loc2 = (EIF_INTEGER_32) ti4_1;
						RTHOOK(32);
						if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc2 >= ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (loc2 <= ((EIF_INTEGER_32) 255L)))) {
							RTHOOK(33);
							ui4_1 = ((EIF_INTEGER_32) 255L);
							ti4_1 = eif_bit_and(loc2,ui4_1);
							tu1_1 = (EIF_NATURAL_8) ti4_1;
							uu1_1 = tu1_1;
							ui4_1 = loc3;
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVPF(190, 3, "put", Result))(Result, uu1_1x, ui4_1x);
						} else {
							RTHOOK(34);
							RTDBGAL(Current, 0, 0xF8000287, 0,0); /* Result */
							
							Result = (EIF_REFERENCE) NULL;
						}
					} else {
						RTHOOK(35);
						RTDBGAL(Current, 0, 0xF8000287, 0,0); /* Result */
						
						Result = (EIF_REFERENCE) NULL;
					}
					RTHOOK(36);
					RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
					
					loc3++;
				}
				RTHOOK(37);
				ui4_1 = ((EIF_INTEGER_32) 3L);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVPF(190, 0, "i_th", loc1))(loc1, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(37,1);
				tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVPF(337, 30, "is_integer_32", tr1))(tr1)).it_b);
				if (tb1) {
					RTHOOK(38);
					RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
					
					ui4_1 = ((EIF_INTEGER_32) 3L);
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVPF(190, 0, "i_th", loc1))(loc1, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					RTNHOOK(38,1);
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVPF(337, 64, "to_integer_32", tr1))(tr1)).it_i4);
					loc2 = (EIF_INTEGER_32) ti4_1;
					RTHOOK(39);
					if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc2 >= ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (loc2 <= ((EIF_INTEGER_32) 65535L)))) {
						if (RTAL & CK_CHECK) {
							RTHOOK(40);
							RTCT("result_attached", EX_CHECK);
							if ((EIF_BOOLEAN)(Result != NULL)) {
								RTCK;
							} else {
								RTCF;
							}
						}
						RTHOOK(41);
						ui4_1 = ((EIF_INTEGER_32) 8L);
						ti4_1 = eif_bit_shift_right(loc2,ui4_1);
						ui4_1 = ((EIF_INTEGER_32) 255L);
						ti4_2 = eif_bit_and((ti4_1),ui4_1);
						tu1_1 = (EIF_NATURAL_8) ti4_2;
						uu1_1 = tu1_1;
						ui4_1 = ((EIF_INTEGER_32) 3L);
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVPF(190, 3, "put", Result))(Result, uu1_1x, ui4_1x);
						RTHOOK(42);
						ui4_1 = ((EIF_INTEGER_32) 255L);
						ti4_1 = eif_bit_and(loc2,ui4_1);
						tu1_1 = (EIF_NATURAL_8) ti4_1;
						uu1_1 = tu1_1;
						ui4_1 = ((EIF_INTEGER_32) 4L);
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVPF(190, 3, "put", Result))(Result, uu1_1x, ui4_1x);
					} else {
						RTHOOK(43);
						RTDBGAL(Current, 0, 0xF8000287, 0,0); /* Result */
						
						Result = (EIF_REFERENCE) NULL;
					}
				} else {
					RTHOOK(44);
					RTDBGAL(Current, 0, 0xF8000287, 0,0); /* Result */
					
					Result = (EIF_REFERENCE) NULL;
				}
				break;
			case 4L:
				RTHOOK(45);
				RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
				
				loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
				for (;;) {
					RTHOOK(46);
					if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc3 > ((EIF_INTEGER_32) 4L)) || (EIF_BOOLEAN)(Result == NULL))) break;
					RTHOOK(47);
					ui4_1 = loc3;
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVPF(190, 0, "i_th", loc1))(loc1, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					RTNHOOK(47,1);
					tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVPF(337, 30, "is_integer_32", tr1))(tr1)).it_b);
					if (tb1) {
						RTHOOK(48);
						RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
						
						ui4_1 = loc3;
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVPF(190, 0, "i_th", loc1))(loc1, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						RTNHOOK(48,1);
						ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVPF(337, 64, "to_integer_32", tr1))(tr1)).it_i4);
						loc2 = (EIF_INTEGER_32) ti4_1;
						RTHOOK(49);
						if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc2 >= ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (loc2 <= ((EIF_INTEGER_32) 255L)))) {
							RTHOOK(50);
							ui4_1 = ((EIF_INTEGER_32) 255L);
							ti4_1 = eif_bit_and(loc2,ui4_1);
							tu1_1 = (EIF_NATURAL_8) ti4_1;
							uu1_1 = tu1_1;
							ui4_1 = loc3;
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVPF(190, 3, "put", Result))(Result, uu1_1x, ui4_1x);
						} else {
							RTHOOK(51);
							RTDBGAL(Current, 0, 0xF8000287, 0,0); /* Result */
							
							Result = (EIF_REFERENCE) NULL;
						}
					} else {
						RTHOOK(52);
						RTDBGAL(Current, 0, 0xF8000287, 0,0); /* Result */
						
						Result = (EIF_REFERENCE) NULL;
					}
					RTHOOK(53);
					RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
					
					loc3++;
				}
				break;
			default:
				RTHOOK(54);
				RTDBGAL(Current, 0, 0xF8000287, 0,0); /* Result */
				
				Result = (EIF_REFERENCE) NULL;
				break;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(55);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
#undef ui4_2
#undef uu1_1
#undef uc1
#undef arg1
}

/* {INET_ADDRESS_FACTORY}.text_to_numeric_format_v6 */
EIF_TYPED_VALUE F878_7300 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "text_to_numeric_format_v6";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc9 = (EIF_BOOLEAN) 0;
	EIF_INTEGER_32 loc10 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_8 loc11 = (EIF_CHARACTER_8) 0;
	EIF_REFERENCE loc12 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc13 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc14 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc15 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE uu1_1x = {{0}, SK_UINT8};
#define uu1_1 uu1_1x.it_n1
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(8);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLR(4,loc12);
	RTLR(5,ur1);
	RTLR(6,loc13);
	RTLR(7,loc15);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_INT32, &loc5);
	RTLU(SK_INT32, &loc6);
	RTLU(SK_INT32, &loc7);
	RTLU(SK_INT32, &loc8);
	RTLU(SK_BOOL, &loc9);
	RTLU(SK_INT32, &loc10);
	RTLU(SK_CHAR8, &loc11);
	RTLU(SK_REF, &loc12);
	RTLU(SK_REF, &loc13);
	RTLU(SK_BOOL, &loc14);
	RTLU(SK_REF, &loc15);
	
	RTEAA(l_feature_name, 877, Current, 15, 1, 12750);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(877, Current, 12750);
	if (arg1) {
		RTCC(arg1, 877, l_feature_name, 1, 219);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_src", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(341, 30, "count", arg1));
	if ((EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 2L))) {
		RTHOOK(3);
		RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
		
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(341, 30, "count", arg1));
		loc2 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(4);
		RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
		
		uc1 = (EIF_CHARACTER_8) '%';
		ui4_1 = ((EIF_INTEGER_32) 1L);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVPF(341, 9, "index_of", arg1))(arg1, uc1x, ui4_1x)).it_i4);
		loc1 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(5);
		if ((EIF_BOOLEAN) (loc1 < loc2)) {
			RTHOOK(6);
			RTDBGAL(Current, 0, 0xF8000287, 0,0); /* Result */
			
			{
				static EIF_TYPE_INDEX typarr0[] = {877,647,196,0xFFFF};
				EIF_TYPE_INDEX typres0;
				static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
				
				typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), 647, typarr0)));
				tr1 = RTLN(typres0);
			}
			uu1_1 = ((EIF_NATURAL_8) 0U);
			ui4_1 = ((EIF_INTEGER_32) 1L);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(871, 42, 871))(Current)).it_i4);
			ui4_2 = ti4_1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWPC(4, 1, Dtype(tr1)))(tr1, uu1_1x, ui4_1x, ui4_2x);
			RTNHOOK(6,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(7);
			if ((EIF_BOOLEAN)(loc1 != ((EIF_INTEGER_32) 0L))) {
				RTHOOK(8);
				RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
				
				loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L));
			}
			RTHOOK(9);
			RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
			
			loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			RTHOOK(10);
			RTDBGAL(Current, 4, 0x10000000, 1, 0); /* loc4 */
			
			loc4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			RTHOOK(11);
			RTDBGAL(Current, 8, 0x10000000, 1, 0); /* loc8 */
			
			loc8 = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
			RTHOOK(12);
			ui4_1 = loc3;
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVPF(259, 0, "item", arg1))(arg1, ui4_1x)).it_c1);
			if ((EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) ':')) {
				RTHOOK(13);
				RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
				
				loc3++;
				RTHOOK(14);
				ui4_1 = loc3;
				tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVPF(259, 0, "item", arg1))(arg1, ui4_1x)).it_c1);
				if ((EIF_BOOLEAN)(tc1 != (EIF_CHARACTER_8) ':')) {
					RTHOOK(15);
					RTDBGAL(Current, 0, 0xF8000287, 0,0); /* Result */
					
					Result = (EIF_REFERENCE) NULL;
				}
			}
			RTHOOK(16);
			if ((EIF_BOOLEAN)(Result != NULL)) {
				RTHOOK(17);
				RTDBGAL(Current, 7, 0x10000000, 1, 0); /* loc7 */
				
				loc7 = (EIF_INTEGER_32) loc3;
				RTHOOK(18);
				RTDBGAL(Current, 9, 0x04000000, 1, 0); /* loc9 */
				
				loc9 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
				RTHOOK(19);
				RTDBGAL(Current, 10, 0x10000000, 1, 0); /* loc10 */
				
				loc10 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
				RTHOOK(20);
				RTDBGAL(Current, 14, 0x04000000, 1, 0); /* loc14 */
				
				loc14 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
				for (;;) {
					RTHOOK(21);
					if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc14 || (EIF_BOOLEAN)(Result == NULL)) || (EIF_BOOLEAN) (loc3 > loc2))) break;
					RTHOOK(22);
					RTDBGAL(Current, 11, 0x08000000, 1, 0); /* loc11 */
					
					ui4_1 = loc3;
					tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVPF(259, 0, "item", arg1))(arg1, ui4_1x)).it_c1);
					loc11 = (EIF_CHARACTER_8) tc1;
					RTHOOK(23);
					RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
					
					loc3++;
					RTHOOK(24);
					tr1 = RTLN(184);
					*(EIF_CHARACTER_8 *)tr1 = loc11;
					
					tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVPF(308, 24, "is_hexa_digit", tr1))(tr1)).it_b);
					if (tb1) {
						RTHOOK(25);
						RTDBGAL(Current, 10, 0x10000000, 1, 0); /* loc10 */
						
						ui4_1 = ((EIF_INTEGER_32) 4L);
						ti4_1 = eif_bit_shift_left(loc10,ui4_1);
						loc10 = (EIF_INTEGER_32) ti4_1;
						RTHOOK(26);
						RTDBGAL(Current, 10, 0x10000000, 1, 0); /* loc10 */
						
						uc1 = loc11;
						tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(877, 143, dtype))(Current, uc1x)).it_n1);
						ti4_1 = (EIF_INTEGER_32) tu1_1;
						ui4_1 = ti4_1;
						ti4_1 = eif_bit_or(loc10,ui4_1);
						loc10 = (EIF_INTEGER_32) ti4_1;
						RTHOOK(27);
						if ((EIF_BOOLEAN) (loc10 > ((EIF_INTEGER_32) 65535L))) {
							RTHOOK(28);
							RTDBGAL(Current, 0, 0xF8000287, 0,0); /* Result */
							
							Result = (EIF_REFERENCE) NULL;
						} else {
							RTHOOK(29);
							RTDBGAL(Current, 9, 0x04000000, 1, 0); /* loc9 */
							
							loc9 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
						}
					} else {
						RTHOOK(30);
						if ((EIF_BOOLEAN)(loc11 == (EIF_CHARACTER_8) ':')) {
							RTHOOK(31);
							RTDBGAL(Current, 7, 0x10000000, 1, 0); /* loc7 */
							
							loc7 = (EIF_INTEGER_32) loc3;
							RTHOOK(32);
							if ((EIF_BOOLEAN) !loc9) {
								RTHOOK(33);
								if ((EIF_BOOLEAN)(loc8 != ((EIF_INTEGER_32) -1L))) {
									RTHOOK(34);
									RTDBGAL(Current, 0, 0xF8000287, 0,0); /* Result */
									
									Result = (EIF_REFERENCE) NULL;
								} else {
									RTHOOK(35);
									RTDBGAL(Current, 8, 0x10000000, 1, 0); /* loc8 */
									
									loc8 = (EIF_INTEGER_32) loc4;
								}
							} else {
								RTHOOK(36);
								if ((EIF_BOOLEAN) (loc3 > loc2)) {
									RTHOOK(37);
									RTDBGAL(Current, 0, 0xF8000287, 0,0); /* Result */
									
									Result = (EIF_REFERENCE) NULL;
								} else {
									RTHOOK(38);
									ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(877, 136, dtype))(Current)).it_i4);
									ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(871, 42, 871))(Current)).it_i4);
									if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (loc4 + ti4_1) > (EIF_INTEGER_32) (ti4_2 + ((EIF_INTEGER_32) 1L)))) {
										RTHOOK(39);
										RTDBGAL(Current, 0, 0xF8000287, 0,0); /* Result */
										
										Result = (EIF_REFERENCE) NULL;
									} else {
										RTHOOK(40);
										ui4_1 = ((EIF_INTEGER_32) 8L);
										ti4_1 = eif_bit_shift_right(loc10,ui4_1);
										ui4_1 = ((EIF_INTEGER_32) 255L);
										ti4_2 = eif_bit_and((ti4_1),ui4_1);
										tu1_1 = (EIF_NATURAL_8) ti4_2;
										uu1_1 = tu1_1;
										ui4_1 = loc4;
										(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVPF(190, 3, "put", Result))(Result, uu1_1x, ui4_1x);
										RTHOOK(41);
										RTDBGAL(Current, 4, 0x10000000, 1, 0); /* loc4 */
										
										loc4++;
										RTHOOK(42);
										ui4_1 = ((EIF_INTEGER_32) 255L);
										ti4_1 = eif_bit_and(loc10,ui4_1);
										tu1_1 = (EIF_NATURAL_8) ti4_1;
										uu1_1 = tu1_1;
										ui4_1 = loc4;
										(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVPF(190, 3, "put", Result))(Result, uu1_1x, ui4_1x);
										RTHOOK(43);
										RTDBGAL(Current, 4, 0x10000000, 1, 0); /* loc4 */
										
										loc4++;
										RTHOOK(44);
										RTDBGAL(Current, 9, 0x04000000, 1, 0); /* loc9 */
										
										loc9 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
										RTHOOK(45);
										RTDBGAL(Current, 10, 0x10000000, 1, 0); /* loc10 */
										
										loc10 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
									}
								}
							}
						} else {
							RTHOOK(46);
							ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(870, 39, 870))(Current)).it_i4);
							ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(871, 42, 871))(Current)).it_i4);
							if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc11 == (EIF_CHARACTER_8) '.') && ((EIF_BOOLEAN) ((EIF_INTEGER_32) (loc4 + ti4_1) <= (EIF_INTEGER_32) (ti4_2 + ((EIF_INTEGER_32) 1L)))))) {
								RTHOOK(47);
								RTDBGAL(Current, 12, 0xF80000DB, 0, 0); /* loc12 */
								
								ui4_1 = loc7;
								ui4_2 = loc2;
								tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVPF(337, 78, "substring", arg1))(arg1, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
								loc12 = (EIF_REFERENCE) RTCCL(tr1);
								RTHOOK(48);
								ur1 = RTCCL(loc12);
								ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(877, 145, dtype))(Current, ur1x)).it_i4);
								if ((EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 3L))) {
									RTHOOK(49);
									RTDBGAL(Current, 0, 0xF8000287, 0,0); /* Result */
									
									Result = (EIF_REFERENCE) NULL;
								} else {
									RTHOOK(50);
									RTDBGAL(Current, 13, 0xF8000287, 0, 0); /* loc13 */
									
									ur1 = RTCCL(loc12);
									loc13 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(877, 139, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
									RTHOOK(51);
									if ((EIF_BOOLEAN)(loc13 == NULL)) {
										RTHOOK(52);
										RTDBGAL(Current, 0, 0xF8000287, 0,0); /* Result */
										
										Result = (EIF_REFERENCE) NULL;
									} else {
										RTHOOK(53);
										RTDBGAL(Current, 5, 0x10000000, 1, 0); /* loc5 */
										
										loc5 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
										for (;;) {
											RTHOOK(54);
											ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(870, 39, 870))(Current)).it_i4);
											if ((EIF_BOOLEAN) (loc5 > ti4_1)) break;
											RTHOOK(55);
											ui4_1 = loc5;
											tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVPF(190, 0, "item", loc13))(loc13, ui4_1x)).it_n1);
											uu1_1 = tu1_1;
											ui4_1 = loc4;
											(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVPF(190, 3, "put", Result))(Result, uu1_1x, ui4_1x);
											RTHOOK(56);
											RTDBGAL(Current, 4, 0x10000000, 1, 0); /* loc4 */
											
											loc4++;
											RTHOOK(57);
											RTDBGAL(Current, 5, 0x10000000, 1, 0); /* loc5 */
											
											loc5++;
										}
										RTHOOK(58);
										RTDBGAL(Current, 9, 0x04000000, 1, 0); /* loc9 */
										
										loc9 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
										RTHOOK(59);
										RTDBGAL(Current, 14, 0x04000000, 1, 0); /* loc14 */
										
										loc14 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
									}
								}
							} else {
								RTHOOK(60);
								RTDBGAL(Current, 0, 0xF8000287, 0,0); /* Result */
								
								Result = (EIF_REFERENCE) NULL;
							}
						}
					}
				}
				RTHOOK(61);
				if ((EIF_BOOLEAN)(Result != NULL)) {
					RTHOOK(62);
					if (loc9) {
						RTHOOK(63);
						ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(877, 136, dtype))(Current)).it_i4);
						ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(871, 42, 871))(Current)).it_i4);
						if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (loc4 + ti4_2) > (EIF_INTEGER_32) (ti4_3 + ((EIF_INTEGER_32) 1L)))) {
							RTHOOK(64);
							RTDBGAL(Current, 0, 0xF8000287, 0,0); /* Result */
							
							Result = (EIF_REFERENCE) NULL;
						} else {
							RTHOOK(65);
							ui4_1 = ((EIF_INTEGER_32) 8L);
							ti4_2 = eif_bit_shift_right(loc10,ui4_1);
							ui4_1 = ((EIF_INTEGER_32) 255L);
							ti4_3 = eif_bit_and((ti4_2),ui4_1);
							tu1_1 = (EIF_NATURAL_8) ti4_3;
							uu1_1 = tu1_1;
							ui4_1 = loc4;
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVPF(190, 3, "put", Result))(Result, uu1_1x, ui4_1x);
							RTHOOK(66);
							RTDBGAL(Current, 4, 0x10000000, 1, 0); /* loc4 */
							
							loc4++;
							RTHOOK(67);
							ui4_1 = ((EIF_INTEGER_32) 255L);
							ti4_2 = eif_bit_and(loc10,ui4_1);
							tu1_1 = (EIF_NATURAL_8) ti4_2;
							uu1_1 = tu1_1;
							ui4_1 = loc4;
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVPF(190, 3, "put", Result))(Result, uu1_1x, ui4_1x);
							RTHOOK(68);
							RTDBGAL(Current, 4, 0x10000000, 1, 0); /* loc4 */
							
							loc4++;
						}
					}
				}
				RTHOOK(69);
				if ((EIF_BOOLEAN)(Result != NULL)) {
					RTHOOK(70);
					if ((EIF_BOOLEAN)(loc8 != ((EIF_INTEGER_32) -1L))) {
						RTHOOK(71);
						RTDBGAL(Current, 6, 0x10000000, 1, 0); /* loc6 */
						
						loc6 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc4 - loc8);
						RTHOOK(72);
						ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(871, 42, 871))(Current)).it_i4);
						if ((EIF_BOOLEAN)(loc4 == (EIF_INTEGER_32) (ti4_2 + ((EIF_INTEGER_32) 1L)))) {
							RTHOOK(73);
							RTDBGAL(Current, 0, 0xF8000287, 0,0); /* Result */
							
							Result = (EIF_REFERENCE) NULL;
						} else {
							RTHOOK(74);
							RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
							
							loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
							for (;;) {
								RTHOOK(75);
								if ((EIF_BOOLEAN) (loc3 >= loc6)) break;
								RTHOOK(76);
								ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (loc8 + loc6) - loc3) - ((EIF_INTEGER_32) 1L));
								tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVPF(190, 0, "item", Result))(Result, ui4_1x)).it_n1);
								uu1_1 = tu1_1;
								ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(871, 42, 871))(Current)).it_i4);
								ui4_1 = (EIF_INTEGER_32) (ti4_2 - loc3);
								(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVPF(190, 3, "put", Result))(Result, uu1_1x, ui4_1x);
								RTHOOK(77);
								tu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
								uu1_1 = tu1_1;
								ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (loc8 + loc6) - loc3) - ((EIF_INTEGER_32) 1L));
								(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVPF(190, 3, "put", Result))(Result, uu1_1x, ui4_1x);
								RTHOOK(78);
								RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
								
								loc3++;
							}
							RTHOOK(79);
							RTDBGAL(Current, 4, 0x10000000, 1, 0); /* loc4 */
							
							loc4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(871, 42, 871))(Current)).it_i4);
							loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc4 + ((EIF_INTEGER_32) 1L));
						}
					}
					RTHOOK(80);
					ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(871, 42, 871))(Current)).it_i4);
					if ((EIF_BOOLEAN)(loc4 != (EIF_INTEGER_32) (ti4_2 + ((EIF_INTEGER_32) 1L)))) {
						RTHOOK(81);
						RTDBGAL(Current, 0, 0xF8000287, 0,0); /* Result */
						
						Result = (EIF_REFERENCE) NULL;
					} else {
						if (RTAL & CK_CHECK) {
							RTHOOK(82);
							RTCT("result_attached", EX_CHECK);
							if ((EIF_BOOLEAN)(Result != NULL)) {
								RTCK;
							} else {
								RTCF;
							}
						}
						RTHOOK(83);
						RTDBGAL(Current, 15, 0xF8000287, 0, 0); /* loc15 */
						
						ur1 = RTCCL(Result);
						loc15 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(877, 141, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						RTHOOK(84);
						if ((EIF_BOOLEAN)(loc15 != NULL)) {
							RTHOOK(85);
							RTDBGAL(Current, 0, 0xF8000287, 0,0); /* Result */
							
							Result = (EIF_REFERENCE) RTCCL(loc15);
						}
					}
				}
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(86);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(18);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
#undef ui4_2
#undef uu1_1
#undef uc1
#undef arg1
}

/* {INET_ADDRESS_FACTORY}.convert_from_ipv4_mappedd_address */
EIF_TYPED_VALUE F878_7301 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "convert_from_ipv4_mappedd_address";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE uu1_1x = {{0}, SK_UINT8};
#define uu1_1 uu1_1x.it_n1
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,Result);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	
	RTEAA(l_feature_name, 877, Current, 1, 1, 12751);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(877, Current, 12751);
	if (arg1) {
		{
			static EIF_TYPE_INDEX typarr0[] = {877,647,196,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), 647, typarr0)));
			RTCC(arg1, 877, l_feature_name, 1, typres0);
		}
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	ur1 = RTCCL(arg1);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(877, 142, dtype))(Current, ur1x)).it_b);
	if (tb1) {
		RTHOOK(2);
		RTDBGAL(Current, 0, 0xF8000287, 0,0); /* Result */
		
		{
			static EIF_TYPE_INDEX typarr0[] = {877,647,196,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), 647, typarr0)));
			tr1 = RTLN(typres0);
		}
		uu1_1 = ((EIF_NATURAL_8) 0U);
		ui4_1 = ((EIF_INTEGER_32) 1L);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(870, 39, 870))(Current)).it_i4);
		ui4_2 = ti4_1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWPC(4, 1, Dtype(tr1)))(tr1, uu1_1x, ui4_1x, ui4_2x);
		RTNHOOK(2,1);
		Result = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(3);
		RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
		
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			RTHOOK(4);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(870, 39, 870))(Current)).it_i4);
			if ((EIF_BOOLEAN) (loc1 > ti4_1)) break;
			RTHOOK(5);
			ui4_1 = (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 12L));
			tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVPF(190, 0, "item", arg1))(arg1, ui4_1x)).it_n1);
			uu1_1 = tu1_1;
			ui4_1 = loc1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVPF(190, 3, "put", Result))(Result, uu1_1x, ui4_1x);
			RTHOOK(6);
			RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
			
			loc1++;
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("valid_array", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN)(Result != NULL)) {
			ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVPF(51, 0, "count", Result))(Result)).it_i4);
			ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(870, 39, 870))(Current)).it_i4);
			tb1 = (EIF_BOOLEAN)(ti4_2 == ti4_3);
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ur1
#undef ui4_1
#undef ui4_2
#undef uu1_1
#undef arg1
}

/* {INET_ADDRESS_FACTORY}.is_ipv4_mapped_address */
EIF_TYPED_VALUE F878_7302 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_ipv4_mapped_address";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_BOOLEAN tb5;
	EIF_BOOLEAN tb6;
	EIF_BOOLEAN tb7;
	EIF_BOOLEAN tb8;
	EIF_BOOLEAN tb9;
	EIF_BOOLEAN tb10;
	EIF_BOOLEAN tb11;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 877, Current, 0, 1, 12752);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(877, Current, 12752);
	if (arg1) {
		{
			static EIF_TYPE_INDEX typarr0[] = {877,647,196,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), 647, typarr0)));
			RTCC(arg1, 877, l_feature_name, 1, typres0);
		}
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_addr", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVPF(51, 0, "count", arg1))(arg1)).it_i4);
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(871, 42, 871))(Current)).it_i4);
	if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
		RTHOOK(3);
		RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
		
		tb1 = '\0';
		tb2 = '\0';
		tb3 = '\0';
		tb4 = '\0';
		tb5 = '\0';
		tb6 = '\0';
		tb7 = '\0';
		tb8 = '\0';
		tb9 = '\0';
		tb10 = '\0';
		tb11 = '\0';
		ui4_1 = ((EIF_INTEGER_32) 1L);
		tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVPF(190, 0, "item", arg1))(arg1, ui4_1x)).it_n1);
		tu1_2 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
		if ((EIF_BOOLEAN)(tu1_1 == tu1_2)) {
			ui4_1 = ((EIF_INTEGER_32) 2L);
			tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVPF(190, 0, "item", arg1))(arg1, ui4_1x)).it_n1);
			tu1_2 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
			tb11 = (EIF_BOOLEAN)(tu1_1 == tu1_2);
		}
		if (tb11) {
			ui4_1 = ((EIF_INTEGER_32) 3L);
			tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVPF(190, 0, "item", arg1))(arg1, ui4_1x)).it_n1);
			tu1_2 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
			tb10 = (EIF_BOOLEAN)(tu1_1 == tu1_2);
		}
		if (tb10) {
			ui4_1 = ((EIF_INTEGER_32) 4L);
			tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVPF(190, 0, "item", arg1))(arg1, ui4_1x)).it_n1);
			tu1_2 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
			tb9 = (EIF_BOOLEAN)(tu1_1 == tu1_2);
		}
		if (tb9) {
			ui4_1 = ((EIF_INTEGER_32) 5L);
			tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVPF(190, 0, "item", arg1))(arg1, ui4_1x)).it_n1);
			tu1_2 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
			tb8 = (EIF_BOOLEAN)(tu1_1 == tu1_2);
		}
		if (tb8) {
			ui4_1 = ((EIF_INTEGER_32) 6L);
			tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVPF(190, 0, "item", arg1))(arg1, ui4_1x)).it_n1);
			tu1_2 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
			tb7 = (EIF_BOOLEAN)(tu1_1 == tu1_2);
		}
		if (tb7) {
			ui4_1 = ((EIF_INTEGER_32) 7L);
			tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVPF(190, 0, "item", arg1))(arg1, ui4_1x)).it_n1);
			tu1_2 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
			tb6 = (EIF_BOOLEAN)(tu1_1 == tu1_2);
		}
		if (tb6) {
			ui4_1 = ((EIF_INTEGER_32) 8L);
			tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVPF(190, 0, "item", arg1))(arg1, ui4_1x)).it_n1);
			tu1_2 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
			tb5 = (EIF_BOOLEAN)(tu1_1 == tu1_2);
		}
		if (tb5) {
			ui4_1 = ((EIF_INTEGER_32) 9L);
			tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVPF(190, 0, "item", arg1))(arg1, ui4_1x)).it_n1);
			tu1_2 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
			tb4 = (EIF_BOOLEAN)(tu1_1 == tu1_2);
		}
		if (tb4) {
			ui4_1 = ((EIF_INTEGER_32) 10L);
			tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVPF(190, 0, "item", arg1))(arg1, ui4_1x)).it_n1);
			tu1_2 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
			tb3 = (EIF_BOOLEAN)(tu1_1 == tu1_2);
		}
		if (tb3) {
			ui4_1 = ((EIF_INTEGER_32) 11L);
			tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVPF(190, 0, "item", arg1))(arg1, ui4_1x)).it_n1);
			tu1_2 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 255L);
			tb2 = (EIF_BOOLEAN)(tu1_1 == tu1_2);
		}
		if (tb2) {
			ui4_1 = ((EIF_INTEGER_32) 12L);
			tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVPF(190, 0, "item", arg1))(arg1, ui4_1x)).it_n1);
			tu1_2 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 255L);
			tb1 = (EIF_BOOLEAN)(tu1_1 == tu1_2);
		}
		Result = (EIF_BOOLEAN) tb1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef ui4_1
#undef arg1
}

/* {INET_ADDRESS_FACTORY}.hex_character_to_integer */
EIF_TYPED_VALUE F878_7303 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "hex_character_to_integer";
	RTEX;
#define arg1 arg1x.it_c1
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_c1 = * (EIF_CHARACTER_8 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_UINT8, &Result);
	RTLU(SK_CHAR8,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 877, Current, 0, 1, 12753);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(877, Current, 12753);
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg1 >= (EIF_CHARACTER_8) '0') && (EIF_BOOLEAN) (arg1 <= (EIF_CHARACTER_8) '9'))) {
		RTHOOK(2);
		RTDBGAL(Current, 0, 0x30000000, 1,0); /* Result */
		
		ti4_1 = (EIF_INTEGER_32) (arg1);
		ti4_2 = (EIF_INTEGER_32) ((EIF_CHARACTER_8) '0');
		tu1_1 = (EIF_NATURAL_8) (EIF_INTEGER_32) (ti4_1 - ti4_2);
		Result = (EIF_NATURAL_8) tu1_1;
	} else {
		RTHOOK(3);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg1 >= (EIF_CHARACTER_8) 'a') && (EIF_BOOLEAN) (arg1 <= (EIF_CHARACTER_8) 'f'))) {
			RTHOOK(4);
			RTDBGAL(Current, 0, 0x30000000, 1,0); /* Result */
			
			ti4_1 = (EIF_INTEGER_32) (arg1);
			ti4_2 = (EIF_INTEGER_32) ((EIF_CHARACTER_8) 'a');
			tu1_1 = (EIF_NATURAL_8) (EIF_INTEGER_32) (ti4_1 - ti4_2);
			tu1_2 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 10L);
			Result = (EIF_NATURAL_8) (EIF_NATURAL_8) (tu1_1 + tu1_2);
		} else {
			RTHOOK(5);
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg1 >= (EIF_CHARACTER_8) 'A') && (EIF_BOOLEAN) (arg1 <= (EIF_CHARACTER_8) 'F'))) {
				RTHOOK(6);
				RTDBGAL(Current, 0, 0x30000000, 1,0); /* Result */
				
				ti4_1 = (EIF_INTEGER_32) (arg1);
				ti4_2 = (EIF_INTEGER_32) ((EIF_CHARACTER_8) 'A');
				tu1_1 = (EIF_NATURAL_8) (EIF_INTEGER_32) (ti4_1 - ti4_2);
				tu1_2 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 10L);
				Result = (EIF_NATURAL_8) (EIF_NATURAL_8) (tu1_1 + tu1_2);
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_UINT8; r.it_n1 = Result; return r; }
#undef arg1
}

/* {INET_ADDRESS_FACTORY}.split */
EIF_TYPED_VALUE F878_7304 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "split";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_c1
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_c1 = * (EIF_CHARACTER_8 *) arg2x.it_r;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLR(4,loc2);
	RTLR(5,ur1);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_CHAR8,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 877, Current, 2, 2, 12754);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(877, Current, 12754);
	if (arg1) {
		RTCC(arg1, 877, l_feature_name, 1, 219);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_src", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 0, 0xF800012F, 0,0); /* Result */
	
	{
		static EIF_TYPE_INDEX typarr0[] = {877,303,219,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), 303, typarr0)));
		tr1 = RTLN(typres0);
	}
	ui4_1 = ((EIF_INTEGER_32) 10L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWPC(39, 0, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(2,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVPF(337, 17, "is_empty", arg1))(arg1)).it_b);
	if ((EIF_BOOLEAN) !tb1) {
		RTHOOK(4);
		RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
		
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		RTHOOK(5);
		RTDBGAL(Current, 2, 0xF80000DB, 0, 0); /* loc2 */
		
		tr1 = RTLN(219);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWPC(337, 1, Dtype(tr1)))(tr1);
		RTNHOOK(5,1);
		loc2 = (EIF_REFERENCE) RTCCL(tr1);
		for (;;) {
			RTHOOK(6);
			ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(341, 30, "count", arg1));
			if ((EIF_BOOLEAN) (loc1 > ti4_1)) break;
			RTHOOK(7);
			ui4_1 = loc1;
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVPF(259, 0, "item", arg1))(arg1, ui4_1x)).it_c1);
			if ((EIF_BOOLEAN)(tc1 == arg2)) {
				RTHOOK(8);
				ur1 = RTCCL(loc2);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVPF(285, 4, "extend", Result))(Result, ur1x);
				RTHOOK(9);
				RTDBGAL(Current, 2, 0xF80000DB, 0, 0); /* loc2 */
				
				tr1 = RTLN(219);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWPC(337, 1, Dtype(tr1)))(tr1);
				RTNHOOK(9,1);
				loc2 = (EIF_REFERENCE) RTCCL(tr1);
			} else {
				RTHOOK(10);
				ti4_2 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(341, 30, "count", arg1));
				if ((EIF_BOOLEAN)(loc1 == ti4_2)) {
					RTHOOK(11);
					ui4_1 = loc1;
					tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVPF(259, 0, "item", arg1))(arg1, ui4_1x)).it_c1);
					uc1 = tc1;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVPF(285, 4, "extend", loc2))(loc2, uc1x);
					RTHOOK(12);
					ur1 = RTCCL(loc2);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVPF(285, 4, "extend", Result))(Result, ur1x);
				} else {
					RTHOOK(13);
					ui4_1 = loc1;
					tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVPF(259, 0, "item", arg1))(arg1, ui4_1x)).it_c1);
					uc1 = tc1;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVPF(285, 4, "extend", loc2))(loc2, uc1x);
				}
			}
			RTHOOK(14);
			RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
			
			loc1++;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(15);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ur1
#undef ui4_1
#undef uc1
#undef arg2
#undef arg1
}

/* {INET_ADDRESS_FACTORY}.dot_count */
EIF_TYPED_VALUE F878_7305 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "dot_count";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLU (SK_INT32, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	
	RTEAA(l_feature_name, 877, Current, 1, 1, 12755);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(877, Current, 12755);
	if (arg1) {
		RTCC(arg1, 877, l_feature_name, 1, 219);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_src", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	
	uc1 = (EIF_CHARACTER_8) '.';
	ui4_1 = ((EIF_INTEGER_32) 1L);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVPF(341, 9, "index_of", arg1))(arg1, uc1x, ui4_1x)).it_i4);
	loc1 = (EIF_INTEGER_32) ti4_1;
	for (;;) {
		RTHOOK(3);
		if ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 0L))) break;
		RTHOOK(4);
		RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
		
		Result++;
		RTHOOK(5);
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVPA(341, 30, "count", arg1));
		if ((EIF_BOOLEAN) (loc1 < ti4_1)) {
			RTHOOK(6);
			RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
			
			uc1 = (EIF_CHARACTER_8) '.';
			ui4_1 = (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L));
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVPF(341, 9, "index_of", arg1))(arg1, uc1x, ui4_1x)).it_i4);
			loc1 = (EIF_INTEGER_32) ti4_1;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef ui4_1
#undef uc1
#undef arg1
}

/* {INET_ADDRESS_FACTORY}.get_all_by_name_0 */
EIF_TYPED_VALUE F878_7306 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "get_all_by_name_0";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,ur1);
	RTLR(3,Current);
	RTLR(4,tr1);
	RTLR(5,Result);
	RTLR(6,loc2);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_INT32, &loc3);
	
	RTEAA(l_feature_name, 877, Current, 3, 1, 12756);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(877, Current, 12756);
	if (arg1) {
		RTCC(arg1, 877, l_feature_name, 1, 219);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 1, 0xF800035E, 0, 0); /* loc1 */
	
	ur1 = RTCCL(arg1);
	loc1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(877, 147, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTHOOK(2);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTHOOK(3);
		RTDBGAL(Current, 0, 0xF800012F, 0,0); /* Result */
		
		{
			static EIF_TYPE_INDEX typarr0[] = {877,303,869,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), 303, typarr0)));
			tr1 = RTLN(typres0);
		}
		ui4_1 = ((EIF_INTEGER_32) 1L);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWPC(39, 0, Dtype(tr1)))(tr1, ui4_1x);
		RTNHOOK(3,1);
		Result = (EIF_REFERENCE) RTCCL(tr1);
		for (;;) {
			RTHOOK(4);
			if ((EIF_BOOLEAN)(loc1 == NULL)) break;
			RTHOOK(5);
			RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
			
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(862, 35, "family", loc1))(loc1)).it_i4);
			loc3 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(6);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(862, 32, "af_inet", loc1))(loc1)).it_i4);
			if ((EIF_BOOLEAN)(loc3 == ti4_1)) {
				RTHOOK(7);
				RTDBGAL(Current, 2, 0xF8000365, 0, 0); /* loc2 */
				
				tr1 = RTLN(870);
				ur1 = RTCCL(arg1);
				tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(862, 40, "addr", loc1))(loc1)).it_p);
				up1 = tp1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(870, 41, Dtype(tr1)))(tr1, ur1x, up1x);
				RTNHOOK(7,1);
				loc2 = (EIF_REFERENCE) RTCCL(tr1);
				RTHOOK(8);
				ur1 = RTCCL(loc2);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVPF(285, 4, "extend", Result))(Result, ur1x);
			} else {
				RTHOOK(9);
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(862, 33, "af_inet6", loc1))(loc1)).it_i4);
				if ((EIF_BOOLEAN)(loc3 == ti4_1)) {
					RTHOOK(10);
					tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(877, 32, dtype))(Current)).it_b);
					if (tb1) {
						RTHOOK(11);
						RTDBGAL(Current, 2, 0xF8000365, 0, 0); /* loc2 */
						
						tr1 = RTLN(871);
						ur1 = RTCCL(arg1);
						tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(862, 40, "addr", loc1))(loc1)).it_p);
						up1 = tp1;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(871, 46, Dtype(tr1)))(tr1, ur1x, up1x);
						RTNHOOK(11,1);
						loc2 = (EIF_REFERENCE) RTCCL(tr1);
						RTHOOK(12);
						ur1 = RTCCL(loc2);
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVPF(285, 4, "extend", Result))(Result, ur1x);
					}
				}
			}
			RTHOOK(13);
			RTDBGAL(Current, 1, 0xF800035E, 0, 0); /* loc1 */
			
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(862, 41, "next", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc1 = (EIF_REFERENCE) RTCCL(tr1);
		}
		RTHOOK(14);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVPF(78, 1, "is_empty", Result))(Result)).it_b);
		if (tb1) {
			RTHOOK(15);
			RTDBGAL(Current, 0, 0xF800012F, 0,0); /* Result */
			
			Result = (EIF_REFERENCE) NULL;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(16);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
#undef arg1
}

/* {INET_ADDRESS_FACTORY}.getaddrinfo */
EIF_TYPED_VALUE F878_7307 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "getaddrinfo";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLR(4,Current);
	RTLR(5,Result);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_POINTER, &loc2);
	
	RTEAA(l_feature_name, 877, Current, 2, 1, 12757);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(877, Current, 12757);
	if (arg1) {
		RTCC(arg1, 877, l_feature_name, 1, 219);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 1, 0xF800007D, 0, 0); /* loc1 */
	
	tr1 = RTLN(125);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWPC(75, 0, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(Current, 2, 0x40000000, 1, 0); /* loc2 */
	
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVPF(75, 19, "item", loc1))(loc1)).it_p);
	up1 = tp1;
	loc2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(877, 148, dtype))(Current, up1x)).it_p);
	RTHOOK(3);
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(877, 30, dtype))(Current)).it_p);
	if ((EIF_BOOLEAN)(loc2 != tp1)) {
		RTHOOK(4);
		RTDBGAL(Current, 0, 0xF800035E, 0,0); /* Result */
		
		tr1 = RTLN(881);
		up1 = loc2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(881, 35, Dtype(tr1)))(tr1, up1x);
		RTNHOOK(4,1);
		Result = (EIF_REFERENCE) RTCCL(tr1);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef arg1
}

/* {INET_ADDRESS_FACTORY}.c_getaddrinfo */
EIF_TYPED_VALUE F878_7308 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "c_getaddrinfo";
	RTEX;
#define arg1 arg1x.it_p
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_POINTER, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 877, Current, 0, 1, 12758);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(877, Current, 12758);
	RTIV(Current, RTAL);Result = (EIF_POINTER) en_getaddrinfo(arg1);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_POINTER; r.it_p = Result; return r; }
#undef arg1
}

/* {INET_ADDRESS_FACTORY}.get_sock_family */
EIF_TYPED_VALUE F878_7309 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "get_sock_family";
	RTEX;
#define arg1 arg1x.it_p
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 877, Current, 0, 1, 12759);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(877, Current, 12759);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) en_sockaddr_get_family(arg1);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef arg1
}

void EIF_Minit878 (void)
{
	GTCX
	RTOTS (7295,F878_7295)
}


#ifdef __cplusplus
}
#endif
