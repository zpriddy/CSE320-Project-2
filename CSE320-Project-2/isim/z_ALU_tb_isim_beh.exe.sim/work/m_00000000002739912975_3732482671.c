/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0xa0883be4 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/Zachary/Documents/GitHub/CSE320-Project-2/CSE320-Project-2/z_ALU.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {0U, 63U};
static unsigned int ng3[] = {33U, 0U};
static unsigned int ng4[] = {35U, 0U};
static unsigned int ng5[] = {47U, 0U};
static unsigned int ng6[] = {2U, 0U};



static void Always_36_0(char *t0)
{
    char t6[8];
    char t27[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    int t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    int t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;

LAB0:    t1 = (t0 + 4928U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 5496);
    *((int *)t2) = 1;
    t3 = (t0 + 4960);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(36, ng0);

LAB5:    xsi_set_current_line(37, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    t4 = (t0 + 3848);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 32);
    xsi_set_current_line(38, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 3528);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);
    xsi_set_current_line(39, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 3688);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);
    xsi_set_current_line(40, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 3048);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 5);
    xsi_set_current_line(41, ng0);
    t2 = (t0 + 3848);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t7 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 26);
    *((unsigned int *)t6) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 26);
    *((unsigned int *)t5) = t11;
    t12 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t12 & 63U);
    t13 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t13 & 63U);
    t14 = (t0 + 2248);
    xsi_vlogvar_assign_value(t14, t6, 0, 0, 6);
    xsi_set_current_line(42, ng0);
    t2 = (t0 + 3848);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t7 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 21);
    *((unsigned int *)t6) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 21);
    *((unsigned int *)t5) = t11;
    t12 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t12 & 31U);
    t13 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t13 & 31U);
    t14 = (t0 + 2568);
    xsi_vlogvar_assign_value(t14, t6, 0, 0, 5);
    xsi_set_current_line(43, ng0);
    t2 = (t0 + 3848);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t7 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 16);
    *((unsigned int *)t6) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 16);
    *((unsigned int *)t5) = t11;
    t12 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t12 & 31U);
    t13 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t13 & 31U);
    t14 = (t0 + 2728);
    xsi_vlogvar_assign_value(t14, t6, 0, 0, 5);
    xsi_set_current_line(45, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB6:    t5 = ((char*)((ng1)));
    t15 = xsi_vlog_unsigned_case_xcompare(t4, 6, t5, 6);
    if (t15 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t15 = xsi_vlog_unsigned_case_xcompare(t4, 6, t2, 6);
    if (t15 == 1)
        goto LAB9;

LAB10:
LAB11:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);

LAB14:    t7 = ((char*)((ng1)));
    t15 = xsi_vlog_unsigned_case_xcompare(t5, 6, t7, 6);
    if (t15 == 1)
        goto LAB15;

LAB16:
LAB17:    goto LAB2;

LAB7:    xsi_set_current_line(46, ng0);

LAB12:    xsi_set_current_line(47, ng0);
    t7 = (t0 + 3848);
    t14 = (t7 + 56U);
    t16 = *((char **)t14);
    memset(t6, 0, 8);
    t17 = (t6 + 4);
    t18 = (t16 + 4);
    t8 = *((unsigned int *)t16);
    t9 = (t8 >> 11);
    *((unsigned int *)t6) = t9;
    t10 = *((unsigned int *)t18);
    t11 = (t10 >> 11);
    *((unsigned int *)t17) = t11;
    t12 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t12 & 31U);
    t13 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t13 & 31U);
    t19 = (t0 + 2888);
    xsi_vlogvar_assign_value(t19, t6, 0, 0, 5);
    xsi_set_current_line(48, ng0);
    t2 = (t0 + 3848);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t6, 0, 8);
    t7 = (t6 + 4);
    t14 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 6);
    *((unsigned int *)t6) = t9;
    t10 = *((unsigned int *)t14);
    t11 = (t10 >> 6);
    *((unsigned int *)t7) = t11;
    t12 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t12 & 31U);
    t13 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t13 & 31U);
    t16 = (t0 + 3208);
    xsi_vlogvar_assign_value(t16, t6, 0, 0, 5);
    xsi_set_current_line(49, ng0);
    t2 = (t0 + 3848);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t6, 0, 8);
    t7 = (t6 + 4);
    t14 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t6) = t9;
    t10 = *((unsigned int *)t14);
    t11 = (t10 >> 0);
    *((unsigned int *)t7) = t11;
    t12 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t12 & 63U);
    t13 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t13 & 63U);
    t16 = (t0 + 2408);
    xsi_vlogvar_assign_value(t16, t6, 0, 0, 6);
    goto LAB11;

LAB9:    xsi_set_current_line(51, ng0);

LAB13:    xsi_set_current_line(52, ng0);
    t3 = (t0 + 3848);
    t5 = (t3 + 56U);
    t7 = *((char **)t5);
    memset(t6, 0, 8);
    t14 = (t6 + 4);
    t16 = (t7 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (t8 >> 0);
    *((unsigned int *)t6) = t9;
    t10 = *((unsigned int *)t16);
    t11 = (t10 >> 0);
    *((unsigned int *)t14) = t11;
    t12 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t12 & 65535U);
    t13 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t13 & 65535U);
    t17 = (t0 + 4008);
    xsi_vlogvar_assign_value(t17, t6, 0, 0, 16);
    goto LAB11;

LAB15:    xsi_set_current_line(57, ng0);

LAB18:    xsi_set_current_line(58, ng0);
    t14 = (t0 + 2408);
    t16 = (t14 + 56U);
    t17 = *((char **)t16);

LAB19:    t18 = ((char*)((ng3)));
    t20 = xsi_vlog_unsigned_case_xcompare(t17, 6, t18, 6);
    if (t20 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng4)));
    t15 = xsi_vlog_unsigned_case_xcompare(t17, 6, t2, 6);
    if (t15 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng5)));
    t15 = xsi_vlog_unsigned_case_xcompare(t17, 6, t2, 6);
    if (t15 == 1)
        goto LAB24;

LAB25:    t2 = ((char*)((ng1)));
    t15 = xsi_vlog_unsigned_case_xcompare(t17, 6, t2, 6);
    if (t15 == 1)
        goto LAB26;

LAB27:    t2 = ((char*)((ng6)));
    t15 = xsi_vlog_unsigned_case_xcompare(t17, 6, t2, 6);
    if (t15 == 1)
        goto LAB28;

LAB29:
LAB30:    goto LAB17;

LAB20:    xsi_set_current_line(59, ng0);

LAB31:    xsi_set_current_line(60, ng0);
    t19 = (t0 + 3528);
    t21 = (t19 + 56U);
    t22 = *((char **)t21);
    t23 = (t0 + 3688);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t22, 32, t25, 32);
    t26 = (t0 + 3368);
    xsi_vlogvar_assign_value(t26, t6, 0, 0, 32);
    goto LAB30;

LAB22:    xsi_set_current_line(62, ng0);

LAB32:    xsi_set_current_line(63, ng0);
    t3 = (t0 + 3528);
    t7 = (t3 + 56U);
    t14 = *((char **)t7);
    t16 = (t0 + 3688);
    t18 = (t16 + 56U);
    t19 = *((char **)t18);
    memset(t6, 0, 8);
    xsi_vlog_unsigned_minus(t6, 32, t14, 32, t19, 32);
    t21 = (t0 + 3368);
    xsi_vlogvar_assign_value(t21, t6, 0, 0, 32);
    goto LAB30;

LAB24:    xsi_set_current_line(65, ng0);

LAB33:    xsi_set_current_line(66, ng0);
    t3 = (t0 + 3528);
    t7 = (t3 + 56U);
    t14 = *((char **)t7);
    t16 = (t0 + 3688);
    t18 = (t16 + 56U);
    t19 = *((char **)t18);
    t8 = *((unsigned int *)t14);
    t9 = *((unsigned int *)t19);
    t10 = (t8 | t9);
    *((unsigned int *)t27) = t10;
    t21 = (t14 + 4);
    t22 = (t19 + 4);
    t23 = (t27 + 4);
    t11 = *((unsigned int *)t21);
    t12 = *((unsigned int *)t22);
    t13 = (t11 | t12);
    *((unsigned int *)t23) = t13;
    t28 = *((unsigned int *)t23);
    t29 = (t28 != 0);
    if (t29 == 1)
        goto LAB34;

LAB35:
LAB36:    memset(t6, 0, 8);
    t26 = (t6 + 4);
    t43 = (t27 + 4);
    t44 = *((unsigned int *)t27);
    t45 = (~(t44));
    *((unsigned int *)t6) = t45;
    *((unsigned int *)t26) = 0;
    if (*((unsigned int *)t43) != 0)
        goto LAB38;

LAB37:    t50 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t50 & 4294967295U);
    t51 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t51 & 4294967295U);
    t52 = (t0 + 3368);
    xsi_vlogvar_assign_value(t52, t6, 0, 0, 32);
    goto LAB30;

LAB26:    xsi_set_current_line(68, ng0);

LAB39:    xsi_set_current_line(69, ng0);
    t3 = (t0 + 3528);
    t7 = (t3 + 56U);
    t14 = *((char **)t7);
    t16 = (t0 + 3048);
    t18 = (t16 + 56U);
    t19 = *((char **)t18);
    memset(t6, 0, 8);
    xsi_vlog_unsigned_lshift(t6, 32, t14, 32, t19, 5);
    t21 = (t0 + 3368);
    xsi_vlogvar_assign_value(t21, t6, 0, 0, 32);
    goto LAB30;

LAB28:    xsi_set_current_line(71, ng0);

LAB40:    xsi_set_current_line(72, ng0);
    t3 = (t0 + 3528);
    t7 = (t3 + 56U);
    t14 = *((char **)t7);
    t16 = (t0 + 3048);
    t18 = (t16 + 56U);
    t19 = *((char **)t18);
    memset(t6, 0, 8);
    xsi_vlog_unsigned_rshift(t6, 32, t14, 32, t19, 5);
    t21 = (t0 + 3368);
    xsi_vlogvar_assign_value(t21, t6, 0, 0, 32);
    goto LAB30;

LAB34:    t30 = *((unsigned int *)t27);
    t31 = *((unsigned int *)t23);
    *((unsigned int *)t27) = (t30 | t31);
    t24 = (t14 + 4);
    t25 = (t19 + 4);
    t32 = *((unsigned int *)t24);
    t33 = (~(t32));
    t34 = *((unsigned int *)t14);
    t20 = (t34 & t33);
    t35 = *((unsigned int *)t25);
    t36 = (~(t35));
    t37 = *((unsigned int *)t19);
    t38 = (t37 & t36);
    t39 = (~(t20));
    t40 = (~(t38));
    t41 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t41 & t39);
    t42 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t42 & t40);
    goto LAB36;

LAB38:    t46 = *((unsigned int *)t6);
    t47 = *((unsigned int *)t43);
    *((unsigned int *)t6) = (t46 | t47);
    t48 = *((unsigned int *)t26);
    t49 = *((unsigned int *)t43);
    *((unsigned int *)t26) = (t48 | t49);
    goto LAB37;

}

static void Cont_81_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 5176U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(81, ng0);
    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5592);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 8);
    xsi_driver_vfirst_trans(t5, 0, 31);
    t10 = (t0 + 5512);
    *((int *)t10) = 1;

LAB1:    return;
}


extern void work_m_00000000002739912975_3732482671_init()
{
	static char *pe[] = {(void *)Always_36_0,(void *)Cont_81_1};
	xsi_register_didat("work_m_00000000002739912975_3732482671", "isim/z_ALU_tb_isim_beh.exe.sim/work/m_00000000002739912975_3732482671.didat");
	xsi_register_executes(pe);
}
