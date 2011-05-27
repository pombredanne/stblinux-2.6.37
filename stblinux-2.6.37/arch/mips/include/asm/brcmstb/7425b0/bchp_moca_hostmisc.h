/***************************************************************************
 *     Copyright (c) 1999-2011, Broadcom Corporation
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 *
 * Module Description:
 *                     DO NOT EDIT THIS FILE DIRECTLY
 *
 * This module was generated magically with RDB from a source description
 * file. You must edit the source file for changes to be made to this file.
 *
 *
 * Date:           Generated on         Mon Apr 11 12:05:10 2011
 *                 MD5 Checksum         8cf142ad25caa9f873c54e8bb2bb1755
 *
 * Compiled with:  RDB Utility          combo_header.pl
 *                 RDB Parser           3.0
 *                 unknown              unknown
 *                 Perl Interpreter     5.008008
 *                 Operating System     linux
 *
 * Revision History:
 *
 * $brcm_Log: /magnum/basemodules/chp/7425/rdb/b0/bchp_moca_hostmisc.h $
 * 
 * Hydra_Software_Devel/2   4/12/11 3:58p vanessah
 * SW7425-112: Update rdb files for 7425 B0.
 *
 ***************************************************************************/

#ifndef BCHP_MOCA_HOSTMISC_H__
#define BCHP_MOCA_HOSTMISC_H__

/***************************************************************************
 *MOCA_HOSTMISC - MOCA_HOSTMISC registers
 ***************************************************************************/
#define BCHP_MOCA_HOSTMISC_MISC_CTRL             0x00fffd00 /* Moca Software Reset */
#define BCHP_MOCA_HOSTMISC_SCRATCH               0x00fffd04 /* Moca Scratch Register */
#define BCHP_MOCA_HOSTMISC_VERSION               0x00fffd08 /* MoCA version register */
#define BCHP_MOCA_HOSTMISC_H2M_INT_TRIG          0x00fffd0c /* Host-to-MoCA Interrupt Trigger */
#define BCHP_MOCA_HOSTMISC_WAKEUP                0x00fffd10 /* Host-to-MoCA Wakeup Interrupt */
#define BCHP_MOCA_HOSTMISC_SUBSYS_CFG            0x00fffd14 /* Moca Subsystem configuration */
#define BCHP_MOCA_HOSTMISC_H2M_MMP_OUTBOX_0      0x00fffd18 /* MoCA to Host MMP outbox registes , register set index 0. */
#define BCHP_MOCA_HOSTMISC_H2M_MMP_OUTBOX_1      0x00fffd1c /* MoCA to Host MMP outbox registes , register set index 1. */
#define BCHP_MOCA_HOSTMISC_H2M_MMP_OUTBOX_2      0x00fffd20 /* MoCA to Host MMP outbox registes , register set index 2. */
#define BCHP_MOCA_HOSTMISC_H2M_MMP_OUTBOX_3      0x00fffd24 /* MoCA to Host MMP outbox registes , register set index 3. */
#define BCHP_MOCA_HOSTMISC_H2M_MMP_OUTBOX_4      0x00fffd28 /* MoCA to Host MMP outbox registes , register set index 4. */
#define BCHP_MOCA_HOSTMISC_H2M_MMP_OUTBOX_5      0x00fffd2c /* MoCA to Host MMP outbox registes , register set index 5. */
#define BCHP_MOCA_HOSTMISC_H2M_MMP_OUTBOX_6      0x00fffd30 /* MoCA to Host MMP outbox registes , register set index 6. */
#define BCHP_MOCA_HOSTMISC_H2M_MMP_OUTBOX_7      0x00fffd34 /* MoCA to Host MMP outbox registes , register set index 7. */
#define BCHP_MOCA_HOSTMISC_H2M_MMP_OUTBOX_8      0x00fffd38 /* MoCA to Host MMP outbox registes , register set index 8. */
#define BCHP_MOCA_HOSTMISC_H2M_MMP_OUTBOX_9      0x00fffd3c /* MoCA to Host MMP outbox registes , register set index 9. */
#define BCHP_MOCA_HOSTMISC_H2M_MMP_OUTBOX_10     0x00fffd40 /* MoCA to Host MMP outbox registes , register set index 10. */
#define BCHP_MOCA_HOSTMISC_H2M_MMP_OUTBOX_11     0x00fffd44 /* MoCA to Host MMP outbox registes , register set index 11. */
#define BCHP_MOCA_HOSTMISC_H2M_MMP_OUTBOX_12     0x00fffd48 /* MoCA to Host MMP outbox registes , register set index 12. */
#define BCHP_MOCA_HOSTMISC_H2M_MMP_OUTBOX_13     0x00fffd4c /* MoCA to Host MMP outbox registes , register set index 13. */
#define BCHP_MOCA_HOSTMISC_H2M_MMP_OUTBOX_14     0x00fffd50 /* MoCA to Host MMP outbox registes , register set index 14. */
#define BCHP_MOCA_HOSTMISC_H2M_MMP_OUTBOX_15     0x00fffd54 /* MoCA to Host MMP outbox registes , register set index 15. */
#define BCHP_MOCA_HOSTMISC_M2H_MMP_INBOX_0       0x00fffd58 /* Host to MoCA MMP inbox registers , register set index 0. */
#define BCHP_MOCA_HOSTMISC_M2H_MMP_INBOX_1       0x00fffd5c /* Host to MoCA MMP inbox registers , register set index 1. */
#define BCHP_MOCA_HOSTMISC_M2H_MMP_INBOX_2       0x00fffd60 /* Host to MoCA MMP inbox registers , register set index 2. */
#define BCHP_MOCA_HOSTMISC_M2H_MMP_INBOX_3       0x00fffd64 /* Host to MoCA MMP inbox registers , register set index 3. */
#define BCHP_MOCA_HOSTMISC_M2H_MMP_INBOX_4       0x00fffd68 /* Host to MoCA MMP inbox registers , register set index 4. */
#define BCHP_MOCA_HOSTMISC_M2H_MMP_INBOX_5       0x00fffd6c /* Host to MoCA MMP inbox registers , register set index 5. */
#define BCHP_MOCA_HOSTMISC_M2H_MMP_INBOX_6       0x00fffd70 /* Host to MoCA MMP inbox registers , register set index 6. */
#define BCHP_MOCA_HOSTMISC_M2H_MMP_INBOX_7       0x00fffd74 /* Host to MoCA MMP inbox registers , register set index 7. */
#define BCHP_MOCA_HOSTMISC_M2H_MMP_INBOX_8       0x00fffd78 /* Host to MoCA MMP inbox registers , register set index 8. */
#define BCHP_MOCA_HOSTMISC_M2H_MMP_INBOX_9       0x00fffd7c /* Host to MoCA MMP inbox registers , register set index 9. */
#define BCHP_MOCA_HOSTMISC_M2H_MMP_INBOX_10      0x00fffd80 /* Host to MoCA MMP inbox registers , register set index 10. */
#define BCHP_MOCA_HOSTMISC_M2H_MMP_INBOX_11      0x00fffd84 /* Host to MoCA MMP inbox registers , register set index 11. */
#define BCHP_MOCA_HOSTMISC_M2H_MMP_INBOX_12      0x00fffd88 /* Host to MoCA MMP inbox registers , register set index 12. */
#define BCHP_MOCA_HOSTMISC_M2H_MMP_INBOX_13      0x00fffd8c /* Host to MoCA MMP inbox registers , register set index 13. */
#define BCHP_MOCA_HOSTMISC_M2H_MMP_INBOX_14      0x00fffd90 /* Host to MoCA MMP inbox registers , register set index 14. */
#define BCHP_MOCA_HOSTMISC_M2H_MMP_INBOX_15      0x00fffd94 /* Host to MoCA MMP inbox registers , register set index 15. */

/***************************************************************************
 *MISC_CTRL - Moca Software Reset
 ***************************************************************************/
/* MOCA_HOSTMISC :: MISC_CTRL :: spare_ctrl [31:15] */
#define BCHP_MOCA_HOSTMISC_MISC_CTRL_spare_ctrl_MASK               0xffff8000
#define BCHP_MOCA_HOSTMISC_MISC_CTRL_spare_ctrl_SHIFT              15
#define BCHP_MOCA_HOSTMISC_MISC_CTRL_spare_ctrl_DEFAULT            131071

/* MOCA_HOSTMISC :: MISC_CTRL :: spare_status [14:10] */
#define BCHP_MOCA_HOSTMISC_MISC_CTRL_spare_status_MASK             0x00007c00
#define BCHP_MOCA_HOSTMISC_MISC_CTRL_spare_status_SHIFT            10
#define BCHP_MOCA_HOSTMISC_MISC_CTRL_spare_status_DEFAULT          31

/* MOCA_HOSTMISC :: MISC_CTRL :: spare_reset2 [09:08] */
#define BCHP_MOCA_HOSTMISC_MISC_CTRL_spare_reset2_MASK             0x00000300
#define BCHP_MOCA_HOSTMISC_MISC_CTRL_spare_reset2_SHIFT            8
#define BCHP_MOCA_HOSTMISC_MISC_CTRL_spare_reset2_DEFAULT          3

/* MOCA_HOSTMISC :: MISC_CTRL :: moca_disable_clocks [07:07] */
#define BCHP_MOCA_HOSTMISC_MISC_CTRL_moca_disable_clocks_MASK      0x00000080
#define BCHP_MOCA_HOSTMISC_MISC_CTRL_moca_disable_clocks_SHIFT     7
#define BCHP_MOCA_HOSTMISC_MISC_CTRL_moca_disable_clocks_DEFAULT   0

/* MOCA_HOSTMISC :: MISC_CTRL :: spare_reset [06:04] */
#define BCHP_MOCA_HOSTMISC_MISC_CTRL_spare_reset_MASK              0x00000070
#define BCHP_MOCA_HOSTMISC_MISC_CTRL_spare_reset_SHIFT             4
#define BCHP_MOCA_HOSTMISC_MISC_CTRL_spare_reset_DEFAULT           7

/* MOCA_HOSTMISC :: MISC_CTRL :: moca_gmii_sw_init [03:03] */
#define BCHP_MOCA_HOSTMISC_MISC_CTRL_moca_gmii_sw_init_MASK        0x00000008
#define BCHP_MOCA_HOSTMISC_MISC_CTRL_moca_gmii_sw_init_SHIFT       3
#define BCHP_MOCA_HOSTMISC_MISC_CTRL_moca_gmii_sw_init_DEFAULT     0

/* MOCA_HOSTMISC :: MISC_CTRL :: moca_cpu_l_reset [02:02] */
#define BCHP_MOCA_HOSTMISC_MISC_CTRL_moca_cpu_l_reset_MASK         0x00000004
#define BCHP_MOCA_HOSTMISC_MISC_CTRL_moca_cpu_l_reset_SHIFT        2
#define BCHP_MOCA_HOSTMISC_MISC_CTRL_moca_cpu_l_reset_DEFAULT      1

/* MOCA_HOSTMISC :: MISC_CTRL :: moca_sys_reset [01:01] */
#define BCHP_MOCA_HOSTMISC_MISC_CTRL_moca_sys_reset_MASK           0x00000002
#define BCHP_MOCA_HOSTMISC_MISC_CTRL_moca_sys_reset_SHIFT          1
#define BCHP_MOCA_HOSTMISC_MISC_CTRL_moca_sys_reset_DEFAULT        1

/* MOCA_HOSTMISC :: MISC_CTRL :: moca_cpu_h_reset [00:00] */
#define BCHP_MOCA_HOSTMISC_MISC_CTRL_moca_cpu_h_reset_MASK         0x00000001
#define BCHP_MOCA_HOSTMISC_MISC_CTRL_moca_cpu_h_reset_SHIFT        0
#define BCHP_MOCA_HOSTMISC_MISC_CTRL_moca_cpu_h_reset_DEFAULT      1

/***************************************************************************
 *SCRATCH - Moca Scratch Register
 ***************************************************************************/
/* MOCA_HOSTMISC :: SCRATCH :: value [31:00] */
#define BCHP_MOCA_HOSTMISC_SCRATCH_value_MASK                      0xffffffff
#define BCHP_MOCA_HOSTMISC_SCRATCH_value_SHIFT                     0
#define BCHP_MOCA_HOSTMISC_SCRATCH_value_DEFAULT                   0

/***************************************************************************
 *VERSION - MoCA version register
 ***************************************************************************/
/* MOCA_HOSTMISC :: VERSION :: moca_id [31:16] */
#define BCHP_MOCA_HOSTMISC_VERSION_moca_id_MASK                    0xffff0000
#define BCHP_MOCA_HOSTMISC_VERSION_moca_id_SHIFT                   16
#define BCHP_MOCA_HOSTMISC_VERSION_moca_id_DEFAULT                 26146

/* MOCA_HOSTMISC :: VERSION :: moca_spec_ver [15:12] */
#define BCHP_MOCA_HOSTMISC_VERSION_moca_spec_ver_MASK              0x0000f000
#define BCHP_MOCA_HOSTMISC_VERSION_moca_spec_ver_SHIFT             12
#define BCHP_MOCA_HOSTMISC_VERSION_moca_spec_ver_DEFAULT           2

/* MOCA_HOSTMISC :: VERSION :: core_version [11:08] */
#define BCHP_MOCA_HOSTMISC_VERSION_core_version_MASK               0x00000f00
#define BCHP_MOCA_HOSTMISC_VERSION_core_version_SHIFT              8
#define BCHP_MOCA_HOSTMISC_VERSION_core_version_DEFAULT            1

/* MOCA_HOSTMISC :: VERSION :: core_revision [07:04] */
#define BCHP_MOCA_HOSTMISC_VERSION_core_revision_MASK              0x000000f0
#define BCHP_MOCA_HOSTMISC_VERSION_core_revision_SHIFT             4
#define BCHP_MOCA_HOSTMISC_VERSION_core_revision_DEFAULT           1

/* MOCA_HOSTMISC :: VERSION :: core_mask [03:00] */
#define BCHP_MOCA_HOSTMISC_VERSION_core_mask_MASK                  0x0000000f
#define BCHP_MOCA_HOSTMISC_VERSION_core_mask_SHIFT                 0
#define BCHP_MOCA_HOSTMISC_VERSION_core_mask_DEFAULT               0

/***************************************************************************
 *H2M_INT_TRIG - Host-to-MoCA Interrupt Trigger
 ***************************************************************************/
/* MOCA_HOSTMISC :: H2M_INT_TRIG :: reserved0 [31:08] */
#define BCHP_MOCA_HOSTMISC_H2M_INT_TRIG_reserved0_MASK             0xffffff00
#define BCHP_MOCA_HOSTMISC_H2M_INT_TRIG_reserved0_SHIFT            8

/* MOCA_HOSTMISC :: H2M_INT_TRIG :: INT_TRIG [07:00] */
#define BCHP_MOCA_HOSTMISC_H2M_INT_TRIG_INT_TRIG_MASK              0x000000ff
#define BCHP_MOCA_HOSTMISC_H2M_INT_TRIG_INT_TRIG_SHIFT             0
#define BCHP_MOCA_HOSTMISC_H2M_INT_TRIG_INT_TRIG_DEFAULT           0

/***************************************************************************
 *WAKEUP - Host-to-MoCA Wakeup Interrupt
 ***************************************************************************/
/* MOCA_HOSTMISC :: WAKEUP :: reserved0 [31:02] */
#define BCHP_MOCA_HOSTMISC_WAKEUP_reserved0_MASK                   0xfffffffc
#define BCHP_MOCA_HOSTMISC_WAKEUP_reserved0_SHIFT                  2

/* MOCA_HOSTMISC :: WAKEUP :: cpu_l_wakeup_int [01:01] */
#define BCHP_MOCA_HOSTMISC_WAKEUP_cpu_l_wakeup_int_MASK            0x00000002
#define BCHP_MOCA_HOSTMISC_WAKEUP_cpu_l_wakeup_int_SHIFT           1
#define BCHP_MOCA_HOSTMISC_WAKEUP_cpu_l_wakeup_int_DEFAULT         0

/* MOCA_HOSTMISC :: WAKEUP :: cpu_h_wakeup_int [00:00] */
#define BCHP_MOCA_HOSTMISC_WAKEUP_cpu_h_wakeup_int_MASK            0x00000001
#define BCHP_MOCA_HOSTMISC_WAKEUP_cpu_h_wakeup_int_SHIFT           0
#define BCHP_MOCA_HOSTMISC_WAKEUP_cpu_h_wakeup_int_DEFAULT         0

/***************************************************************************
 *SUBSYS_CFG - Moca Subsystem configuration
 ***************************************************************************/
/* MOCA_HOSTMISC :: SUBSYS_CFG :: spare_cfg [31:10] */
#define BCHP_MOCA_HOSTMISC_SUBSYS_CFG_spare_cfg_MASK               0xfffffc00
#define BCHP_MOCA_HOSTMISC_SUBSYS_CFG_spare_cfg_SHIFT              10
#define BCHP_MOCA_HOSTMISC_SUBSYS_CFG_spare_cfg_DEFAULT            0

/* MOCA_HOSTMISC :: SUBSYS_CFG :: moca_ctl_mem_split_reg [09:07] */
#define BCHP_MOCA_HOSTMISC_SUBSYS_CFG_moca_ctl_mem_split_reg_MASK  0x00000380
#define BCHP_MOCA_HOSTMISC_SUBSYS_CFG_moca_ctl_mem_split_reg_SHIFT 7
#define BCHP_MOCA_HOSTMISC_SUBSYS_CFG_moca_ctl_mem_split_reg_DEFAULT 4

/* MOCA_HOSTMISC :: SUBSYS_CFG :: moca_cpu_dmem_split_reg [06:04] */
#define BCHP_MOCA_HOSTMISC_SUBSYS_CFG_moca_cpu_dmem_split_reg_MASK 0x00000070
#define BCHP_MOCA_HOSTMISC_SUBSYS_CFG_moca_cpu_dmem_split_reg_SHIFT 4
#define BCHP_MOCA_HOSTMISC_SUBSYS_CFG_moca_cpu_dmem_split_reg_DEFAULT 2

/* MOCA_HOSTMISC :: SUBSYS_CFG :: moca_cpu_imem_split_reg [03:01] */
#define BCHP_MOCA_HOSTMISC_SUBSYS_CFG_moca_cpu_imem_split_reg_MASK 0x0000000e
#define BCHP_MOCA_HOSTMISC_SUBSYS_CFG_moca_cpu_imem_split_reg_SHIFT 1
#define BCHP_MOCA_HOSTMISC_SUBSYS_CFG_moca_cpu_imem_split_reg_DEFAULT 2

/* MOCA_HOSTMISC :: SUBSYS_CFG :: moca_arb_rr_sel [00:00] */
#define BCHP_MOCA_HOSTMISC_SUBSYS_CFG_moca_arb_rr_sel_MASK         0x00000001
#define BCHP_MOCA_HOSTMISC_SUBSYS_CFG_moca_arb_rr_sel_SHIFT        0
#define BCHP_MOCA_HOSTMISC_SUBSYS_CFG_moca_arb_rr_sel_DEFAULT      1

/***************************************************************************
 *H2M_MMP_OUTBOX_0 - MoCA to Host MMP outbox registes , register set index 0.
 ***************************************************************************/
/* MOCA_HOSTMISC :: H2M_MMP_OUTBOX_0 :: m2h_mmp_outbox [31:00] */
#define BCHP_MOCA_HOSTMISC_H2M_MMP_OUTBOX_0_m2h_mmp_outbox_MASK    0xffffffff
#define BCHP_MOCA_HOSTMISC_H2M_MMP_OUTBOX_0_m2h_mmp_outbox_SHIFT   0
#define BCHP_MOCA_HOSTMISC_H2M_MMP_OUTBOX_0_m2h_mmp_outbox_DEFAULT 0

/***************************************************************************
 *H2M_MMP_OUTBOX_1 - MoCA to Host MMP outbox registes , register set index 1.
 ***************************************************************************/
/* MOCA_HOSTMISC :: H2M_MMP_OUTBOX_1 :: m2h_mmp_outbox [31:00] */
#define BCHP_MOCA_HOSTMISC_H2M_MMP_OUTBOX_1_m2h_mmp_outbox_MASK    0xffffffff
#define BCHP_MOCA_HOSTMISC_H2M_MMP_OUTBOX_1_m2h_mmp_outbox_SHIFT   0
#define BCHP_MOCA_HOSTMISC_H2M_MMP_OUTBOX_1_m2h_mmp_outbox_DEFAULT 0

/***************************************************************************
 *H2M_MMP_OUTBOX_2 - MoCA to Host MMP outbox registes , register set index 2.
 ***************************************************************************/
/* MOCA_HOSTMISC :: H2M_MMP_OUTBOX_2 :: m2h_mmp_outbox [31:00] */
#define BCHP_MOCA_HOSTMISC_H2M_MMP_OUTBOX_2_m2h_mmp_outbox_MASK    0xffffffff
#define BCHP_MOCA_HOSTMISC_H2M_MMP_OUTBOX_2_m2h_mmp_outbox_SHIFT   0
#define BCHP_MOCA_HOSTMISC_H2M_MMP_OUTBOX_2_m2h_mmp_outbox_DEFAULT 0

/***************************************************************************
 *H2M_MMP_OUTBOX_3 - MoCA to Host MMP outbox registes , register set index 3.
 ***************************************************************************/
/* MOCA_HOSTMISC :: H2M_MMP_OUTBOX_3 :: m2h_mmp_outbox [31:00] */
#define BCHP_MOCA_HOSTMISC_H2M_MMP_OUTBOX_3_m2h_mmp_outbox_MASK    0xffffffff
#define BCHP_MOCA_HOSTMISC_H2M_MMP_OUTBOX_3_m2h_mmp_outbox_SHIFT   0
#define BCHP_MOCA_HOSTMISC_H2M_MMP_OUTBOX_3_m2h_mmp_outbox_DEFAULT 0

/***************************************************************************
 *H2M_MMP_OUTBOX_4 - MoCA to Host MMP outbox registes , register set index 4.
 ***************************************************************************/
/* MOCA_HOSTMISC :: H2M_MMP_OUTBOX_4 :: m2h_mmp_outbox [31:00] */
#define BCHP_MOCA_HOSTMISC_H2M_MMP_OUTBOX_4_m2h_mmp_outbox_MASK    0xffffffff
#define BCHP_MOCA_HOSTMISC_H2M_MMP_OUTBOX_4_m2h_mmp_outbox_SHIFT   0
#define BCHP_MOCA_HOSTMISC_H2M_MMP_OUTBOX_4_m2h_mmp_outbox_DEFAULT 0

/***************************************************************************
 *H2M_MMP_OUTBOX_5 - MoCA to Host MMP outbox registes , register set index 5.
 ***************************************************************************/
/* MOCA_HOSTMISC :: H2M_MMP_OUTBOX_5 :: m2h_mmp_outbox [31:00] */
#define BCHP_MOCA_HOSTMISC_H2M_MMP_OUTBOX_5_m2h_mmp_outbox_MASK    0xffffffff
#define BCHP_MOCA_HOSTMISC_H2M_MMP_OUTBOX_5_m2h_mmp_outbox_SHIFT   0
#define BCHP_MOCA_HOSTMISC_H2M_MMP_OUTBOX_5_m2h_mmp_outbox_DEFAULT 0

/***************************************************************************
 *H2M_MMP_OUTBOX_6 - MoCA to Host MMP outbox registes , register set index 6.
 ***************************************************************************/
/* MOCA_HOSTMISC :: H2M_MMP_OUTBOX_6 :: m2h_mmp_outbox [31:00] */
#define BCHP_MOCA_HOSTMISC_H2M_MMP_OUTBOX_6_m2h_mmp_outbox_MASK    0xffffffff
#define BCHP_MOCA_HOSTMISC_H2M_MMP_OUTBOX_6_m2h_mmp_outbox_SHIFT   0
#define BCHP_MOCA_HOSTMISC_H2M_MMP_OUTBOX_6_m2h_mmp_outbox_DEFAULT 0

/***************************************************************************
 *H2M_MMP_OUTBOX_7 - MoCA to Host MMP outbox registes , register set index 7.
 ***************************************************************************/
/* MOCA_HOSTMISC :: H2M_MMP_OUTBOX_7 :: m2h_mmp_outbox [31:00] */
#define BCHP_MOCA_HOSTMISC_H2M_MMP_OUTBOX_7_m2h_mmp_outbox_MASK    0xffffffff
#define BCHP_MOCA_HOSTMISC_H2M_MMP_OUTBOX_7_m2h_mmp_outbox_SHIFT   0
#define BCHP_MOCA_HOSTMISC_H2M_MMP_OUTBOX_7_m2h_mmp_outbox_DEFAULT 0

/***************************************************************************
 *H2M_MMP_OUTBOX_8 - MoCA to Host MMP outbox registes , register set index 8.
 ***************************************************************************/
/* MOCA_HOSTMISC :: H2M_MMP_OUTBOX_8 :: m2h_mmp_outbox [31:00] */
#define BCHP_MOCA_HOSTMISC_H2M_MMP_OUTBOX_8_m2h_mmp_outbox_MASK    0xffffffff
#define BCHP_MOCA_HOSTMISC_H2M_MMP_OUTBOX_8_m2h_mmp_outbox_SHIFT   0
#define BCHP_MOCA_HOSTMISC_H2M_MMP_OUTBOX_8_m2h_mmp_outbox_DEFAULT 0

/***************************************************************************
 *H2M_MMP_OUTBOX_9 - MoCA to Host MMP outbox registes , register set index 9.
 ***************************************************************************/
/* MOCA_HOSTMISC :: H2M_MMP_OUTBOX_9 :: m2h_mmp_outbox [31:00] */
#define BCHP_MOCA_HOSTMISC_H2M_MMP_OUTBOX_9_m2h_mmp_outbox_MASK    0xffffffff
#define BCHP_MOCA_HOSTMISC_H2M_MMP_OUTBOX_9_m2h_mmp_outbox_SHIFT   0
#define BCHP_MOCA_HOSTMISC_H2M_MMP_OUTBOX_9_m2h_mmp_outbox_DEFAULT 0

/***************************************************************************
 *H2M_MMP_OUTBOX_10 - MoCA to Host MMP outbox registes , register set index 10.
 ***************************************************************************/
/* MOCA_HOSTMISC :: H2M_MMP_OUTBOX_10 :: m2h_mmp_outbox [31:00] */
#define BCHP_MOCA_HOSTMISC_H2M_MMP_OUTBOX_10_m2h_mmp_outbox_MASK   0xffffffff
#define BCHP_MOCA_HOSTMISC_H2M_MMP_OUTBOX_10_m2h_mmp_outbox_SHIFT  0
#define BCHP_MOCA_HOSTMISC_H2M_MMP_OUTBOX_10_m2h_mmp_outbox_DEFAULT 0

/***************************************************************************
 *H2M_MMP_OUTBOX_11 - MoCA to Host MMP outbox registes , register set index 11.
 ***************************************************************************/
/* MOCA_HOSTMISC :: H2M_MMP_OUTBOX_11 :: m2h_mmp_outbox [31:00] */
#define BCHP_MOCA_HOSTMISC_H2M_MMP_OUTBOX_11_m2h_mmp_outbox_MASK   0xffffffff
#define BCHP_MOCA_HOSTMISC_H2M_MMP_OUTBOX_11_m2h_mmp_outbox_SHIFT  0
#define BCHP_MOCA_HOSTMISC_H2M_MMP_OUTBOX_11_m2h_mmp_outbox_DEFAULT 0

/***************************************************************************
 *H2M_MMP_OUTBOX_12 - MoCA to Host MMP outbox registes , register set index 12.
 ***************************************************************************/
/* MOCA_HOSTMISC :: H2M_MMP_OUTBOX_12 :: m2h_mmp_outbox [31:00] */
#define BCHP_MOCA_HOSTMISC_H2M_MMP_OUTBOX_12_m2h_mmp_outbox_MASK   0xffffffff
#define BCHP_MOCA_HOSTMISC_H2M_MMP_OUTBOX_12_m2h_mmp_outbox_SHIFT  0
#define BCHP_MOCA_HOSTMISC_H2M_MMP_OUTBOX_12_m2h_mmp_outbox_DEFAULT 0

/***************************************************************************
 *H2M_MMP_OUTBOX_13 - MoCA to Host MMP outbox registes , register set index 13.
 ***************************************************************************/
/* MOCA_HOSTMISC :: H2M_MMP_OUTBOX_13 :: m2h_mmp_outbox [31:00] */
#define BCHP_MOCA_HOSTMISC_H2M_MMP_OUTBOX_13_m2h_mmp_outbox_MASK   0xffffffff
#define BCHP_MOCA_HOSTMISC_H2M_MMP_OUTBOX_13_m2h_mmp_outbox_SHIFT  0
#define BCHP_MOCA_HOSTMISC_H2M_MMP_OUTBOX_13_m2h_mmp_outbox_DEFAULT 0

/***************************************************************************
 *H2M_MMP_OUTBOX_14 - MoCA to Host MMP outbox registes , register set index 14.
 ***************************************************************************/
/* MOCA_HOSTMISC :: H2M_MMP_OUTBOX_14 :: m2h_mmp_outbox [31:00] */
#define BCHP_MOCA_HOSTMISC_H2M_MMP_OUTBOX_14_m2h_mmp_outbox_MASK   0xffffffff
#define BCHP_MOCA_HOSTMISC_H2M_MMP_OUTBOX_14_m2h_mmp_outbox_SHIFT  0
#define BCHP_MOCA_HOSTMISC_H2M_MMP_OUTBOX_14_m2h_mmp_outbox_DEFAULT 0

/***************************************************************************
 *H2M_MMP_OUTBOX_15 - MoCA to Host MMP outbox registes , register set index 15.
 ***************************************************************************/
/* MOCA_HOSTMISC :: H2M_MMP_OUTBOX_15 :: m2h_mmp_outbox [31:00] */
#define BCHP_MOCA_HOSTMISC_H2M_MMP_OUTBOX_15_m2h_mmp_outbox_MASK   0xffffffff
#define BCHP_MOCA_HOSTMISC_H2M_MMP_OUTBOX_15_m2h_mmp_outbox_SHIFT  0
#define BCHP_MOCA_HOSTMISC_H2M_MMP_OUTBOX_15_m2h_mmp_outbox_DEFAULT 0

/***************************************************************************
 *M2H_MMP_INBOX_0 - Host to MoCA MMP inbox registers , register set index 0.
 ***************************************************************************/
/* MOCA_HOSTMISC :: M2H_MMP_INBOX_0 :: h2m_mmp_inbox [31:00] */
#define BCHP_MOCA_HOSTMISC_M2H_MMP_INBOX_0_h2m_mmp_inbox_MASK      0xffffffff
#define BCHP_MOCA_HOSTMISC_M2H_MMP_INBOX_0_h2m_mmp_inbox_SHIFT     0
#define BCHP_MOCA_HOSTMISC_M2H_MMP_INBOX_0_h2m_mmp_inbox_DEFAULT   0

/***************************************************************************
 *M2H_MMP_INBOX_1 - Host to MoCA MMP inbox registers , register set index 1.
 ***************************************************************************/
/* MOCA_HOSTMISC :: M2H_MMP_INBOX_1 :: h2m_mmp_inbox [31:00] */
#define BCHP_MOCA_HOSTMISC_M2H_MMP_INBOX_1_h2m_mmp_inbox_MASK      0xffffffff
#define BCHP_MOCA_HOSTMISC_M2H_MMP_INBOX_1_h2m_mmp_inbox_SHIFT     0
#define BCHP_MOCA_HOSTMISC_M2H_MMP_INBOX_1_h2m_mmp_inbox_DEFAULT   0

/***************************************************************************
 *M2H_MMP_INBOX_2 - Host to MoCA MMP inbox registers , register set index 2.
 ***************************************************************************/
/* MOCA_HOSTMISC :: M2H_MMP_INBOX_2 :: h2m_mmp_inbox [31:00] */
#define BCHP_MOCA_HOSTMISC_M2H_MMP_INBOX_2_h2m_mmp_inbox_MASK      0xffffffff
#define BCHP_MOCA_HOSTMISC_M2H_MMP_INBOX_2_h2m_mmp_inbox_SHIFT     0
#define BCHP_MOCA_HOSTMISC_M2H_MMP_INBOX_2_h2m_mmp_inbox_DEFAULT   0

/***************************************************************************
 *M2H_MMP_INBOX_3 - Host to MoCA MMP inbox registers , register set index 3.
 ***************************************************************************/
/* MOCA_HOSTMISC :: M2H_MMP_INBOX_3 :: h2m_mmp_inbox [31:00] */
#define BCHP_MOCA_HOSTMISC_M2H_MMP_INBOX_3_h2m_mmp_inbox_MASK      0xffffffff
#define BCHP_MOCA_HOSTMISC_M2H_MMP_INBOX_3_h2m_mmp_inbox_SHIFT     0
#define BCHP_MOCA_HOSTMISC_M2H_MMP_INBOX_3_h2m_mmp_inbox_DEFAULT   0

/***************************************************************************
 *M2H_MMP_INBOX_4 - Host to MoCA MMP inbox registers , register set index 4.
 ***************************************************************************/
/* MOCA_HOSTMISC :: M2H_MMP_INBOX_4 :: h2m_mmp_inbox [31:00] */
#define BCHP_MOCA_HOSTMISC_M2H_MMP_INBOX_4_h2m_mmp_inbox_MASK      0xffffffff
#define BCHP_MOCA_HOSTMISC_M2H_MMP_INBOX_4_h2m_mmp_inbox_SHIFT     0
#define BCHP_MOCA_HOSTMISC_M2H_MMP_INBOX_4_h2m_mmp_inbox_DEFAULT   0

/***************************************************************************
 *M2H_MMP_INBOX_5 - Host to MoCA MMP inbox registers , register set index 5.
 ***************************************************************************/
/* MOCA_HOSTMISC :: M2H_MMP_INBOX_5 :: h2m_mmp_inbox [31:00] */
#define BCHP_MOCA_HOSTMISC_M2H_MMP_INBOX_5_h2m_mmp_inbox_MASK      0xffffffff
#define BCHP_MOCA_HOSTMISC_M2H_MMP_INBOX_5_h2m_mmp_inbox_SHIFT     0
#define BCHP_MOCA_HOSTMISC_M2H_MMP_INBOX_5_h2m_mmp_inbox_DEFAULT   0

/***************************************************************************
 *M2H_MMP_INBOX_6 - Host to MoCA MMP inbox registers , register set index 6.
 ***************************************************************************/
/* MOCA_HOSTMISC :: M2H_MMP_INBOX_6 :: h2m_mmp_inbox [31:00] */
#define BCHP_MOCA_HOSTMISC_M2H_MMP_INBOX_6_h2m_mmp_inbox_MASK      0xffffffff
#define BCHP_MOCA_HOSTMISC_M2H_MMP_INBOX_6_h2m_mmp_inbox_SHIFT     0
#define BCHP_MOCA_HOSTMISC_M2H_MMP_INBOX_6_h2m_mmp_inbox_DEFAULT   0

/***************************************************************************
 *M2H_MMP_INBOX_7 - Host to MoCA MMP inbox registers , register set index 7.
 ***************************************************************************/
/* MOCA_HOSTMISC :: M2H_MMP_INBOX_7 :: h2m_mmp_inbox [31:00] */
#define BCHP_MOCA_HOSTMISC_M2H_MMP_INBOX_7_h2m_mmp_inbox_MASK      0xffffffff
#define BCHP_MOCA_HOSTMISC_M2H_MMP_INBOX_7_h2m_mmp_inbox_SHIFT     0
#define BCHP_MOCA_HOSTMISC_M2H_MMP_INBOX_7_h2m_mmp_inbox_DEFAULT   0

/***************************************************************************
 *M2H_MMP_INBOX_8 - Host to MoCA MMP inbox registers , register set index 8.
 ***************************************************************************/
/* MOCA_HOSTMISC :: M2H_MMP_INBOX_8 :: h2m_mmp_inbox [31:00] */
#define BCHP_MOCA_HOSTMISC_M2H_MMP_INBOX_8_h2m_mmp_inbox_MASK      0xffffffff
#define BCHP_MOCA_HOSTMISC_M2H_MMP_INBOX_8_h2m_mmp_inbox_SHIFT     0
#define BCHP_MOCA_HOSTMISC_M2H_MMP_INBOX_8_h2m_mmp_inbox_DEFAULT   0

/***************************************************************************
 *M2H_MMP_INBOX_9 - Host to MoCA MMP inbox registers , register set index 9.
 ***************************************************************************/
/* MOCA_HOSTMISC :: M2H_MMP_INBOX_9 :: h2m_mmp_inbox [31:00] */
#define BCHP_MOCA_HOSTMISC_M2H_MMP_INBOX_9_h2m_mmp_inbox_MASK      0xffffffff
#define BCHP_MOCA_HOSTMISC_M2H_MMP_INBOX_9_h2m_mmp_inbox_SHIFT     0
#define BCHP_MOCA_HOSTMISC_M2H_MMP_INBOX_9_h2m_mmp_inbox_DEFAULT   0

/***************************************************************************
 *M2H_MMP_INBOX_10 - Host to MoCA MMP inbox registers , register set index 10.
 ***************************************************************************/
/* MOCA_HOSTMISC :: M2H_MMP_INBOX_10 :: h2m_mmp_inbox [31:00] */
#define BCHP_MOCA_HOSTMISC_M2H_MMP_INBOX_10_h2m_mmp_inbox_MASK     0xffffffff
#define BCHP_MOCA_HOSTMISC_M2H_MMP_INBOX_10_h2m_mmp_inbox_SHIFT    0
#define BCHP_MOCA_HOSTMISC_M2H_MMP_INBOX_10_h2m_mmp_inbox_DEFAULT  0

/***************************************************************************
 *M2H_MMP_INBOX_11 - Host to MoCA MMP inbox registers , register set index 11.
 ***************************************************************************/
/* MOCA_HOSTMISC :: M2H_MMP_INBOX_11 :: h2m_mmp_inbox [31:00] */
#define BCHP_MOCA_HOSTMISC_M2H_MMP_INBOX_11_h2m_mmp_inbox_MASK     0xffffffff
#define BCHP_MOCA_HOSTMISC_M2H_MMP_INBOX_11_h2m_mmp_inbox_SHIFT    0
#define BCHP_MOCA_HOSTMISC_M2H_MMP_INBOX_11_h2m_mmp_inbox_DEFAULT  0

/***************************************************************************
 *M2H_MMP_INBOX_12 - Host to MoCA MMP inbox registers , register set index 12.
 ***************************************************************************/
/* MOCA_HOSTMISC :: M2H_MMP_INBOX_12 :: h2m_mmp_inbox [31:00] */
#define BCHP_MOCA_HOSTMISC_M2H_MMP_INBOX_12_h2m_mmp_inbox_MASK     0xffffffff
#define BCHP_MOCA_HOSTMISC_M2H_MMP_INBOX_12_h2m_mmp_inbox_SHIFT    0
#define BCHP_MOCA_HOSTMISC_M2H_MMP_INBOX_12_h2m_mmp_inbox_DEFAULT  0

/***************************************************************************
 *M2H_MMP_INBOX_13 - Host to MoCA MMP inbox registers , register set index 13.
 ***************************************************************************/
/* MOCA_HOSTMISC :: M2H_MMP_INBOX_13 :: h2m_mmp_inbox [31:00] */
#define BCHP_MOCA_HOSTMISC_M2H_MMP_INBOX_13_h2m_mmp_inbox_MASK     0xffffffff
#define BCHP_MOCA_HOSTMISC_M2H_MMP_INBOX_13_h2m_mmp_inbox_SHIFT    0
#define BCHP_MOCA_HOSTMISC_M2H_MMP_INBOX_13_h2m_mmp_inbox_DEFAULT  0

/***************************************************************************
 *M2H_MMP_INBOX_14 - Host to MoCA MMP inbox registers , register set index 14.
 ***************************************************************************/
/* MOCA_HOSTMISC :: M2H_MMP_INBOX_14 :: h2m_mmp_inbox [31:00] */
#define BCHP_MOCA_HOSTMISC_M2H_MMP_INBOX_14_h2m_mmp_inbox_MASK     0xffffffff
#define BCHP_MOCA_HOSTMISC_M2H_MMP_INBOX_14_h2m_mmp_inbox_SHIFT    0
#define BCHP_MOCA_HOSTMISC_M2H_MMP_INBOX_14_h2m_mmp_inbox_DEFAULT  0

/***************************************************************************
 *M2H_MMP_INBOX_15 - Host to MoCA MMP inbox registers , register set index 15.
 ***************************************************************************/
/* MOCA_HOSTMISC :: M2H_MMP_INBOX_15 :: h2m_mmp_inbox [31:00] */
#define BCHP_MOCA_HOSTMISC_M2H_MMP_INBOX_15_h2m_mmp_inbox_MASK     0xffffffff
#define BCHP_MOCA_HOSTMISC_M2H_MMP_INBOX_15_h2m_mmp_inbox_SHIFT    0
#define BCHP_MOCA_HOSTMISC_M2H_MMP_INBOX_15_h2m_mmp_inbox_DEFAULT  0

#endif /* #ifndef BCHP_MOCA_HOSTMISC_H__ */

/* End of File */
