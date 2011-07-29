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
 * Date:           Generated on         Tue May 31 13:12:11 2011
 *                 MD5 Checksum         3d981376c3cc0d4c52a81813284994b8
 *
 * Compiled with:  RDB Utility          combo_header.pl
 *                 RDB Parser           3.0
 *                 unknown              unknown
 *                 Perl Interpreter     5.008008
 *                 Operating System     linux
 *
 * Revision History:
 *
 * $brcm_Log: /magnum/basemodules/chp/7344/rdb/a0/bchp_wktmr.h $
 * 
 * Hydra_Software_Devel/3   5/31/11 2:06p albertl
 * SW7344-40: Updated to match RDB.
 *
 ***************************************************************************/

#ifndef BCHP_WKTMR_H__
#define BCHP_WKTMR_H__

/***************************************************************************
 *WKTMR - Wakeup timer
 ***************************************************************************/
#define BCHP_WKTMR_EVENT                         0x00408e80 /* Wakeup Timer Register */
#define BCHP_WKTMR_COUNTER                       0x00408e84 /* Wakeup Counter */
#define BCHP_WKTMR_ALARM                         0x00408e88 /* Wakeup Timer Alarm */
#define BCHP_WKTMR_PRESCALER                     0x00408e8c /* Wakeup Timer Prescaler */
#define BCHP_WKTMR_PRESCALER_VAL                 0x00408e90 /* Wakeup Timer Prescaler Value */

/***************************************************************************
 *EVENT - Wakeup Timer Register
 ***************************************************************************/
/* WKTMR :: EVENT :: reserved0 [31:01] */
#define BCHP_WKTMR_EVENT_reserved0_MASK                            0xfffffffe
#define BCHP_WKTMR_EVENT_reserved0_SHIFT                           1

/* WKTMR :: EVENT :: wktmr_alarm_event [00:00] */
#define BCHP_WKTMR_EVENT_wktmr_alarm_event_MASK                    0x00000001
#define BCHP_WKTMR_EVENT_wktmr_alarm_event_SHIFT                   0
#define BCHP_WKTMR_EVENT_wktmr_alarm_event_DEFAULT                 0

/***************************************************************************
 *COUNTER - Wakeup Counter
 ***************************************************************************/
/* WKTMR :: COUNTER :: wktmr_counter [31:00] */
#define BCHP_WKTMR_COUNTER_wktmr_counter_MASK                      0xffffffff
#define BCHP_WKTMR_COUNTER_wktmr_counter_SHIFT                     0
#define BCHP_WKTMR_COUNTER_wktmr_counter_DEFAULT                   0

/***************************************************************************
 *ALARM - Wakeup Timer Alarm
 ***************************************************************************/
/* WKTMR :: ALARM :: wktmr_alarm [31:00] */
#define BCHP_WKTMR_ALARM_wktmr_alarm_MASK                          0xffffffff
#define BCHP_WKTMR_ALARM_wktmr_alarm_SHIFT                         0
#define BCHP_WKTMR_ALARM_wktmr_alarm_DEFAULT                       0

/***************************************************************************
 *PRESCALER - Wakeup Timer Prescaler
 ***************************************************************************/
/* WKTMR :: PRESCALER :: reserved0 [31:25] */
#define BCHP_WKTMR_PRESCALER_reserved0_MASK                        0xfe000000
#define BCHP_WKTMR_PRESCALER_reserved0_SHIFT                       25

/* WKTMR :: PRESCALER :: wktmr_prescaler [24:00] */
#define BCHP_WKTMR_PRESCALER_wktmr_prescaler_MASK                  0x01ffffff
#define BCHP_WKTMR_PRESCALER_wktmr_prescaler_SHIFT                 0
#define BCHP_WKTMR_PRESCALER_wktmr_prescaler_DEFAULT               27000000

/***************************************************************************
 *PRESCALER_VAL - Wakeup Timer Prescaler Value
 ***************************************************************************/
/* WKTMR :: PRESCALER_VAL :: reserved0 [31:25] */
#define BCHP_WKTMR_PRESCALER_VAL_reserved0_MASK                    0xfe000000
#define BCHP_WKTMR_PRESCALER_VAL_reserved0_SHIFT                   25

/* WKTMR :: PRESCALER_VAL :: wktmr_prescaler_val [24:00] */
#define BCHP_WKTMR_PRESCALER_VAL_wktmr_prescaler_val_MASK          0x01ffffff
#define BCHP_WKTMR_PRESCALER_VAL_wktmr_prescaler_val_SHIFT         0
#define BCHP_WKTMR_PRESCALER_VAL_wktmr_prescaler_val_DEFAULT       0

#endif /* #ifndef BCHP_WKTMR_H__ */

/* End of File */
