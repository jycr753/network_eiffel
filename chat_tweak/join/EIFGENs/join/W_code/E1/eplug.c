/*
 * Generated by ISE 7.3.9.2766 GPL Edition - win64
 */

#include "eif_eiffel.h"
#include "eif_project.h"
#include "egc_include.h"

#ifdef __cplusplus
extern "C" {
#endif
extern void F1_23();
extern EIF_REFERENCE F1_14();
extern void F218_6197();
extern void F220_6348();
extern void F225_6417();
extern void F226_6555();
extern void F293_3502();
extern void F243_6082();
extern void F53_1185();
extern EIF_REFERENCE F53_1172();
extern EIF_BOOLEAN F53_1184();
extern EIF_BOOLEAN F53_1189();
extern void F53_1194();
extern void F53_1195();
extern void F53_1196();
extern void F46_1109();
extern EIF_TYPED_VALUE F46_1110();

long *eif_area_table = (long *)0;
long *eif_lower_table = (long *)0;


extern void egc_init_plug (void); 
void egc_init_plug (void)
{
	egc_prof_enabled = (EIF_INTEGER) 0;
	egc_correct_mismatch = (void (*)(EIF_REFERENCE)) F1_23;
	egc_twin = (EIF_TYPED_VALUE (*)(EIF_REFERENCE)) F1_14;
	egc_strmake = (void (*)(EIF_REFERENCE, EIF_TYPED_VALUE)) F218_6197;
	egc_str32make = (void (*)(EIF_REFERENCE, EIF_TYPED_VALUE)) F225_6417;
	egc_arrmake = (void (*)(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) F293_3502;
	egc_strset = (void (*)(EIF_REFERENCE, EIF_TYPED_VALUE)) F220_6348;
	egc_str32set = (void (*)(EIF_REFERENCE, EIF_TYPED_VALUE)) F226_6555;
	egc_routdisp_wb = (void (*)(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) F243_6082;
#ifdef RTS_SCP_CAPABLE
	egc_is_scoop_capable = 0;
#endif
	egc_set_exception_data = (void (*)(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) F53_1185;
	egc_set_last_exception = (void (*)(EIF_REFERENCE, EIF_TYPED_VALUE)) F53_1184;
	egc_last_exception = (EIF_TYPED_VALUE (*)(EIF_REFERENCE)) F53_1172;
	egc_is_code_ignored = (EIF_TYPED_VALUE (*)(EIF_REFERENCE, EIF_TYPED_VALUE)) F53_1189;
	egc_once_raise = (void (*)(EIF_REFERENCE, EIF_TYPED_VALUE)) F53_1194;
	egc_init_exception_manager = (void (*)(EIF_REFERENCE)) F53_1195;
	egc_free_preallocated_trace = (void (*)(EIF_REFERENCE)) F53_1196;

	egc_str_dtype = 219;

	egc_str32_dtype = 225;
	egc_arr_dtype = 292;
	egc_tup_dtype = 173;
	egc_disp_rout_id = 2660;
	egc_copy_rout_id = 18;
	egc_is_equal_rout_id = 11;

	egc_sp_char = (EIF_TYPE_INDEX)486;
	egc_sp_wchar = (EIF_TYPE_INDEX)719;
	egc_sp_bool = (EIF_TYPE_INDEX)463;
	egc_sp_uint8 = (EIF_TYPE_INDEX)641;
	egc_sp_uint16 = (EIF_TYPE_INDEX)608;
	egc_sp_uint32 = (EIF_TYPE_INDEX)538;
	egc_sp_uint64 = (EIF_TYPE_INDEX)577;
	egc_sp_int8 = (EIF_TYPE_INDEX)807;
	egc_sp_int16 = (EIF_TYPE_INDEX)774;
	egc_sp_int32 = (EIF_TYPE_INDEX)266;
	egc_sp_int64 = (EIF_TYPE_INDEX)679;
	egc_sp_real32 = (EIF_TYPE_INDEX)740;
	egc_sp_real64 = (EIF_TYPE_INDEX)410;
	egc_sp_pointer = (EIF_TYPE_INDEX)359;
	egc_sp_ref = (EIF_TYPE_INDEX)286;

	egc_uint8_ref_dtype = 195;
	egc_uint16_ref_dtype = 201;
	egc_uint32_ref_dtype = 198;
	egc_uint64_ref_dtype = 210;
	egc_int8_ref_dtype = 174;
	egc_int16_ref_dtype = 207;
	egc_int32_ref_dtype = 204;
	egc_int64_ref_dtype = 186;
	egc_bool_ref_dtype = 189;
	egc_real32_ref_dtype = 177;
	egc_char_ref_dtype = 183;
	egc_wchar_ref_dtype = 180;
	egc_real64_ref_dtype = 192;
	egc_point_ref_dtype = 213;

	egc_uint8_dtype = 196;
	egc_uint16_dtype = 202;
	egc_uint32_dtype = 199;
	egc_uint64_dtype = 211;
	egc_int8_dtype = 175;
	egc_int16_dtype = 208;
	egc_int32_dtype = 205;
	egc_int64_dtype = 187;
	egc_bool_dtype = 190;
	egc_real32_dtype = 178;
	egc_char_dtype = 184;
	egc_wchar_dtype = 181;
	egc_real64_dtype = 193;
	egc_point_dtype = 214;
#ifdef RTS_SCP_CAPABLE
#if RTS_SCP_CAPABLE == 1
	egc_scp_mngr_dtype = (EIF_TYPE_INDEX)0 - 1;
#else
	egc_scp_mngr_dtype = (EIF_TYPE_INDEX)0 - 1;
#endif
#endif

	egc_exception_dtype = 64;
	egc_except_emnger_dtype = 52;

	egc_ce_type = egc_ce_type_init;

	egc_ce_exp_type = egc_ce_exp_type_init;
	egc_fsystem = egc_fsystem_init;
	egc_system_mod_init = egc_system_mod_init_init;
	egc_partab = egc_partab_init;
	egc_partab_size = egc_partab_size_init;
	egc_foption = egc_foption_init;
	egc_frozen = egc_frozen_init;
	egc_fpatidtab = egc_fpatidtab_init;
	egc_address_table = egc_address_table_init;
	egc_fpattern = egc_fpattern_init;

	egc_einit = egc_einit_init;
	egc_tabinit = egc_tabinit_init;

	egc_fcall = egc_fcall_init;
	egc_forg_table = egc_forg_table_init;

	egc_system_name = "join";
	egc_system_location = "C:\\Users\\Stefan\\Desktop\\examples\\net\\advanced\\join\\EIFGENs\\join\\W_code";
	egc_compiler_tag = 38;
	egc_project_version = 1385553085;
	egc_has_old_special_semantic = 0;
	egc_has_ieee_semantic = 1;
	scount = 887;

	egc_rcount = 1;
	egc_ridx = 0;
	egc_rlist = (char**) eif_malloc (sizeof(char*)*egc_rcount);
	egc_rcdt = (int32 *) eif_malloc (sizeof(int32)*egc_rcount);
	egc_rcorigin = (int32 *) eif_malloc (sizeof(int32)*egc_rcount);
	egc_rcoffset = (int32 *) eif_malloc (sizeof(int32)*egc_rcount);
	egc_rcarg = (int32 *) eif_malloc (sizeof(int32)*egc_rcount);
	egc_rlist[0] = "JOIN.make_join";
	egc_rcdt[0] = 0;
	egc_rcorigin[0] = 346;
	egc_rcoffset[0] = 0;
	egc_rcarg[0] = 1;
	
	
	egc_platform_level = 0x00000D00;
	egc_rt_extension_dt = 45;
	egc_rt_extension_notify = (void (*)(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) F46_1109;
	egc_rt_extension_notify_argument = (EIF_TYPED_VALUE (*)(EIF_REFERENCE, EIF_TYPED_VALUE)) F46_1110;
}

void egc_rcdt_init (void)
{
	if (egc_rcdt[0] == 0) {
		egc_rcdt[0] = 876; /* JOIN */
	}
}

#ifdef __cplusplus
}
#endif
