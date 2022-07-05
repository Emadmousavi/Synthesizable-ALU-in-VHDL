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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
extern char *STD_STANDARD;



int work_p_3226639065_sub_2685358235_4066971143(char *t1, int t2)
{
    char t3[128];
    char t4[8];
    char t8[8];
    int t0;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    unsigned char t14;
    int t15;
    int t16;
    unsigned char t17;
    int t18;
    unsigned char t19;
    int t20;
    int t21;

LAB0:    t5 = (t3 + 4U);
    t6 = ((STD_STANDARD) + 832);
    t7 = (t5 + 88U);
    *((char **)t7) = t6;
    t9 = (t5 + 56U);
    *((char **)t9) = t8;
    xsi_type_set_default_value(t6, t8, 0);
    t10 = (t5 + 80U);
    *((unsigned int *)t10) = 4U;
    t11 = (t4 + 4U);
    *((int *)t11) = t2;
    t12 = (t5 + 56U);
    t13 = *((char **)t12);
    t12 = (t13 + 0);
    *((int *)t12) = 0;

LAB2:    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t15 = *((int *)t7);
    t16 = xsi_vhdl_pow(2, t15);
    t17 = (t16 < t2);
    if (t17 == 1)
        goto LAB6;

LAB7:    t14 = (unsigned char)0;

LAB8:    if (t14 != 0)
        goto LAB3;

LAB5:    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t15 = *((int *)t7);
    t0 = t15;

LAB1:    return t0;
LAB3:    t6 = (t5 + 56U);
    t10 = *((char **)t6);
    t20 = *((int *)t10);
    t21 = (t20 + 1);
    t6 = (t5 + 56U);
    t12 = *((char **)t6);
    t6 = (t12 + 0);
    *((int *)t6) = t21;
    goto LAB2;

LAB4:;
LAB6:    t6 = (t5 + 56U);
    t9 = *((char **)t6);
    t18 = *((int *)t9);
    t19 = (t18 < 31);
    t14 = t19;
    goto LAB8;

LAB9:;
}

int work_p_3226639065_sub_21687997_4066971143(char *t1, int t2)
{
    char t3[248];
    char t4[8];
    char t8[8];
    char t14[8];
    int t0;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    int t20;
    char *t21;
    int t22;
    int t23;
    unsigned char t24;
    char *t25;
    int t26;
    int t27;
    char *t28;

LAB0:    t5 = (t3 + 4U);
    t6 = ((STD_STANDARD) + 384);
    t7 = (t5 + 88U);
    *((char **)t7) = t6;
    t9 = (t5 + 56U);
    *((char **)t9) = t8;
    *((int *)t8) = 1;
    t10 = (t5 + 80U);
    *((unsigned int *)t10) = 4U;
    t11 = (t3 + 124U);
    t12 = ((STD_STANDARD) + 384);
    t13 = (t11 + 88U);
    *((char **)t13) = t12;
    t15 = (t11 + 56U);
    *((char **)t15) = t14;
    xsi_type_set_default_value(t12, t14, 0);
    t16 = (t11 + 80U);
    *((unsigned int *)t16) = 4U;
    t17 = (t4 + 4U);
    *((int *)t17) = t2;

LAB2:    t18 = (t5 + 56U);
    t19 = *((char **)t18);
    t20 = *((int *)t19);
    t18 = (t5 + 56U);
    t21 = *((char **)t18);
    t22 = *((int *)t21);
    t23 = (t20 * t22);
    t24 = (t23 <= t2);
    if (t24 != 0)
        goto LAB3;

LAB5:    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t20 = *((int *)t7);
    t22 = (t20 - 1);
    t6 = (t11 + 56U);
    t9 = *((char **)t6);
    t6 = (t9 + 0);
    *((int *)t6) = t22;
    t6 = (t11 + 56U);
    t7 = *((char **)t6);
    t20 = *((int *)t7);
    t0 = t20;

LAB1:    return t0;
LAB3:    t18 = (t5 + 56U);
    t25 = *((char **)t18);
    t26 = *((int *)t25);
    t27 = (t26 + 1);
    t18 = (t5 + 56U);
    t28 = *((char **)t18);
    t18 = (t28 + 0);
    *((int *)t18) = t27;
    goto LAB2;

LAB4:;
LAB6:;
}

int work_p_3226639065_sub_690741738_4066971143(char *t1, int t2, int t3)
{
    char t4[248];
    char t5[16];
    char t9[8];
    char t15[8];
    int t0;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    int t22;
    unsigned char t23;
    char *t24;
    int t25;
    int t26;
    char *t27;

LAB0:    t6 = (t4 + 4U);
    t7 = ((STD_STANDARD) + 384);
    t8 = (t6 + 88U);
    *((char **)t8) = t7;
    t10 = (t6 + 56U);
    *((char **)t10) = t9;
    *((int *)t9) = 1;
    t11 = (t6 + 80U);
    *((unsigned int *)t11) = 4U;
    t12 = (t4 + 124U);
    t13 = ((STD_STANDARD) + 384);
    t14 = (t12 + 88U);
    *((char **)t14) = t13;
    t16 = (t12 + 56U);
    *((char **)t16) = t15;
    *((int *)t15) = t2;
    t17 = (t12 + 80U);
    *((unsigned int *)t17) = 4U;
    t18 = (t5 + 4U);
    *((int *)t18) = t2;
    t19 = (t5 + 8U);
    *((int *)t19) = t3;

LAB2:    t20 = (t6 + 56U);
    t21 = *((char **)t20);
    t22 = *((int *)t21);
    t23 = (t22 < t3);
    if (t23 != 0)
        goto LAB3;

LAB5:    t7 = (t12 + 56U);
    t8 = *((char **)t7);
    t22 = *((int *)t8);
    t0 = t22;

LAB1:    return t0;
LAB3:    t20 = (t12 + 56U);
    t24 = *((char **)t20);
    t25 = *((int *)t24);
    t26 = (t2 * t25);
    t20 = (t12 + 56U);
    t27 = *((char **)t20);
    t20 = (t27 + 0);
    *((int *)t20) = t26;
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t22 = *((int *)t8);
    t25 = (t22 + 1);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    t7 = (t10 + 0);
    *((int *)t7) = t25;
    goto LAB2;

LAB4:;
LAB6:;
}

int work_p_3226639065_sub_1200936955_4066971143(char *t1, int t2, int t3)
{
    char t4[248];
    char t5[16];
    char t9[8];
    char t15[8];
    int t0;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    int t22;
    unsigned char t23;
    char *t24;
    int t25;
    int t26;
    char *t27;

LAB0:    t6 = (t4 + 4U);
    t7 = ((STD_STANDARD) + 384);
    t8 = (t6 + 88U);
    *((char **)t8) = t7;
    t10 = (t6 + 56U);
    *((char **)t10) = t9;
    *((int *)t9) = 0;
    t11 = (t6 + 80U);
    *((unsigned int *)t11) = 4U;
    t12 = (t4 + 124U);
    t13 = ((STD_STANDARD) + 384);
    t14 = (t12 + 88U);
    *((char **)t14) = t13;
    t16 = (t12 + 56U);
    *((char **)t16) = t15;
    *((int *)t15) = 0;
    t17 = (t12 + 80U);
    *((unsigned int *)t17) = 4U;
    t18 = (t5 + 4U);
    *((int *)t18) = t2;
    t19 = (t5 + 8U);
    *((int *)t19) = t3;

LAB2:    t20 = (t12 + 56U);
    t21 = *((char **)t20);
    t22 = *((int *)t21);
    t23 = (t22 < t2);
    if (t23 != 0)
        goto LAB3;

LAB5:    t7 = (t12 + 56U);
    t8 = *((char **)t7);
    t22 = *((int *)t8);
    t23 = (t22 > t2);
    if (t23 != 0)
        goto LAB6;

LAB8:
LAB7:    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t22 = *((int *)t8);
    t0 = t22;

LAB1:    return t0;
LAB3:    t20 = (t12 + 56U);
    t24 = *((char **)t20);
    t25 = *((int *)t24);
    t26 = (t25 + t3);
    t20 = (t12 + 56U);
    t27 = *((char **)t20);
    t20 = (t27 + 0);
    *((int *)t20) = t26;
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t22 = *((int *)t8);
    t25 = (t22 + 1);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    t7 = (t10 + 0);
    *((int *)t7) = t25;
    goto LAB2;

LAB4:;
LAB6:    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    t25 = *((int *)t10);
    t26 = (t25 - 1);
    t7 = (t6 + 56U);
    t11 = *((char **)t7);
    t7 = (t11 + 0);
    *((int *)t7) = t26;
    goto LAB7;

LAB9:;
}

void work_p_3226639065_sub_1384457489_4066971143(char *t0, char *t1, int t2, int t3, char *t4, char *t5)
{
    char t7[40];
    char t8[16];
    char *t9;
    char *t10;
    int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    unsigned char t15;
    char *t16;
    char *t17;
    char *t18;
    int t20;
    char *t21;
    int t23;
    char *t24;
    int t26;
    char *t27;
    int t29;
    char *t30;
    int t32;
    char *t33;
    int t35;
    char *t36;
    int t38;
    int t39;
    char *t40;

LAB0:    t9 = (t8 + 0U);
    t10 = (t9 + 0U);
    *((int *)t10) = 2;
    t10 = (t9 + 4U);
    *((int *)t10) = 0;
    t10 = (t9 + 8U);
    *((int *)t10) = -1;
    t11 = (0 - 2);
    t12 = (t11 * -1);
    t12 = (t12 + 1);
    t10 = (t9 + 12U);
    *((unsigned int *)t10) = t12;
    t10 = (t7 + 4U);
    *((int *)t10) = t2;
    t13 = (t7 + 8U);
    *((int *)t13) = t3;
    t14 = (t7 + 12U);
    t15 = (t4 != 0);
    if (t15 == 1)
        goto LAB3;

LAB2:    t16 = (t7 + 20U);
    *((char **)t16) = t8;
    t17 = (t7 + 28U);
    *((char **)t17) = t5;
    t18 = (t0 + 3440);
    t20 = xsi_mem_cmp(t18, t4, 3U);
    if (t20 == 1)
        goto LAB5;

LAB13:    t21 = (t0 + 3443);
    t23 = xsi_mem_cmp(t21, t4, 3U);
    if (t23 == 1)
        goto LAB6;

LAB14:    t24 = (t0 + 3446);
    t26 = xsi_mem_cmp(t24, t4, 3U);
    if (t26 == 1)
        goto LAB7;

LAB15:    t27 = (t0 + 3449);
    t29 = xsi_mem_cmp(t27, t4, 3U);
    if (t29 == 1)
        goto LAB8;

LAB16:    t30 = (t0 + 3452);
    t32 = xsi_mem_cmp(t30, t4, 3U);
    if (t32 == 1)
        goto LAB9;

LAB17:    t33 = (t0 + 3455);
    t35 = xsi_mem_cmp(t33, t4, 3U);
    if (t35 == 1)
        goto LAB10;

LAB18:    t36 = (t0 + 3458);
    t38 = xsi_mem_cmp(t36, t4, 3U);
    if (t38 == 1)
        goto LAB11;

LAB19:
LAB12:    t11 = (t2 + t3);
    t9 = (t5 + 0);
    *((int *)t9) = t11;

LAB4:
LAB1:    return;
LAB3:    *((char **)t14) = t4;
    goto LAB2;

LAB5:    t39 = (t2 + t3);
    t40 = (t5 + 0);
    *((int *)t40) = t39;
    goto LAB4;

LAB6:    t11 = (t2 - t3);
    t9 = (t5 + 0);
    *((int *)t9) = t11;
    goto LAB4;

LAB7:    t11 = (t2 * t3);
    t9 = (t5 + 0);
    *((int *)t9) = t11;
    goto LAB4;

LAB8:    t11 = work_p_3226639065_sub_1200936955_4066971143(t0, t2, t3);
    t9 = (t5 + 0);
    *((int *)t9) = t11;
    goto LAB4;

LAB9:    t11 = work_p_3226639065_sub_690741738_4066971143(t0, t2, t3);
    t9 = (t5 + 0);
    *((int *)t9) = t11;
    goto LAB4;

LAB10:    t11 = work_p_3226639065_sub_2685358235_4066971143(t0, t2);
    t9 = (t5 + 0);
    *((int *)t9) = t11;
    goto LAB4;

LAB11:    t11 = work_p_3226639065_sub_21687997_4066971143(t0, t2);
    t9 = (t5 + 0);
    *((int *)t9) = t11;
    goto LAB4;

LAB20:;
}


extern void work_p_3226639065_init()
{
	static char *se[] = {(void *)work_p_3226639065_sub_2685358235_4066971143,(void *)work_p_3226639065_sub_21687997_4066971143,(void *)work_p_3226639065_sub_690741738_4066971143,(void *)work_p_3226639065_sub_1200936955_4066971143,(void *)work_p_3226639065_sub_1384457489_4066971143};
	xsi_register_didat("work_p_3226639065", "isim/ALU_isim_beh.exe.sim/work/p_3226639065.didat");
	xsi_register_subprogram_executes(se);
}
