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

/* This file is designed for use with ISim build 0x8ddf5b5d */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/student1/npirathe/Desktop/coe758_pong_final.2/ball.vhd";
extern char *IEEE_P_2592010699;
extern char *WORK_P_3647430093;

unsigned char ieee_p_2592010699_sub_2763492388968962707_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_3548470891_3212880686_p_0(char *t0)
{
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    unsigned char t8;
    unsigned char t9;
    char *t10;
    int t11;
    int t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    int t17;
    int t18;
    int t19;
    int t20;
    int t21;
    int t22;
    int t23;
    int t24;
    int t25;
    char *t26;
    int t27;
    int t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    int t33;
    int t34;
    int t35;
    int t36;
    char *t37;
    char *t38;

LAB0:    xsi_set_current_line(30, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 4352);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(31, ng0);
    t3 = (t0 + 1192U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)3);
    if (t6 != 0)
        goto LAB5;

LAB7:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(33, ng0);
    t3 = (t0 + 2472U);
    t7 = *((char **)t3);
    t8 = *((unsigned char *)t7);
    t9 = (t8 == (unsigned char)2);
    if (t9 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(52, ng0);
    t1 = (t0 + 2152U);
    t3 = *((char **)t1);
    t11 = *((int *)t3);
    t12 = (t11 + 2);
    t1 = (t0 + 4448);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t10 = (t7 + 56U);
    t13 = *((char **)t10);
    *((int *)t13) = t12;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(54, ng0);
    t1 = (t0 + 2152U);
    t3 = *((char **)t1);
    t11 = *((int *)t3);
    t1 = ((WORK_P_3647430093) + 2968U);
    t4 = *((char **)t1);
    t12 = *((int *)t4);
    t17 = (t11 + t12);
    t1 = ((WORK_P_3647430093) + 1648U);
    t7 = *((char **)t1);
    t18 = *((int *)t7);
    t1 = ((WORK_P_3647430093) + 2848U);
    t10 = *((char **)t1);
    t19 = *((int *)t10);
    t20 = (t18 - t19);
    t1 = ((WORK_P_3647430093) + 3088U);
    t13 = *((char **)t1);
    t21 = *((int *)t13);
    t22 = (t20 - t21);
    t23 = (t22 - 20);
    t6 = (t17 >= t23);
    if (t6 == 1)
        goto LAB36;

LAB37:    t5 = (unsigned char)0;

LAB38:    if (t5 == 1)
        goto LAB33;

LAB34:    t2 = (unsigned char)0;

LAB35:    if (t2 != 0)
        goto LAB30;

LAB32:    t1 = (t0 + 2152U);
    t3 = *((char **)t1);
    t11 = *((int *)t3);
    t1 = ((WORK_P_3647430093) + 2968U);
    t4 = *((char **)t1);
    t12 = *((int *)t4);
    t17 = (t11 + t12);
    t1 = ((WORK_P_3647430093) + 1648U);
    t7 = *((char **)t1);
    t18 = *((int *)t7);
    t1 = ((WORK_P_3647430093) + 2848U);
    t10 = *((char **)t1);
    t19 = *((int *)t10);
    t20 = (t18 - t19);
    t21 = (t20 - 20);
    t6 = (t17 >= t21);
    if (t6 == 1)
        goto LAB44;

LAB45:    t5 = (unsigned char)0;

LAB46:    if (t5 == 1)
        goto LAB41;

LAB42:    t2 = (unsigned char)0;

LAB43:    if (t2 != 0)
        goto LAB39;

LAB40:    t1 = (t0 + 2152U);
    t3 = *((char **)t1);
    t11 = *((int *)t3);
    t1 = ((WORK_P_3647430093) + 2968U);
    t4 = *((char **)t1);
    t12 = *((int *)t4);
    t17 = (t11 + t12);
    t1 = ((WORK_P_3647430093) + 1648U);
    t7 = *((char **)t1);
    t18 = *((int *)t7);
    t1 = ((WORK_P_3647430093) + 2848U);
    t10 = *((char **)t1);
    t19 = *((int *)t10);
    t20 = (t18 - t19);
    t21 = (t20 - 20);
    t2 = (t17 >= t21);
    if (t2 != 0)
        goto LAB47;

LAB48:
LAB31:
LAB9:    xsi_set_current_line(72, ng0);
    t1 = (t0 + 2632U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)2);
    if (t5 != 0)
        goto LAB49;

LAB51:    xsi_set_current_line(78, ng0);
    t1 = (t0 + 2312U);
    t3 = *((char **)t1);
    t11 = *((int *)t3);
    t12 = (t11 + 2);
    t1 = (t0 + 4576);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t10 = (t7 + 56U);
    t13 = *((char **)t10);
    *((int *)t13) = t12;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(79, ng0);
    t1 = (t0 + 2312U);
    t3 = *((char **)t1);
    t11 = *((int *)t3);
    t1 = ((WORK_P_3647430093) + 2968U);
    t4 = *((char **)t1);
    t12 = *((int *)t4);
    t17 = (t11 + t12);
    t1 = ((WORK_P_3647430093) + 2248U);
    t7 = *((char **)t1);
    t18 = *((int *)t7);
    t1 = ((WORK_P_3647430093) + 2848U);
    t10 = *((char **)t1);
    t19 = *((int *)t10);
    t20 = (t18 - t19);
    t21 = (t20 - 1);
    t22 = (t21 - 20);
    t2 = (t17 >= t22);
    if (t2 != 0)
        goto LAB55;

LAB57:
LAB56:
LAB50:    goto LAB6;

LAB8:    xsi_set_current_line(34, ng0);
    t3 = (t0 + 2152U);
    t10 = *((char **)t3);
    t11 = *((int *)t10);
    t12 = (t11 - 2);
    t3 = (t0 + 4448);
    t13 = (t3 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    *((int *)t16) = t12;
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(36, ng0);
    t1 = (t0 + 2152U);
    t3 = *((char **)t1);
    t11 = *((int *)t3);
    t1 = ((WORK_P_3647430093) + 2848U);
    t4 = *((char **)t1);
    t12 = *((int *)t4);
    t1 = ((WORK_P_3647430093) + 3088U);
    t7 = *((char **)t1);
    t17 = *((int *)t7);
    t18 = (t12 + t17);
    t19 = (t18 + 20);
    t6 = (t11 <= t19);
    if (t6 == 1)
        goto LAB17;

LAB18:    t5 = (unsigned char)0;

LAB19:    if (t5 == 1)
        goto LAB14;

LAB15:    t2 = (unsigned char)0;

LAB16:    if (t2 != 0)
        goto LAB11;

LAB13:    t1 = (t0 + 2152U);
    t3 = *((char **)t1);
    t11 = *((int *)t3);
    t1 = ((WORK_P_3647430093) + 2848U);
    t4 = *((char **)t1);
    t12 = *((int *)t4);
    t17 = (t12 + 20);
    t6 = (t11 <= t17);
    if (t6 == 1)
        goto LAB25;

LAB26:    t5 = (unsigned char)0;

LAB27:    if (t5 == 1)
        goto LAB22;

LAB23:    t2 = (unsigned char)0;

LAB24:    if (t2 != 0)
        goto LAB20;

LAB21:    t1 = (t0 + 2152U);
    t3 = *((char **)t1);
    t11 = *((int *)t3);
    t1 = ((WORK_P_3647430093) + 2848U);
    t4 = *((char **)t1);
    t12 = *((int *)t4);
    t17 = (t12 + 20);
    t2 = (t11 <= t17);
    if (t2 != 0)
        goto LAB28;

LAB29:
LAB12:    goto LAB9;

LAB11:    xsi_set_current_line(39, ng0);
    t1 = (t0 + 4512);
    t29 = (t1 + 56U);
    t30 = *((char **)t29);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    *((unsigned char *)t32) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB12;

LAB14:    t1 = (t0 + 2312U);
    t15 = *((char **)t1);
    t24 = *((int *)t15);
    t1 = (t0 + 1672U);
    t16 = *((char **)t1);
    t25 = *((int *)t16);
    t1 = ((WORK_P_3647430093) + 3208U);
    t26 = *((char **)t1);
    t27 = *((int *)t26);
    t28 = (t25 + t27);
    t9 = (t24 <= t28);
    t2 = t9;
    goto LAB16;

LAB17:    t1 = (t0 + 2312U);
    t10 = *((char **)t1);
    t20 = *((int *)t10);
    t1 = ((WORK_P_3647430093) + 2968U);
    t13 = *((char **)t1);
    t21 = *((int *)t13);
    t22 = (t20 + t21);
    t1 = (t0 + 1672U);
    t14 = *((char **)t1);
    t23 = *((int *)t14);
    t8 = (t22 >= t23);
    t5 = t8;
    goto LAB19;

LAB20:    xsi_set_current_line(43, ng0);
    t1 = (t0 + 4448);
    t13 = (t1 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    *((int *)t16) = 350;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(44, ng0);
    t1 = (t0 + 4576);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t10 = *((char **)t7);
    *((int *)t10) = 250;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(45, ng0);
    t1 = (t0 + 4512);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t10 = *((char **)t7);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(46, ng0);
    t1 = (t0 + 4640);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t10 = *((char **)t7);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB12;

LAB22:    t1 = (t0 + 2312U);
    t10 = *((char **)t1);
    t19 = *((int *)t10);
    t9 = (t19 < 350);
    t2 = t9;
    goto LAB24;

LAB25:    t1 = (t0 + 2312U);
    t7 = *((char **)t1);
    t18 = *((int *)t7);
    t8 = (t18 > 150);
    t5 = t8;
    goto LAB27;

LAB28:    xsi_set_current_line(49, ng0);
    t1 = (t0 + 4512);
    t7 = (t1 + 56U);
    t10 = *((char **)t7);
    t13 = (t10 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB12;

LAB30:    xsi_set_current_line(57, ng0);
    t1 = (t0 + 4512);
    t31 = (t1 + 56U);
    t32 = *((char **)t31);
    t37 = (t32 + 56U);
    t38 = *((char **)t37);
    *((unsigned char *)t38) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB31;

LAB33:    t1 = (t0 + 2312U);
    t26 = *((char **)t1);
    t33 = *((int *)t26);
    t1 = (t0 + 1832U);
    t29 = *((char **)t1);
    t34 = *((int *)t29);
    t1 = ((WORK_P_3647430093) + 3208U);
    t30 = *((char **)t1);
    t35 = *((int *)t30);
    t36 = (t34 + t35);
    t9 = (t33 <= t36);
    t2 = t9;
    goto LAB35;

LAB36:    t1 = (t0 + 2312U);
    t14 = *((char **)t1);
    t24 = *((int *)t14);
    t1 = ((WORK_P_3647430093) + 2968U);
    t15 = *((char **)t1);
    t25 = *((int *)t15);
    t27 = (t24 + t25);
    t1 = (t0 + 1832U);
    t16 = *((char **)t1);
    t28 = *((int *)t16);
    t8 = (t27 >= t28);
    t5 = t8;
    goto LAB38;

LAB39:    xsi_set_current_line(61, ng0);
    t1 = (t0 + 4448);
    t15 = (t1 + 56U);
    t16 = *((char **)t15);
    t26 = (t16 + 56U);
    t29 = *((char **)t26);
    *((int *)t29) = 350;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(62, ng0);
    t1 = (t0 + 4576);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t10 = *((char **)t7);
    *((int *)t10) = 250;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(63, ng0);
    t1 = (t0 + 4512);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t10 = *((char **)t7);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(64, ng0);
    t1 = (t0 + 4640);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t10 = *((char **)t7);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB31;

LAB41:    t1 = (t0 + 2312U);
    t14 = *((char **)t1);
    t23 = *((int *)t14);
    t9 = (t23 < 350);
    t2 = t9;
    goto LAB43;

LAB44:    t1 = (t0 + 2312U);
    t13 = *((char **)t1);
    t22 = *((int *)t13);
    t8 = (t22 > 150);
    t5 = t8;
    goto LAB46;

LAB47:    xsi_set_current_line(67, ng0);
    t1 = (t0 + 4512);
    t13 = (t1 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB31;

LAB49:    xsi_set_current_line(73, ng0);
    t1 = (t0 + 2312U);
    t4 = *((char **)t1);
    t11 = *((int *)t4);
    t12 = (t11 - 2);
    t1 = (t0 + 4576);
    t7 = (t1 + 56U);
    t10 = *((char **)t7);
    t13 = (t10 + 56U);
    t14 = *((char **)t13);
    *((int *)t14) = t12;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(74, ng0);
    t1 = (t0 + 2312U);
    t3 = *((char **)t1);
    t11 = *((int *)t3);
    t1 = ((WORK_P_3647430093) + 2848U);
    t4 = *((char **)t1);
    t12 = *((int *)t4);
    t17 = (t12 + 20);
    t2 = (t11 <= t17);
    if (t2 != 0)
        goto LAB52;

LAB54:
LAB53:    goto LAB50;

LAB52:    xsi_set_current_line(75, ng0);
    t1 = (t0 + 4640);
    t7 = (t1 + 56U);
    t10 = *((char **)t7);
    t13 = (t10 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB53;

LAB55:    xsi_set_current_line(80, ng0);
    t1 = (t0 + 4640);
    t13 = (t1 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB56;

}

static void work_a_3548470891_3212880686_p_1(char *t0)
{
    char *t1;
    unsigned char t2;
    unsigned char t3;
    unsigned char t4;
    unsigned char t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    int t10;
    unsigned char t11;
    char *t12;
    int t13;
    char *t14;
    int t15;
    char *t16;
    int t17;
    int t18;
    int t19;
    unsigned char t20;
    char *t21;
    int t22;
    char *t23;
    int t24;
    unsigned char t25;
    char *t26;
    int t27;
    char *t28;
    int t29;
    char *t30;
    int t31;
    int t32;
    int t33;
    unsigned char t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;

LAB0:    xsi_set_current_line(90, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 4368);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(91, ng0);
    t6 = (t0 + 1352U);
    t7 = *((char **)t6);
    t8 = *((int *)t7);
    t6 = (t0 + 2152U);
    t9 = *((char **)t6);
    t10 = *((int *)t9);
    t11 = (t8 >= t10);
    if (t11 == 1)
        goto LAB14;

LAB15:    t5 = (unsigned char)0;

LAB16:    if (t5 == 1)
        goto LAB11;

LAB12:    t4 = (unsigned char)0;

LAB13:    if (t4 == 1)
        goto LAB8;

LAB9:    t3 = (unsigned char)0;

LAB10:    if (t3 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(95, ng0);
    t1 = (t0 + 4704);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t9 = (t7 + 56U);
    t12 = *((char **)t9);
    *((unsigned char *)t12) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);

LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(93, ng0);
    t6 = (t0 + 4704);
    t35 = (t6 + 56U);
    t36 = *((char **)t35);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    *((unsigned char *)t38) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t6);
    goto LAB6;

LAB8:    t6 = (t0 + 1512U);
    t26 = *((char **)t6);
    t27 = *((int *)t26);
    t6 = (t0 + 2312U);
    t28 = *((char **)t6);
    t29 = *((int *)t28);
    t6 = ((WORK_P_3647430093) + 2968U);
    t30 = *((char **)t6);
    t31 = *((int *)t30);
    t32 = (t29 + t31);
    t33 = (t32 - 1);
    t34 = (t27 <= t33);
    t3 = t34;
    goto LAB10;

LAB11:    t6 = (t0 + 1512U);
    t21 = *((char **)t6);
    t22 = *((int *)t21);
    t6 = (t0 + 2312U);
    t23 = *((char **)t6);
    t24 = *((int *)t23);
    t25 = (t22 >= t24);
    t4 = t25;
    goto LAB13;

LAB14:    t6 = (t0 + 1352U);
    t12 = *((char **)t6);
    t13 = *((int *)t12);
    t6 = (t0 + 2152U);
    t14 = *((char **)t6);
    t15 = *((int *)t14);
    t6 = ((WORK_P_3647430093) + 2968U);
    t16 = *((char **)t6);
    t17 = *((int *)t16);
    t18 = (t15 + t17);
    t19 = (t18 - 1);
    t20 = (t13 <= t19);
    t5 = t20;
    goto LAB16;

}


extern void work_a_3548470891_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3548470891_3212880686_p_0,(void *)work_a_3548470891_3212880686_p_1};
	xsi_register_didat("work_a_3548470891_3212880686", "isim/top_level_isim_beh.exe.sim/work/a_3548470891_3212880686.didat");
	xsi_register_executes(pe);
}
