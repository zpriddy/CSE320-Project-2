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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000003063006621_4105522505_init();
    work_m_00000000000012873955_3300569647_init();
    work_m_00000000000476649146_3838173923_init();
    work_m_00000000001202312478_3156074076_init();
    work_m_00000000000967916094_2480565585_init();
    work_m_00000000003176072126_3732482671_init();
    work_m_00000000000108367790_0288573865_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000000108367790_0288573865");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
