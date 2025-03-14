/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Support for Intel Camera Imaging ISP subsystem.
 * Copyright (c) 2015, Intel Corporation.
 */

#ifndef _input_switch_2400_defs_h
#define _input_switch_2400_defs_h

#define _HIVE_INPUT_SWITCH_GET_LUT_REG_ID(ch_id, fmt_type) (((ch_id) * 2) + ((fmt_type) >= 16))
#define _HIVE_INPUT_SWITCH_GET_LUT_REG_LSB(fmt_type)        (((fmt_type) % 16) * 2)

#define HIVE_INPUT_SWITCH_SELECT_NO_OUTPUT   0
#define HIVE_INPUT_SWITCH_SELECT_IF_PRIM     1
#define HIVE_INPUT_SWITCH_SELECT_IF_SEC      2
#define HIVE_INPUT_SWITCH_SELECT_STR_TO_MEM  3
#define HIVE_INPUT_SWITCH_VSELECT_NO_OUTPUT  0
#define HIVE_INPUT_SWITCH_VSELECT_IF_PRIM    1
#define HIVE_INPUT_SWITCH_VSELECT_IF_SEC     2
#define HIVE_INPUT_SWITCH_VSELECT_STR_TO_MEM 4

#endif /* _input_switch_2400_defs_h */
