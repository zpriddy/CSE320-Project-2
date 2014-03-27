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
static int ng5[] = {31, 0};
static int ng6[] = {1, 0};
static unsigned int ng7[] = {47U, 0U};
static unsigned int ng8[] = {2U, 0U};
static unsigned int ng9[] = {9U, 0U};
static unsigned int ng10[] = {12U, 0U};
static unsigned int ng11[] = {4U, 0U};
static unsigned int ng12[] = {5U, 0U};
static int ng13[] = {0, 0};
static unsigned int ng14[] = {43U, 0U};



static void Always_47_0(char *t0)
{
    char t6[8];
    char t22[8];
    char t32[8];
    char t33[8];
    char t34[8];
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
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    unsigned int t41;
    char *t42;
    unsigned int t43;
    int t44;
    int t45;
    char *t46;
    unsigned int t47;
    int t48;
    int t49;
    unsigned int t50;
    int t51;
    unsigned int t52;
    unsigned int t53;
    int t54;
    int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    char *t65;
    char *t66;
    char *t67;

LAB0:    t1 = (t0 + 5408U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 6472);
    *((int *)t2) = 1;
    t3 = (t0 + 5440);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(47, ng0);

LAB5:    xsi_set_current_line(49, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    t4 = (t0 + 4168);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 32);
    xsi_set_current_line(50, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 3848);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);
    xsi_set_current_line(51, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 4008);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);
    xsi_set_current_line(52, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 3368);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 5);
    xsi_set_current_line(53, ng0);
    t2 = (t0 + 4168);
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
    t14 = (t0 + 2568);
    xsi_vlogvar_assign_value(t14, t6, 0, 0, 6);
    xsi_set_current_line(54, ng0);
    t2 = (t0 + 4168);
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
    t14 = (t0 + 2888);
    xsi_vlogvar_assign_value(t14, t6, 0, 0, 5);
    xsi_set_current_line(55, ng0);
    t2 = (t0 + 4168);
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
    t14 = (t0 + 3048);
    xsi_vlogvar_assign_value(t14, t6, 0, 0, 5);
    xsi_set_current_line(57, ng0);
    t2 = (t0 + 2568);
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
LAB11:    xsi_set_current_line(68, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);

LAB14:    t7 = ((char*)((ng1)));
    t15 = xsi_vlog_unsigned_case_xcompare(t5, 6, t7, 6);
    if (t15 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng9)));
    t15 = xsi_vlog_unsigned_case_xcompare(t5, 6, t2, 6);
    if (t15 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng10)));
    t15 = xsi_vlog_unsigned_case_xcompare(t5, 6, t2, 6);
    if (t15 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng11)));
    t15 = xsi_vlog_unsigned_case_xcompare(t5, 6, t2, 6);
    if (t15 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng12)));
    t15 = xsi_vlog_unsigned_case_xcompare(t5, 6, t2, 6);
    if (t15 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng4)));
    t15 = xsi_vlog_unsigned_case_xcompare(t5, 6, t2, 6);
    if (t15 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng14)));
    t15 = xsi_vlog_unsigned_case_xcompare(t5, 6, t2, 6);
    if (t15 == 1)
        goto LAB27;

LAB28:
LAB29:    xsi_set_current_line(128, ng0);
    t2 = (t0 + 3688);
    t3 = (t2 + 56U);
    t7 = *((char **)t3);

LAB75:    t14 = ((char*)((ng1)));
    t15 = xsi_vlog_unsigned_case_xcompare(t7, 32, t14, 32);
    if (t15 == 1)
        goto LAB76;

LAB77:
LAB79:
LAB78:    xsi_set_current_line(132, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 4488);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB80:    goto LAB2;

LAB7:    xsi_set_current_line(58, ng0);

LAB12:    xsi_set_current_line(59, ng0);
    t7 = (t0 + 4168);
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
    t19 = (t0 + 3208);
    xsi_vlogvar_assign_value(t19, t6, 0, 0, 5);
    xsi_set_current_line(60, ng0);
    t2 = (t0 + 4168);
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
    t16 = (t0 + 3528);
    xsi_vlogvar_assign_value(t16, t6, 0, 0, 5);
    xsi_set_current_line(61, ng0);
    t2 = (t0 + 4168);
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
    t16 = (t0 + 2728);
    xsi_vlogvar_assign_value(t16, t6, 0, 0, 6);
    goto LAB11;

LAB9:    xsi_set_current_line(63, ng0);

LAB13:    xsi_set_current_line(64, ng0);
    t3 = (t0 + 4168);
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
    t17 = (t0 + 4328);
    xsi_vlogvar_assign_value(t17, t6, 0, 0, 16);
    goto LAB11;

LAB15:    xsi_set_current_line(69, ng0);

LAB30:    xsi_set_current_line(70, ng0);
    t14 = (t0 + 2728);
    t16 = (t14 + 56U);
    t17 = *((char **)t16);

LAB31:    t18 = ((char*)((ng3)));
    t20 = xsi_vlog_unsigned_case_xcompare(t17, 6, t18, 6);
    if (t20 == 1)
        goto LAB32;

LAB33:    t2 = ((char*)((ng4)));
    t15 = xsi_vlog_unsigned_case_xcompare(t17, 6, t2, 6);
    if (t15 == 1)
        goto LAB34;

LAB35:    t2 = ((char*)((ng7)));
    t15 = xsi_vlog_unsigned_case_xcompare(t17, 6, t2, 6);
    if (t15 == 1)
        goto LAB36;

LAB37:    t2 = ((char*)((ng1)));
    t15 = xsi_vlog_unsigned_case_xcompare(t17, 6, t2, 6);
    if (t15 == 1)
        goto LAB38;

LAB39:    t2 = ((char*)((ng8)));
    t15 = xsi_vlog_unsigned_case_xcompare(t17, 6, t2, 6);
    if (t15 == 1)
        goto LAB40;

LAB41:
LAB42:    goto LAB29;

LAB17:    xsi_set_current_line(95, ng0);

LAB57:    xsi_set_current_line(97, ng0);
    t3 = (t0 + 4328);
    t7 = (t3 + 56U);
    t14 = *((char **)t7);
    memcpy(t6, t14, 8);
    t16 = (t0 + 4008);
    xsi_vlogvar_assign_value(t16, t6, 0, 0, 32);
    xsi_set_current_line(98, ng0);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    t2 = (t0 + 3688);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);
    goto LAB29;

LAB19:    xsi_set_current_line(100, ng0);

LAB58:    xsi_set_current_line(102, ng0);
    t3 = (t0 + 3848);
    t7 = (t3 + 56U);
    t14 = *((char **)t7);
    t16 = (t0 + 4328);
    t18 = (t16 + 56U);
    t19 = *((char **)t18);
    t8 = *((unsigned int *)t14);
    t9 = *((unsigned int *)t19);
    t10 = (t8 & t9);
    *((unsigned int *)t6) = t10;
    t21 = (t14 + 4);
    t31 = (t19 + 4);
    t35 = (t6 + 4);
    t11 = *((unsigned int *)t21);
    t12 = *((unsigned int *)t31);
    t13 = (t11 | t12);
    *((unsigned int *)t35) = t13;
    t23 = *((unsigned int *)t35);
    t24 = (t23 != 0);
    if (t24 == 1)
        goto LAB59;

LAB60:
LAB61:    t38 = (t0 + 3688);
    xsi_vlogvar_assign_value(t38, t6, 0, 0, 32);
    goto LAB29;

LAB21:    xsi_set_current_line(104, ng0);

LAB62:    xsi_set_current_line(106, ng0);
    t3 = (t0 + 3848);
    t7 = (t3 + 56U);
    t14 = *((char **)t7);
    t16 = (t0 + 4008);
    t18 = (t16 + 56U);
    t19 = *((char **)t18);
    memset(t6, 0, 8);
    xsi_vlog_unsigned_minus(t6, 32, t14, 32, t19, 32);
    t21 = (t0 + 3688);
    xsi_vlogvar_assign_value(t21, t6, 0, 0, 32);
    goto LAB29;

LAB23:    xsi_set_current_line(108, ng0);

LAB63:    xsi_set_current_line(110, ng0);
    t3 = (t0 + 3848);
    t7 = (t3 + 56U);
    t14 = *((char **)t7);
    t16 = (t0 + 4008);
    t18 = (t16 + 56U);
    t19 = *((char **)t18);
    memset(t6, 0, 8);
    xsi_vlog_unsigned_minus(t6, 32, t14, 32, t19, 32);
    t21 = ((char*)((ng13)));
    memset(t22, 0, 8);
    t31 = (t6 + 4);
    t35 = (t21 + 4);
    t8 = *((unsigned int *)t6);
    t9 = *((unsigned int *)t21);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t31);
    t12 = *((unsigned int *)t35);
    t13 = (t11 ^ t12);
    t23 = (t10 | t13);
    t24 = *((unsigned int *)t31);
    t25 = *((unsigned int *)t35);
    t26 = (t24 | t25);
    t27 = (~(t26));
    t28 = (t23 & t27);
    if (t28 != 0)
        goto LAB67;

LAB64:    if (t26 != 0)
        goto LAB66;

LAB65:    *((unsigned int *)t22) = 1;

LAB67:    t37 = (t22 + 4);
    t29 = *((unsigned int *)t37);
    t30 = (~(t29));
    t41 = *((unsigned int *)t22);
    t43 = (t41 & t30);
    t47 = (t43 != 0);
    if (t47 > 0)
        goto LAB68;

LAB69:    xsi_set_current_line(113, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 3688);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB70:    goto LAB29;

LAB25:    xsi_set_current_line(115, ng0);

LAB73:    xsi_set_current_line(117, ng0);
    t3 = (t0 + 4328);
    t7 = (t3 + 56U);
    t14 = *((char **)t7);
    memcpy(t6, t14, 8);
    t16 = (t0 + 4008);
    xsi_vlogvar_assign_value(t16, t6, 0, 0, 32);
    xsi_set_current_line(118, ng0);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    t2 = (t0 + 3688);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);
    goto LAB29;

LAB27:    xsi_set_current_line(120, ng0);

LAB74:    xsi_set_current_line(122, ng0);
    t3 = (t0 + 4328);
    t7 = (t3 + 56U);
    t14 = *((char **)t7);
    memcpy(t6, t14, 8);
    t16 = (t0 + 4008);
    xsi_vlogvar_assign_value(t16, t6, 0, 0, 32);
    xsi_set_current_line(123, ng0);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    t2 = (t0 + 3688);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);
    goto LAB29;

LAB32:    xsi_set_current_line(71, ng0);

LAB43:    xsi_set_current_line(73, ng0);
    t19 = (t0 + 2008U);
    t21 = *((char **)t19);
    t19 = (t0 + 3688);
    xsi_vlogvar_assign_value(t19, t21, 0, 0, 32);
    goto LAB42;

LAB34:    xsi_set_current_line(75, ng0);

LAB44:    xsi_set_current_line(77, ng0);
    t3 = (t0 + 4008);
    t7 = (t3 + 56U);
    t14 = *((char **)t7);
    memset(t22, 0, 8);
    t16 = (t22 + 4);
    t18 = (t14 + 4);
    t8 = *((unsigned int *)t14);
    t9 = (t8 >> 1);
    *((unsigned int *)t22) = t9;
    t10 = *((unsigned int *)t18);
    t11 = (t10 >> 1);
    *((unsigned int *)t16) = t11;
    t12 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t12 & 2147483647U);
    t13 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t13 & 2147483647U);
    memset(t6, 0, 8);
    t19 = (t6 + 4);
    t21 = (t22 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    *((unsigned int *)t6) = t24;
    *((unsigned int *)t19) = 0;
    if (*((unsigned int *)t21) != 0)
        goto LAB46;

LAB45:    t29 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t29 & 2147483647U);
    t30 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t30 & 2147483647U);
    t31 = (t0 + 4008);
    t35 = (t0 + 4008);
    t36 = (t35 + 72U);
    t37 = *((char **)t36);
    t38 = ((char*)((ng5)));
    t39 = ((char*)((ng6)));
    xsi_vlog_convert_partindices(t32, t33, t34, ((int*)(t37)), 2, t38, 32, 1, t39, 32, 1);
    t40 = (t32 + 4);
    t41 = *((unsigned int *)t40);
    t20 = (!(t41));
    t42 = (t33 + 4);
    t43 = *((unsigned int *)t42);
    t44 = (!(t43));
    t45 = (t20 && t44);
    t46 = (t34 + 4);
    t47 = *((unsigned int *)t46);
    t48 = (!(t47));
    t49 = (t45 && t48);
    if (t49 == 1)
        goto LAB47;

LAB48:    xsi_set_current_line(78, ng0);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    t2 = (t0 + 3688);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);
    goto LAB42;

LAB36:    xsi_set_current_line(80, ng0);

LAB49:    xsi_set_current_line(82, ng0);
    t3 = (t0 + 3848);
    t7 = (t3 + 56U);
    t14 = *((char **)t7);
    t16 = (t0 + 4008);
    t18 = (t16 + 56U);
    t19 = *((char **)t18);
    t8 = *((unsigned int *)t14);
    t9 = *((unsigned int *)t19);
    t10 = (t8 | t9);
    *((unsigned int *)t22) = t10;
    t21 = (t14 + 4);
    t31 = (t19 + 4);
    t35 = (t22 + 4);
    t11 = *((unsigned int *)t21);
    t12 = *((unsigned int *)t31);
    t13 = (t11 | t12);
    *((unsigned int *)t35) = t13;
    t23 = *((unsigned int *)t35);
    t24 = (t23 != 0);
    if (t24 == 1)
        goto LAB50;

LAB51:
LAB52:    memset(t6, 0, 8);
    t38 = (t6 + 4);
    t39 = (t22 + 4);
    t56 = *((unsigned int *)t22);
    t57 = (~(t56));
    *((unsigned int *)t6) = t57;
    *((unsigned int *)t38) = 0;
    if (*((unsigned int *)t39) != 0)
        goto LAB54;

LAB53:    t62 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t62 & 4294967295U);
    t63 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t63 & 4294967295U);
    t40 = (t0 + 3688);
    xsi_vlogvar_assign_value(t40, t6, 0, 0, 32);
    goto LAB42;

LAB38:    xsi_set_current_line(84, ng0);

LAB55:    xsi_set_current_line(86, ng0);
    t3 = (t0 + 3848);
    t7 = (t3 + 56U);
    t14 = *((char **)t7);
    t16 = (t0 + 3368);
    t18 = (t16 + 56U);
    t19 = *((char **)t18);
    memset(t6, 0, 8);
    xsi_vlog_unsigned_lshift(t6, 32, t14, 32, t19, 5);
    t21 = (t0 + 3688);
    xsi_vlogvar_assign_value(t21, t6, 0, 0, 32);
    goto LAB42;

LAB40:    xsi_set_current_line(88, ng0);

LAB56:    xsi_set_current_line(90, ng0);
    t3 = (t0 + 3848);
    t7 = (t3 + 56U);
    t14 = *((char **)t7);
    t16 = (t0 + 3368);
    t18 = (t16 + 56U);
    t19 = *((char **)t18);
    memset(t6, 0, 8);
    xsi_vlog_unsigned_rshift(t6, 32, t14, 32, t19, 5);
    t21 = (t0 + 3688);
    xsi_vlogvar_assign_value(t21, t6, 0, 0, 32);
    goto LAB42;

LAB46:    t25 = *((unsigned int *)t6);
    t26 = *((unsigned int *)t21);
    *((unsigned int *)t6) = (t25 | t26);
    t27 = *((unsigned int *)t19);
    t28 = *((unsigned int *)t21);
    *((unsigned int *)t19) = (t27 | t28);
    goto LAB45;

LAB47:    t50 = *((unsigned int *)t34);
    t51 = (t50 + 0);
    t52 = *((unsigned int *)t32);
    t53 = *((unsigned int *)t33);
    t54 = (t52 - t53);
    t55 = (t54 + 1);
    xsi_vlogvar_assign_value(t31, t6, t51, *((unsigned int *)t33), t55);
    goto LAB48;

LAB50:    t25 = *((unsigned int *)t22);
    t26 = *((unsigned int *)t35);
    *((unsigned int *)t22) = (t25 | t26);
    t36 = (t14 + 4);
    t37 = (t19 + 4);
    t27 = *((unsigned int *)t36);
    t28 = (~(t27));
    t29 = *((unsigned int *)t14);
    t20 = (t29 & t28);
    t30 = *((unsigned int *)t37);
    t41 = (~(t30));
    t43 = *((unsigned int *)t19);
    t44 = (t43 & t41);
    t47 = (~(t20));
    t50 = (~(t44));
    t52 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t52 & t47);
    t53 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t53 & t50);
    goto LAB52;

LAB54:    t58 = *((unsigned int *)t6);
    t59 = *((unsigned int *)t39);
    *((unsigned int *)t6) = (t58 | t59);
    t60 = *((unsigned int *)t38);
    t61 = *((unsigned int *)t39);
    *((unsigned int *)t38) = (t60 | t61);
    goto LAB53;

LAB59:    t25 = *((unsigned int *)t6);
    t26 = *((unsigned int *)t35);
    *((unsigned int *)t6) = (t25 | t26);
    t36 = (t14 + 4);
    t37 = (t19 + 4);
    t27 = *((unsigned int *)t14);
    t28 = (~(t27));
    t29 = *((unsigned int *)t36);
    t30 = (~(t29));
    t41 = *((unsigned int *)t19);
    t43 = (~(t41));
    t47 = *((unsigned int *)t37);
    t50 = (~(t47));
    t20 = (t28 & t30);
    t44 = (t43 & t50);
    t52 = (~(t20));
    t53 = (~(t44));
    t56 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t56 & t52);
    t57 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t57 & t53);
    t58 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t58 & t52);
    t59 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t59 & t53);
    goto LAB61;

LAB66:    t36 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t36) = 1;
    goto LAB67;

LAB68:    xsi_set_current_line(111, ng0);
    t38 = (t0 + 3848);
    t39 = (t38 + 56U);
    t40 = *((char **)t39);
    t42 = (t0 + 4008);
    t46 = (t42 + 56U);
    t64 = *((char **)t46);
    memset(t33, 0, 8);
    xsi_vlog_unsigned_minus(t33, 32, t40, 32, t64, 32);
    memset(t32, 0, 8);
    t65 = (t32 + 4);
    t66 = (t33 + 4);
    t50 = *((unsigned int *)t33);
    t52 = (~(t50));
    *((unsigned int *)t32) = t52;
    *((unsigned int *)t65) = 0;
    if (*((unsigned int *)t66) != 0)
        goto LAB72;

LAB71:    t59 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t59 & 4294967295U);
    t60 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t60 & 4294967295U);
    t67 = (t0 + 3688);
    xsi_vlogvar_assign_value(t67, t32, 0, 0, 32);
    goto LAB70;

LAB72:    t53 = *((unsigned int *)t32);
    t56 = *((unsigned int *)t66);
    *((unsigned int *)t32) = (t53 | t56);
    t57 = *((unsigned int *)t65);
    t58 = *((unsigned int *)t66);
    *((unsigned int *)t65) = (t57 | t58);
    goto LAB71;

LAB76:    xsi_set_current_line(129, ng0);

LAB81:    xsi_set_current_line(130, ng0);
    t16 = ((char*)((ng6)));
    t18 = (t0 + 4488);
    xsi_vlogvar_assign_value(t18, t16, 0, 0, 1);
    goto LAB80;

}

static void Cont_139_1(char *t0)
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

LAB0:    t1 = (t0 + 5656U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(139, ng0);
    t2 = (t0 + 3688);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 6584);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 8);
    xsi_driver_vfirst_trans(t5, 0, 31);
    t10 = (t0 + 6488);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Cont_140_2(char *t0)
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
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 5904U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(140, ng0);
    t2 = (t0 + 4488);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 6648);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 0);
    t18 = (t0 + 6504);
    *((int *)t18) = 1;

LAB1:    return;
}

static void implSig1_execute(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 6152U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng13)));
    t3 = (t0 + 6712);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t2, 8);
    xsi_driver_vfirst_trans(t3, 0, 31);

LAB1:    return;
}


extern void work_m_00000000003176072159_3732482671_init()
{
	static char *pe[] = {(void *)Always_47_0,(void *)Cont_139_1,(void *)Cont_140_2,(void *)implSig1_execute};
	xsi_register_didat("work_m_00000000003176072159_3732482671", "isim/z_ALU_tb_isim_beh.exe.sim/work/m_00000000003176072159_3732482671.didat");
	xsi_register_executes(pe);
}
