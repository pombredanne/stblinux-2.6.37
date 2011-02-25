/***************************************************************************
 *     Copyright (c) 1999-2010, Broadcom Corporation
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
 * Date:           Generated on         Mon May 17 04:00:43 2010
 *                 MD5 Checksum         47fd0602d6c7abb64bf56c6d387b1fe1
 *
 * Compiled with:  RDB Utility          combo_header.pl
 *                 RDB Parser           3.0
 *                 unknown              unknown
 *                 Perl Interpreter     5.008008
 *                 Operating System     linux
 *
 * Revision History:
 *
 * $brcm_Log: $
 *
 ***************************************************************************/

#ifndef BCHP_BSPI_H__
#define BCHP_BSPI_H__

/***************************************************************************
 *BSPI - Public BSPI Control Registers
 ***************************************************************************/
#define BCHP_BSPI_REVISION_ID                    0x00413000 /* Revision ID */
#define BCHP_BSPI_SCRATCH                        0x00413004 /* Revision ID */
#define BCHP_BSPI_MAST_N_BOOT_CTRL               0x00413008 /* Master/Boot SPI Control Register */
#define BCHP_BSPI_BUSY_STATUS                    0x0041300c /* BSPI Busy Status Register */
#define BCHP_BSPI_INTR_STATUS                    0x00413010 /* Interrupt Status Register */
#define BCHP_BSPI_B0_STATUS                      0x00413014 /* Prefetch Buffer 0 Status Register */
#define BCHP_BSPI_B0_CTRL                        0x00413018 /* Prefetch Buffer 0 Control Register */
#define BCHP_BSPI_B1_STATUS                      0x0041301c /* Prefetch Buffer 1 Status Register */
#define BCHP_BSPI_B1_CTRL                        0x00413020 /* Prefetch Buffer 1 Control Register */
#define BCHP_BSPI_STRAP_OVERRIDE_CTRL            0x00413024 /* Dual/Single Receive Mode Control Register */
#define BCHP_BSPI_FLEX_MODE_ENABLE               0x00413028 /* Flexible Control Mode Enable Register */
#define BCHP_BSPI_BITS_PER_CYCLE                 0x0041302c /* Bits per cycle "b-p-c" Control Register */
#define BCHP_BSPI_BITS_PER_PHASE                 0x00413030 /* Bits per Phase "b-p-p" Control Register */
#define BCHP_BSPI_CMD_AND_MODE_BYTE              0x00413034 /* Command and Mode Data Register */
#define BCHP_BSPI_BSPI_FLASH_UPPER_ADDR_BYTE     0x00413038 /* Bspi FLash upper address byte register */
#define BCHP_BSPI_BSPI_XOR_VALUE                 0x0041303c /* BSPI FLASH XOR Value Register */
#define BCHP_BSPI_BSPI_XOR_ENABLE                0x00413040 /* BSPI FLASH XOR Enable Register */
#define BCHP_BSPI_BSPI_PIO_MODE_ENABLE           0x00413044 /* BSPI Pin  Programmed IO Mode Enable Register */
#define BCHP_BSPI_BSPI_PIO_IODIR                 0x00413048 /* BSPI Pin  Programmed IO Mode Direction Register */
#define BCHP_BSPI_BSPI_PIO_DATA                  0x0041304c /* BSPI Pin  Programmed IO Mode Data Register */

/***************************************************************************
 *REVISION_ID - Revision ID
 ***************************************************************************/
/* BSPI :: REVISION_ID :: reserved0 [31:16] */
#define BCHP_BSPI_REVISION_ID_reserved0_MASK                       0xffff0000
#define BCHP_BSPI_REVISION_ID_reserved0_SHIFT                      16

/* BSPI :: REVISION_ID :: MAJOR [15:08] */
#define BCHP_BSPI_REVISION_ID_MAJOR_MASK                           0x0000ff00
#define BCHP_BSPI_REVISION_ID_MAJOR_SHIFT                          8

/* BSPI :: REVISION_ID :: MINOR [07:00] */
#define BCHP_BSPI_REVISION_ID_MINOR_MASK                           0x000000ff
#define BCHP_BSPI_REVISION_ID_MINOR_SHIFT                          0

/***************************************************************************
 *SCRATCH - Revision ID
 ***************************************************************************/
/* BSPI :: SCRATCH :: SCRATCH [31:00] */
#define BCHP_BSPI_SCRATCH_SCRATCH_MASK                             0xffffffff
#define BCHP_BSPI_SCRATCH_SCRATCH_SHIFT                            0

/***************************************************************************
 *MAST_N_BOOT_CTRL - Master/Boot SPI Control Register
 ***************************************************************************/
/* BSPI :: MAST_N_BOOT_CTRL :: reserved0 [31:01] */
#define BCHP_BSPI_MAST_N_BOOT_CTRL_reserved0_MASK                  0xfffffffe
#define BCHP_BSPI_MAST_N_BOOT_CTRL_reserved0_SHIFT                 1

/* BSPI :: MAST_N_BOOT_CTRL :: mast_n_boot [00:00] */
#define BCHP_BSPI_MAST_N_BOOT_CTRL_mast_n_boot_MASK                0x00000001
#define BCHP_BSPI_MAST_N_BOOT_CTRL_mast_n_boot_SHIFT               0

/***************************************************************************
 *BUSY_STATUS - BSPI Busy Status Register
 ***************************************************************************/
/* BSPI :: BUSY_STATUS :: reserved0 [31:01] */
#define BCHP_BSPI_BUSY_STATUS_reserved0_MASK                       0xfffffffe
#define BCHP_BSPI_BUSY_STATUS_reserved0_SHIFT                      1

/* BSPI :: BUSY_STATUS :: busy [00:00] */
#define BCHP_BSPI_BUSY_STATUS_busy_MASK                            0x00000001
#define BCHP_BSPI_BUSY_STATUS_busy_SHIFT                           0

/***************************************************************************
 *INTR_STATUS - Interrupt Status Register
 ***************************************************************************/
/* BSPI :: INTR_STATUS :: reserved0 [31:02] */
#define BCHP_BSPI_INTR_STATUS_reserved0_MASK                       0xfffffffc
#define BCHP_BSPI_INTR_STATUS_reserved0_SHIFT                      2

/* BSPI :: INTR_STATUS :: intr_1 [01:01] */
#define BCHP_BSPI_INTR_STATUS_intr_1_MASK                          0x00000002
#define BCHP_BSPI_INTR_STATUS_intr_1_SHIFT                         1

/* BSPI :: INTR_STATUS :: intr_0 [00:00] */
#define BCHP_BSPI_INTR_STATUS_intr_0_MASK                          0x00000001
#define BCHP_BSPI_INTR_STATUS_intr_0_SHIFT                         0

/***************************************************************************
 *B0_STATUS - Prefetch Buffer 0 Status Register
 ***************************************************************************/
/* BSPI :: B0_STATUS :: reserved0 [31:31] */
#define BCHP_BSPI_B0_STATUS_reserved0_MASK                         0x80000000
#define BCHP_BSPI_B0_STATUS_reserved0_SHIFT                        31

/* BSPI :: B0_STATUS :: b0_prefetch_active [30:30] */
#define BCHP_BSPI_B0_STATUS_b0_prefetch_active_MASK                0x40000000
#define BCHP_BSPI_B0_STATUS_b0_prefetch_active_SHIFT               30

/* BSPI :: B0_STATUS :: b0_full [29:29] */
#define BCHP_BSPI_B0_STATUS_b0_full_MASK                           0x20000000
#define BCHP_BSPI_B0_STATUS_b0_full_SHIFT                          29

/* BSPI :: B0_STATUS :: b0_empty [28:28] */
#define BCHP_BSPI_B0_STATUS_b0_empty_MASK                          0x10000000
#define BCHP_BSPI_B0_STATUS_b0_empty_SHIFT                         28

/* BSPI :: B0_STATUS :: b0_miss [27:27] */
#define BCHP_BSPI_B0_STATUS_b0_miss_MASK                           0x08000000
#define BCHP_BSPI_B0_STATUS_b0_miss_SHIFT                          27

/* BSPI :: B0_STATUS :: b0_hit [26:26] */
#define BCHP_BSPI_B0_STATUS_b0_hit_MASK                            0x04000000
#define BCHP_BSPI_B0_STATUS_b0_hit_SHIFT                           26

/* BSPI :: B0_STATUS :: b0_address [25:00] */
#define BCHP_BSPI_B0_STATUS_b0_address_MASK                        0x03ffffff
#define BCHP_BSPI_B0_STATUS_b0_address_SHIFT                       0

/***************************************************************************
 *B0_CTRL - Prefetch Buffer 0 Control Register
 ***************************************************************************/
/* BSPI :: B0_CTRL :: reserved0 [31:01] */
#define BCHP_BSPI_B0_CTRL_reserved0_MASK                           0xfffffffe
#define BCHP_BSPI_B0_CTRL_reserved0_SHIFT                          1

/* BSPI :: B0_CTRL :: b0_flush [00:00] */
#define BCHP_BSPI_B0_CTRL_b0_flush_MASK                            0x00000001
#define BCHP_BSPI_B0_CTRL_b0_flush_SHIFT                           0

/***************************************************************************
 *B1_STATUS - Prefetch Buffer 1 Status Register
 ***************************************************************************/
/* BSPI :: B1_STATUS :: reserved0 [31:31] */
#define BCHP_BSPI_B1_STATUS_reserved0_MASK                         0x80000000
#define BCHP_BSPI_B1_STATUS_reserved0_SHIFT                        31

/* BSPI :: B1_STATUS :: b1_prefetch_active [30:30] */
#define BCHP_BSPI_B1_STATUS_b1_prefetch_active_MASK                0x40000000
#define BCHP_BSPI_B1_STATUS_b1_prefetch_active_SHIFT               30

/* BSPI :: B1_STATUS :: b1_full [29:29] */
#define BCHP_BSPI_B1_STATUS_b1_full_MASK                           0x20000000
#define BCHP_BSPI_B1_STATUS_b1_full_SHIFT                          29

/* BSPI :: B1_STATUS :: b1_empty [28:28] */
#define BCHP_BSPI_B1_STATUS_b1_empty_MASK                          0x10000000
#define BCHP_BSPI_B1_STATUS_b1_empty_SHIFT                         28

/* BSPI :: B1_STATUS :: b1_miss [27:27] */
#define BCHP_BSPI_B1_STATUS_b1_miss_MASK                           0x08000000
#define BCHP_BSPI_B1_STATUS_b1_miss_SHIFT                          27

/* BSPI :: B1_STATUS :: b1_hit [26:26] */
#define BCHP_BSPI_B1_STATUS_b1_hit_MASK                            0x04000000
#define BCHP_BSPI_B1_STATUS_b1_hit_SHIFT                           26

/* BSPI :: B1_STATUS :: b1_address [25:00] */
#define BCHP_BSPI_B1_STATUS_b1_address_MASK                        0x03ffffff
#define BCHP_BSPI_B1_STATUS_b1_address_SHIFT                       0

/***************************************************************************
 *B1_CTRL - Prefetch Buffer 1 Control Register
 ***************************************************************************/
/* BSPI :: B1_CTRL :: reserved0 [31:01] */
#define BCHP_BSPI_B1_CTRL_reserved0_MASK                           0xfffffffe
#define BCHP_BSPI_B1_CTRL_reserved0_SHIFT                          1

/* BSPI :: B1_CTRL :: b1_flush [00:00] */
#define BCHP_BSPI_B1_CTRL_b1_flush_MASK                            0x00000001
#define BCHP_BSPI_B1_CTRL_b1_flush_SHIFT                           0

/***************************************************************************
 *STRAP_OVERRIDE_CTRL - Dual/Single Receive Mode Control Register
 ***************************************************************************/
/* BSPI :: STRAP_OVERRIDE_CTRL :: reserved0 [31:05] */
#define BCHP_BSPI_STRAP_OVERRIDE_CTRL_reserved0_MASK               0xffffffe0
#define BCHP_BSPI_STRAP_OVERRIDE_CTRL_reserved0_SHIFT              5

/* BSPI :: STRAP_OVERRIDE_CTRL :: endian_mode [04:04] */
#define BCHP_BSPI_STRAP_OVERRIDE_CTRL_endian_mode_MASK             0x00000010
#define BCHP_BSPI_STRAP_OVERRIDE_CTRL_endian_mode_SHIFT            4

/* BSPI :: STRAP_OVERRIDE_CTRL :: data_quad [03:03] */
#define BCHP_BSPI_STRAP_OVERRIDE_CTRL_data_quad_MASK               0x00000008
#define BCHP_BSPI_STRAP_OVERRIDE_CTRL_data_quad_SHIFT              3

/* BSPI :: STRAP_OVERRIDE_CTRL :: addr_4byte_n_3byte [02:02] */
#define BCHP_BSPI_STRAP_OVERRIDE_CTRL_addr_4byte_n_3byte_MASK      0x00000004
#define BCHP_BSPI_STRAP_OVERRIDE_CTRL_addr_4byte_n_3byte_SHIFT     2

/* BSPI :: STRAP_OVERRIDE_CTRL :: data_dual_n_sgl [01:01] */
#define BCHP_BSPI_STRAP_OVERRIDE_CTRL_data_dual_n_sgl_MASK         0x00000002
#define BCHP_BSPI_STRAP_OVERRIDE_CTRL_data_dual_n_sgl_SHIFT        1

/* BSPI :: STRAP_OVERRIDE_CTRL :: override [00:00] */
#define BCHP_BSPI_STRAP_OVERRIDE_CTRL_override_MASK                0x00000001
#define BCHP_BSPI_STRAP_OVERRIDE_CTRL_override_SHIFT               0

/***************************************************************************
 *FLEX_MODE_ENABLE - Flexible Control Mode Enable Register
 ***************************************************************************/
/* BSPI :: FLEX_MODE_ENABLE :: reserved0 [31:01] */
#define BCHP_BSPI_FLEX_MODE_ENABLE_reserved0_MASK                  0xfffffffe
#define BCHP_BSPI_FLEX_MODE_ENABLE_reserved0_SHIFT                 1

/* BSPI :: FLEX_MODE_ENABLE :: bspi_flex_mode_enable [00:00] */
#define BCHP_BSPI_FLEX_MODE_ENABLE_bspi_flex_mode_enable_MASK      0x00000001
#define BCHP_BSPI_FLEX_MODE_ENABLE_bspi_flex_mode_enable_SHIFT     0

/***************************************************************************
 *BITS_PER_CYCLE - Bits per cycle "b-p-c" Control Register
 ***************************************************************************/
/* BSPI :: BITS_PER_CYCLE :: reserved0 [31:26] */
#define BCHP_BSPI_BITS_PER_CYCLE_reserved0_MASK                    0xfc000000
#define BCHP_BSPI_BITS_PER_CYCLE_reserved0_SHIFT                   26

/* BSPI :: BITS_PER_CYCLE :: cmd_bpc_select [25:24] */
#define BCHP_BSPI_BITS_PER_CYCLE_cmd_bpc_select_MASK               0x03000000
#define BCHP_BSPI_BITS_PER_CYCLE_cmd_bpc_select_SHIFT              24

/* BSPI :: BITS_PER_CYCLE :: reserved1 [23:18] */
#define BCHP_BSPI_BITS_PER_CYCLE_reserved1_MASK                    0x00fc0000
#define BCHP_BSPI_BITS_PER_CYCLE_reserved1_SHIFT                   18

/* BSPI :: BITS_PER_CYCLE :: addr_bpc_select [17:16] */
#define BCHP_BSPI_BITS_PER_CYCLE_addr_bpc_select_MASK              0x00030000
#define BCHP_BSPI_BITS_PER_CYCLE_addr_bpc_select_SHIFT             16

/* BSPI :: BITS_PER_CYCLE :: reserved2 [15:10] */
#define BCHP_BSPI_BITS_PER_CYCLE_reserved2_MASK                    0x0000fc00
#define BCHP_BSPI_BITS_PER_CYCLE_reserved2_SHIFT                   10

/* BSPI :: BITS_PER_CYCLE :: mode_bpc_select [09:08] */
#define BCHP_BSPI_BITS_PER_CYCLE_mode_bpc_select_MASK              0x00000300
#define BCHP_BSPI_BITS_PER_CYCLE_mode_bpc_select_SHIFT             8

/* BSPI :: BITS_PER_CYCLE :: reserved3 [07:02] */
#define BCHP_BSPI_BITS_PER_CYCLE_reserved3_MASK                    0x000000fc
#define BCHP_BSPI_BITS_PER_CYCLE_reserved3_SHIFT                   2

/* BSPI :: BITS_PER_CYCLE :: data_bpc_select [01:00] */
#define BCHP_BSPI_BITS_PER_CYCLE_data_bpc_select_MASK              0x00000003
#define BCHP_BSPI_BITS_PER_CYCLE_data_bpc_select_SHIFT             0

/***************************************************************************
 *BITS_PER_PHASE - Bits per Phase "b-p-p" Control Register
 ***************************************************************************/
/* BSPI :: BITS_PER_PHASE :: reserved0 [31:25] */
#define BCHP_BSPI_BITS_PER_PHASE_reserved0_MASK                    0xfe000000
#define BCHP_BSPI_BITS_PER_PHASE_reserved0_SHIFT                   25

/* BSPI :: BITS_PER_PHASE :: cmd_bpp_select [24:24] */
#define BCHP_BSPI_BITS_PER_PHASE_cmd_bpp_select_MASK               0x01000000
#define BCHP_BSPI_BITS_PER_PHASE_cmd_bpp_select_SHIFT              24

/* BSPI :: BITS_PER_PHASE :: reserved1 [23:17] */
#define BCHP_BSPI_BITS_PER_PHASE_reserved1_MASK                    0x00fe0000
#define BCHP_BSPI_BITS_PER_PHASE_reserved1_SHIFT                   17

/* BSPI :: BITS_PER_PHASE :: addr_bpp_select [16:16] */
#define BCHP_BSPI_BITS_PER_PHASE_addr_bpp_select_MASK              0x00010000
#define BCHP_BSPI_BITS_PER_PHASE_addr_bpp_select_SHIFT             16

/* BSPI :: BITS_PER_PHASE :: reserved2 [15:09] */
#define BCHP_BSPI_BITS_PER_PHASE_reserved2_MASK                    0x0000fe00
#define BCHP_BSPI_BITS_PER_PHASE_reserved2_SHIFT                   9

/* BSPI :: BITS_PER_PHASE :: mode_bpp [08:08] */
#define BCHP_BSPI_BITS_PER_PHASE_mode_bpp_MASK                     0x00000100
#define BCHP_BSPI_BITS_PER_PHASE_mode_bpp_SHIFT                    8

/* BSPI :: BITS_PER_PHASE :: dummy_cycles [07:00] */
#define BCHP_BSPI_BITS_PER_PHASE_dummy_cycles_MASK                 0x000000ff
#define BCHP_BSPI_BITS_PER_PHASE_dummy_cycles_SHIFT                0

/***************************************************************************
 *CMD_AND_MODE_BYTE - Command and Mode Data Register
 ***************************************************************************/
/* BSPI :: CMD_AND_MODE_BYTE :: reserved0 [31:24] */
#define BCHP_BSPI_CMD_AND_MODE_BYTE_reserved0_MASK                 0xff000000
#define BCHP_BSPI_CMD_AND_MODE_BYTE_reserved0_SHIFT                24

/* BSPI :: CMD_AND_MODE_BYTE :: bspi_mode_byte [23:16] */
#define BCHP_BSPI_CMD_AND_MODE_BYTE_bspi_mode_byte_MASK            0x00ff0000
#define BCHP_BSPI_CMD_AND_MODE_BYTE_bspi_mode_byte_SHIFT           16

/* BSPI :: CMD_AND_MODE_BYTE :: reserved1 [15:08] */
#define BCHP_BSPI_CMD_AND_MODE_BYTE_reserved1_MASK                 0x0000ff00
#define BCHP_BSPI_CMD_AND_MODE_BYTE_reserved1_SHIFT                8

/* BSPI :: CMD_AND_MODE_BYTE :: bspi_cmd_byte [07:00] */
#define BCHP_BSPI_CMD_AND_MODE_BYTE_bspi_cmd_byte_MASK             0x000000ff
#define BCHP_BSPI_CMD_AND_MODE_BYTE_bspi_cmd_byte_SHIFT            0

/***************************************************************************
 *BSPI_FLASH_UPPER_ADDR_BYTE - Bspi FLash upper address byte register
 ***************************************************************************/
/* BSPI :: BSPI_FLASH_UPPER_ADDR_BYTE :: bspi_flash_upper_addr [31:24] */
#define BCHP_BSPI_BSPI_FLASH_UPPER_ADDR_BYTE_bspi_flash_upper_addr_MASK 0xff000000
#define BCHP_BSPI_BSPI_FLASH_UPPER_ADDR_BYTE_bspi_flash_upper_addr_SHIFT 24

/* BSPI :: BSPI_FLASH_UPPER_ADDR_BYTE :: reserved0 [23:00] */
#define BCHP_BSPI_BSPI_FLASH_UPPER_ADDR_BYTE_reserved0_MASK        0x00ffffff
#define BCHP_BSPI_BSPI_FLASH_UPPER_ADDR_BYTE_reserved0_SHIFT       0

/***************************************************************************
 *BSPI_XOR_VALUE - BSPI FLASH XOR Value Register
 ***************************************************************************/
/* BSPI :: BSPI_XOR_VALUE :: bspi_xor_value [31:20] */
#define BCHP_BSPI_BSPI_XOR_VALUE_bspi_xor_value_MASK               0xfff00000
#define BCHP_BSPI_BSPI_XOR_VALUE_bspi_xor_value_SHIFT              20

/* BSPI :: BSPI_XOR_VALUE :: reserved0 [19:00] */
#define BCHP_BSPI_BSPI_XOR_VALUE_reserved0_MASK                    0x000fffff
#define BCHP_BSPI_BSPI_XOR_VALUE_reserved0_SHIFT                   0

/***************************************************************************
 *BSPI_XOR_ENABLE - BSPI FLASH XOR Enable Register
 ***************************************************************************/
/* BSPI :: BSPI_XOR_ENABLE :: reserved0 [31:01] */
#define BCHP_BSPI_BSPI_XOR_ENABLE_reserved0_MASK                   0xfffffffe
#define BCHP_BSPI_BSPI_XOR_ENABLE_reserved0_SHIFT                  1

/* BSPI :: BSPI_XOR_ENABLE :: bspi_xor_enable [00:00] */
#define BCHP_BSPI_BSPI_XOR_ENABLE_bspi_xor_enable_MASK             0x00000001
#define BCHP_BSPI_BSPI_XOR_ENABLE_bspi_xor_enable_SHIFT            0

/***************************************************************************
 *BSPI_PIO_MODE_ENABLE - BSPI Pin  Programmed IO Mode Enable Register
 ***************************************************************************/
/* BSPI :: BSPI_PIO_MODE_ENABLE :: reserved0 [31:01] */
#define BCHP_BSPI_BSPI_PIO_MODE_ENABLE_reserved0_MASK              0xfffffffe
#define BCHP_BSPI_BSPI_PIO_MODE_ENABLE_reserved0_SHIFT             1

/* BSPI :: BSPI_PIO_MODE_ENABLE :: bspi_pio_mode [00:00] */
#define BCHP_BSPI_BSPI_PIO_MODE_ENABLE_bspi_pio_mode_MASK          0x00000001
#define BCHP_BSPI_BSPI_PIO_MODE_ENABLE_bspi_pio_mode_SHIFT         0

/***************************************************************************
 *BSPI_PIO_IODIR - BSPI Pin  Programmed IO Mode Direction Register
 ***************************************************************************/
/* BSPI :: BSPI_PIO_IODIR :: reserved0 [31:03] */
#define BCHP_BSPI_BSPI_PIO_IODIR_reserved0_MASK                    0xfffffff8
#define BCHP_BSPI_BSPI_PIO_IODIR_reserved0_SHIFT                   3

/* BSPI :: BSPI_PIO_IODIR :: bspi_pio_dir [02:00] */
#define BCHP_BSPI_BSPI_PIO_IODIR_bspi_pio_dir_MASK                 0x00000007
#define BCHP_BSPI_BSPI_PIO_IODIR_bspi_pio_dir_SHIFT                0

/***************************************************************************
 *BSPI_PIO_DATA - BSPI Pin  Programmed IO Mode Data Register
 ***************************************************************************/
/* BSPI :: BSPI_PIO_DATA :: reserved0 [31:03] */
#define BCHP_BSPI_BSPI_PIO_DATA_reserved0_MASK                     0xfffffff8
#define BCHP_BSPI_BSPI_PIO_DATA_reserved0_SHIFT                    3

/* BSPI :: BSPI_PIO_DATA :: bspi_pio_data [02:00] */
#define BCHP_BSPI_BSPI_PIO_DATA_bspi_pio_data_MASK                 0x00000007
#define BCHP_BSPI_BSPI_PIO_DATA_bspi_pio_data_SHIFT                0

#endif /* #ifndef BCHP_BSPI_H__ */

/* End of File */
