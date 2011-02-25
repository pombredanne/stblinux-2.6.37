/***************************************************************************
 *     Copyright (c) 1999-2009, Broadcom Corporation
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
 * Date:           Generated on         Mon Nov  2 18:03:02 2009
 *                 MD5 Checksum         1b1ce0a8b8524cc9ab8ec6b5a1344fea
 *
 * Compiled with:  RDB Utility          combo_header.pl
 *                 RDB Parser           3.0
 *                 unknown              unknown
 *                 Perl Interpreter     5.008008
 *                 Operating System     linux
 *
 * Revision History:
 *
 * $brcm_Log: /magnum/basemodules/chp/7408/rdb/a0/bchp_hif_spi_intr2.h $
 * 
 * Hydra_Software_Devel/1   11/2/09 7:41p albertl
 * SW7408-10: Initial revision.
 *
 ***************************************************************************/

#ifndef BCHP_HIF_SPI_INTR2_H__
#define BCHP_HIF_SPI_INTR2_H__

/***************************************************************************
 *HIF_SPI_INTR2 - HIF Level 2 Interrupt Controller Registers for SPI
 ***************************************************************************/
#define BCHP_HIF_SPI_INTR2_CPU_STATUS            0x00441d00 /* CPU interrupt Status Register */
#define BCHP_HIF_SPI_INTR2_CPU_SET               0x00441d04 /* CPU interrupt Set Register */
#define BCHP_HIF_SPI_INTR2_CPU_CLEAR             0x00441d08 /* CPU interrupt Clear Register */
#define BCHP_HIF_SPI_INTR2_CPU_MASK_STATUS       0x00441d0c /* CPU interrupt Mask Status Register */
#define BCHP_HIF_SPI_INTR2_CPU_MASK_SET          0x00441d10 /* CPU interrupt Mask Set Register */
#define BCHP_HIF_SPI_INTR2_CPU_MASK_CLEAR        0x00441d14 /* CPU interrupt Mask Clear Register */

/***************************************************************************
 *CPU_STATUS - CPU interrupt Status Register
 ***************************************************************************/
/* HIF_SPI_INTR2 :: CPU_STATUS :: reserved0 [31:07] */
#define BCHP_HIF_SPI_INTR2_CPU_STATUS_reserved0_MASK               0xffffff80
#define BCHP_HIF_SPI_INTR2_CPU_STATUS_reserved0_SHIFT              7

/* HIF_SPI_INTR2 :: CPU_STATUS :: MSPI_HALTED [06:06] */
#define BCHP_HIF_SPI_INTR2_CPU_STATUS_MSPI_HALTED_MASK             0x00000040
#define BCHP_HIF_SPI_INTR2_CPU_STATUS_MSPI_HALTED_SHIFT            6

/* HIF_SPI_INTR2 :: CPU_STATUS :: MSPI_DONE [05:05] */
#define BCHP_HIF_SPI_INTR2_CPU_STATUS_MSPI_DONE_MASK               0x00000020
#define BCHP_HIF_SPI_INTR2_CPU_STATUS_MSPI_DONE_SHIFT              5

/* HIF_SPI_INTR2 :: CPU_STATUS :: SPI_LR_OVERREAD [04:04] */
#define BCHP_HIF_SPI_INTR2_CPU_STATUS_SPI_LR_OVERREAD_MASK         0x00000010
#define BCHP_HIF_SPI_INTR2_CPU_STATUS_SPI_LR_OVERREAD_SHIFT        4

/* HIF_SPI_INTR2 :: CPU_STATUS :: SPI_LR_SESSION_DONE [03:03] */
#define BCHP_HIF_SPI_INTR2_CPU_STATUS_SPI_LR_SESSION_DONE_MASK     0x00000008
#define BCHP_HIF_SPI_INTR2_CPU_STATUS_SPI_LR_SESSION_DONE_SHIFT    3

/* HIF_SPI_INTR2 :: CPU_STATUS :: SPI_LR_IMPATIENT [02:02] */
#define BCHP_HIF_SPI_INTR2_CPU_STATUS_SPI_LR_IMPATIENT_MASK        0x00000004
#define BCHP_HIF_SPI_INTR2_CPU_STATUS_SPI_LR_IMPATIENT_SHIFT       2

/* HIF_SPI_INTR2 :: CPU_STATUS :: SPI_LR_SESSION_ABORTED [01:01] */
#define BCHP_HIF_SPI_INTR2_CPU_STATUS_SPI_LR_SESSION_ABORTED_MASK  0x00000002
#define BCHP_HIF_SPI_INTR2_CPU_STATUS_SPI_LR_SESSION_ABORTED_SHIFT 1

/* HIF_SPI_INTR2 :: CPU_STATUS :: SPI_LR_FULLNESS_REACHED [00:00] */
#define BCHP_HIF_SPI_INTR2_CPU_STATUS_SPI_LR_FULLNESS_REACHED_MASK 0x00000001
#define BCHP_HIF_SPI_INTR2_CPU_STATUS_SPI_LR_FULLNESS_REACHED_SHIFT 0

/***************************************************************************
 *CPU_SET - CPU interrupt Set Register
 ***************************************************************************/
/* HIF_SPI_INTR2 :: CPU_SET :: reserved0 [31:07] */
#define BCHP_HIF_SPI_INTR2_CPU_SET_reserved0_MASK                  0xffffff80
#define BCHP_HIF_SPI_INTR2_CPU_SET_reserved0_SHIFT                 7

/* HIF_SPI_INTR2 :: CPU_SET :: MSPI_HALTED [06:06] */
#define BCHP_HIF_SPI_INTR2_CPU_SET_MSPI_HALTED_MASK                0x00000040
#define BCHP_HIF_SPI_INTR2_CPU_SET_MSPI_HALTED_SHIFT               6

/* HIF_SPI_INTR2 :: CPU_SET :: MSPI_DONE [05:05] */
#define BCHP_HIF_SPI_INTR2_CPU_SET_MSPI_DONE_MASK                  0x00000020
#define BCHP_HIF_SPI_INTR2_CPU_SET_MSPI_DONE_SHIFT                 5

/* HIF_SPI_INTR2 :: CPU_SET :: SPI_LR_OVERREAD [04:04] */
#define BCHP_HIF_SPI_INTR2_CPU_SET_SPI_LR_OVERREAD_MASK            0x00000010
#define BCHP_HIF_SPI_INTR2_CPU_SET_SPI_LR_OVERREAD_SHIFT           4

/* HIF_SPI_INTR2 :: CPU_SET :: SPI_LR_SESSION_DONE [03:03] */
#define BCHP_HIF_SPI_INTR2_CPU_SET_SPI_LR_SESSION_DONE_MASK        0x00000008
#define BCHP_HIF_SPI_INTR2_CPU_SET_SPI_LR_SESSION_DONE_SHIFT       3

/* HIF_SPI_INTR2 :: CPU_SET :: SPI_LR_IMPATIENT [02:02] */
#define BCHP_HIF_SPI_INTR2_CPU_SET_SPI_LR_IMPATIENT_MASK           0x00000004
#define BCHP_HIF_SPI_INTR2_CPU_SET_SPI_LR_IMPATIENT_SHIFT          2

/* HIF_SPI_INTR2 :: CPU_SET :: SPI_LR_SESSION_ABORTED [01:01] */
#define BCHP_HIF_SPI_INTR2_CPU_SET_SPI_LR_SESSION_ABORTED_MASK     0x00000002
#define BCHP_HIF_SPI_INTR2_CPU_SET_SPI_LR_SESSION_ABORTED_SHIFT    1

/* HIF_SPI_INTR2 :: CPU_SET :: SPI_LR_FULLNESS_REACHED [00:00] */
#define BCHP_HIF_SPI_INTR2_CPU_SET_SPI_LR_FULLNESS_REACHED_MASK    0x00000001
#define BCHP_HIF_SPI_INTR2_CPU_SET_SPI_LR_FULLNESS_REACHED_SHIFT   0

/***************************************************************************
 *CPU_CLEAR - CPU interrupt Clear Register
 ***************************************************************************/
/* HIF_SPI_INTR2 :: CPU_CLEAR :: reserved0 [31:07] */
#define BCHP_HIF_SPI_INTR2_CPU_CLEAR_reserved0_MASK                0xffffff80
#define BCHP_HIF_SPI_INTR2_CPU_CLEAR_reserved0_SHIFT               7

/* HIF_SPI_INTR2 :: CPU_CLEAR :: MSPI_HALTED [06:06] */
#define BCHP_HIF_SPI_INTR2_CPU_CLEAR_MSPI_HALTED_MASK              0x00000040
#define BCHP_HIF_SPI_INTR2_CPU_CLEAR_MSPI_HALTED_SHIFT             6

/* HIF_SPI_INTR2 :: CPU_CLEAR :: MSPI_DONE [05:05] */
#define BCHP_HIF_SPI_INTR2_CPU_CLEAR_MSPI_DONE_MASK                0x00000020
#define BCHP_HIF_SPI_INTR2_CPU_CLEAR_MSPI_DONE_SHIFT               5

/* HIF_SPI_INTR2 :: CPU_CLEAR :: SPI_LR_OVERREAD [04:04] */
#define BCHP_HIF_SPI_INTR2_CPU_CLEAR_SPI_LR_OVERREAD_MASK          0x00000010
#define BCHP_HIF_SPI_INTR2_CPU_CLEAR_SPI_LR_OVERREAD_SHIFT         4

/* HIF_SPI_INTR2 :: CPU_CLEAR :: SPI_LR_SESSION_DONE [03:03] */
#define BCHP_HIF_SPI_INTR2_CPU_CLEAR_SPI_LR_SESSION_DONE_MASK      0x00000008
#define BCHP_HIF_SPI_INTR2_CPU_CLEAR_SPI_LR_SESSION_DONE_SHIFT     3

/* HIF_SPI_INTR2 :: CPU_CLEAR :: SPI_LR_IMPATIENT [02:02] */
#define BCHP_HIF_SPI_INTR2_CPU_CLEAR_SPI_LR_IMPATIENT_MASK         0x00000004
#define BCHP_HIF_SPI_INTR2_CPU_CLEAR_SPI_LR_IMPATIENT_SHIFT        2

/* HIF_SPI_INTR2 :: CPU_CLEAR :: SPI_LR_SESSION_ABORTED [01:01] */
#define BCHP_HIF_SPI_INTR2_CPU_CLEAR_SPI_LR_SESSION_ABORTED_MASK   0x00000002
#define BCHP_HIF_SPI_INTR2_CPU_CLEAR_SPI_LR_SESSION_ABORTED_SHIFT  1

/* HIF_SPI_INTR2 :: CPU_CLEAR :: SPI_LR_FULLNESS_REACHED [00:00] */
#define BCHP_HIF_SPI_INTR2_CPU_CLEAR_SPI_LR_FULLNESS_REACHED_MASK  0x00000001
#define BCHP_HIF_SPI_INTR2_CPU_CLEAR_SPI_LR_FULLNESS_REACHED_SHIFT 0

/***************************************************************************
 *CPU_MASK_STATUS - CPU interrupt Mask Status Register
 ***************************************************************************/
/* HIF_SPI_INTR2 :: CPU_MASK_STATUS :: reserved0 [31:07] */
#define BCHP_HIF_SPI_INTR2_CPU_MASK_STATUS_reserved0_MASK          0xffffff80
#define BCHP_HIF_SPI_INTR2_CPU_MASK_STATUS_reserved0_SHIFT         7

/* HIF_SPI_INTR2 :: CPU_MASK_STATUS :: MSPI_HALTED [06:06] */
#define BCHP_HIF_SPI_INTR2_CPU_MASK_STATUS_MSPI_HALTED_MASK        0x00000040
#define BCHP_HIF_SPI_INTR2_CPU_MASK_STATUS_MSPI_HALTED_SHIFT       6

/* HIF_SPI_INTR2 :: CPU_MASK_STATUS :: MSPI_DONE [05:05] */
#define BCHP_HIF_SPI_INTR2_CPU_MASK_STATUS_MSPI_DONE_MASK          0x00000020
#define BCHP_HIF_SPI_INTR2_CPU_MASK_STATUS_MSPI_DONE_SHIFT         5

/* HIF_SPI_INTR2 :: CPU_MASK_STATUS :: SPI_LR_OVERREAD [04:04] */
#define BCHP_HIF_SPI_INTR2_CPU_MASK_STATUS_SPI_LR_OVERREAD_MASK    0x00000010
#define BCHP_HIF_SPI_INTR2_CPU_MASK_STATUS_SPI_LR_OVERREAD_SHIFT   4

/* HIF_SPI_INTR2 :: CPU_MASK_STATUS :: SPI_LR_SESSION_DONE [03:03] */
#define BCHP_HIF_SPI_INTR2_CPU_MASK_STATUS_SPI_LR_SESSION_DONE_MASK 0x00000008
#define BCHP_HIF_SPI_INTR2_CPU_MASK_STATUS_SPI_LR_SESSION_DONE_SHIFT 3

/* HIF_SPI_INTR2 :: CPU_MASK_STATUS :: SPI_LR_IMPATIENT [02:02] */
#define BCHP_HIF_SPI_INTR2_CPU_MASK_STATUS_SPI_LR_IMPATIENT_MASK   0x00000004
#define BCHP_HIF_SPI_INTR2_CPU_MASK_STATUS_SPI_LR_IMPATIENT_SHIFT  2

/* HIF_SPI_INTR2 :: CPU_MASK_STATUS :: SPI_LR_SESSION_ABORTED [01:01] */
#define BCHP_HIF_SPI_INTR2_CPU_MASK_STATUS_SPI_LR_SESSION_ABORTED_MASK 0x00000002
#define BCHP_HIF_SPI_INTR2_CPU_MASK_STATUS_SPI_LR_SESSION_ABORTED_SHIFT 1

/* HIF_SPI_INTR2 :: CPU_MASK_STATUS :: SPI_LR_FULLNESS_REACHED [00:00] */
#define BCHP_HIF_SPI_INTR2_CPU_MASK_STATUS_SPI_LR_FULLNESS_REACHED_MASK 0x00000001
#define BCHP_HIF_SPI_INTR2_CPU_MASK_STATUS_SPI_LR_FULLNESS_REACHED_SHIFT 0

/***************************************************************************
 *CPU_MASK_SET - CPU interrupt Mask Set Register
 ***************************************************************************/
/* HIF_SPI_INTR2 :: CPU_MASK_SET :: reserved0 [31:07] */
#define BCHP_HIF_SPI_INTR2_CPU_MASK_SET_reserved0_MASK             0xffffff80
#define BCHP_HIF_SPI_INTR2_CPU_MASK_SET_reserved0_SHIFT            7

/* HIF_SPI_INTR2 :: CPU_MASK_SET :: MSPI_HALTED [06:06] */
#define BCHP_HIF_SPI_INTR2_CPU_MASK_SET_MSPI_HALTED_MASK           0x00000040
#define BCHP_HIF_SPI_INTR2_CPU_MASK_SET_MSPI_HALTED_SHIFT          6

/* HIF_SPI_INTR2 :: CPU_MASK_SET :: MSPI_DONE [05:05] */
#define BCHP_HIF_SPI_INTR2_CPU_MASK_SET_MSPI_DONE_MASK             0x00000020
#define BCHP_HIF_SPI_INTR2_CPU_MASK_SET_MSPI_DONE_SHIFT            5

/* HIF_SPI_INTR2 :: CPU_MASK_SET :: SPI_LR_OVERREAD [04:04] */
#define BCHP_HIF_SPI_INTR2_CPU_MASK_SET_SPI_LR_OVERREAD_MASK       0x00000010
#define BCHP_HIF_SPI_INTR2_CPU_MASK_SET_SPI_LR_OVERREAD_SHIFT      4

/* HIF_SPI_INTR2 :: CPU_MASK_SET :: SPI_LR_SESSION_DONE [03:03] */
#define BCHP_HIF_SPI_INTR2_CPU_MASK_SET_SPI_LR_SESSION_DONE_MASK   0x00000008
#define BCHP_HIF_SPI_INTR2_CPU_MASK_SET_SPI_LR_SESSION_DONE_SHIFT  3

/* HIF_SPI_INTR2 :: CPU_MASK_SET :: SPI_LR_IMPATIENT [02:02] */
#define BCHP_HIF_SPI_INTR2_CPU_MASK_SET_SPI_LR_IMPATIENT_MASK      0x00000004
#define BCHP_HIF_SPI_INTR2_CPU_MASK_SET_SPI_LR_IMPATIENT_SHIFT     2

/* HIF_SPI_INTR2 :: CPU_MASK_SET :: SPI_LR_SESSION_ABORTED [01:01] */
#define BCHP_HIF_SPI_INTR2_CPU_MASK_SET_SPI_LR_SESSION_ABORTED_MASK 0x00000002
#define BCHP_HIF_SPI_INTR2_CPU_MASK_SET_SPI_LR_SESSION_ABORTED_SHIFT 1

/* HIF_SPI_INTR2 :: CPU_MASK_SET :: SPI_LR_FULLNESS_REACHED [00:00] */
#define BCHP_HIF_SPI_INTR2_CPU_MASK_SET_SPI_LR_FULLNESS_REACHED_MASK 0x00000001
#define BCHP_HIF_SPI_INTR2_CPU_MASK_SET_SPI_LR_FULLNESS_REACHED_SHIFT 0

/***************************************************************************
 *CPU_MASK_CLEAR - CPU interrupt Mask Clear Register
 ***************************************************************************/
/* HIF_SPI_INTR2 :: CPU_MASK_CLEAR :: reserved0 [31:07] */
#define BCHP_HIF_SPI_INTR2_CPU_MASK_CLEAR_reserved0_MASK           0xffffff80
#define BCHP_HIF_SPI_INTR2_CPU_MASK_CLEAR_reserved0_SHIFT          7

/* HIF_SPI_INTR2 :: CPU_MASK_CLEAR :: MSPI_HALTED [06:06] */
#define BCHP_HIF_SPI_INTR2_CPU_MASK_CLEAR_MSPI_HALTED_MASK         0x00000040
#define BCHP_HIF_SPI_INTR2_CPU_MASK_CLEAR_MSPI_HALTED_SHIFT        6

/* HIF_SPI_INTR2 :: CPU_MASK_CLEAR :: MSPI_DONE [05:05] */
#define BCHP_HIF_SPI_INTR2_CPU_MASK_CLEAR_MSPI_DONE_MASK           0x00000020
#define BCHP_HIF_SPI_INTR2_CPU_MASK_CLEAR_MSPI_DONE_SHIFT          5

/* HIF_SPI_INTR2 :: CPU_MASK_CLEAR :: SPI_LR_OVERREAD [04:04] */
#define BCHP_HIF_SPI_INTR2_CPU_MASK_CLEAR_SPI_LR_OVERREAD_MASK     0x00000010
#define BCHP_HIF_SPI_INTR2_CPU_MASK_CLEAR_SPI_LR_OVERREAD_SHIFT    4

/* HIF_SPI_INTR2 :: CPU_MASK_CLEAR :: SPI_LR_SESSION_DONE [03:03] */
#define BCHP_HIF_SPI_INTR2_CPU_MASK_CLEAR_SPI_LR_SESSION_DONE_MASK 0x00000008
#define BCHP_HIF_SPI_INTR2_CPU_MASK_CLEAR_SPI_LR_SESSION_DONE_SHIFT 3

/* HIF_SPI_INTR2 :: CPU_MASK_CLEAR :: SPI_LR_IMPATIENT [02:02] */
#define BCHP_HIF_SPI_INTR2_CPU_MASK_CLEAR_SPI_LR_IMPATIENT_MASK    0x00000004
#define BCHP_HIF_SPI_INTR2_CPU_MASK_CLEAR_SPI_LR_IMPATIENT_SHIFT   2

/* HIF_SPI_INTR2 :: CPU_MASK_CLEAR :: SPI_LR_SESSION_ABORTED [01:01] */
#define BCHP_HIF_SPI_INTR2_CPU_MASK_CLEAR_SPI_LR_SESSION_ABORTED_MASK 0x00000002
#define BCHP_HIF_SPI_INTR2_CPU_MASK_CLEAR_SPI_LR_SESSION_ABORTED_SHIFT 1

/* HIF_SPI_INTR2 :: CPU_MASK_CLEAR :: SPI_LR_FULLNESS_REACHED [00:00] */
#define BCHP_HIF_SPI_INTR2_CPU_MASK_CLEAR_SPI_LR_FULLNESS_REACHED_MASK 0x00000001
#define BCHP_HIF_SPI_INTR2_CPU_MASK_CLEAR_SPI_LR_FULLNESS_REACHED_SHIFT 0

#endif /* #ifndef BCHP_HIF_SPI_INTR2_H__ */

/* End of File */
