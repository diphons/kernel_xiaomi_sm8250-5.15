/* SPDX-License-Identifier: GPL-2.0-only */
/*
 * Copyright (c) 2019-2020, The Linux Foundation. All rights reserved.
 * Copyright (c) 2023 Qualcomm Innovation Center, Inc. All rights reserved.
 */

#ifndef _CAM_CSIPHY_1_2_2_HWREG_H_
#define _CAM_CSIPHY_1_2_2_HWREG_H_

#include "../cam_csiphy_dev.h"

struct csiphy_reg_parms_t csiphy_v1_2_2 = {
	.mipi_csiphy_interrupt_status0_addr = 0x8B0,
	.mipi_csiphy_interrupt_clear0_addr = 0x858,
	.mipi_csiphy_glbl_irq_cmd_addr = 0x828,
	.csiphy_interrupt_status_size = 11,
	.csiphy_common_array_size = 8,
	.csiphy_reset_array_size = 5,
	.csiphy_2ph_config_array_size = 18,
	.csiphy_3ph_config_array_size = 33,
	.csiphy_2ph_clock_lane = 0x1,
	.csiphy_2ph_combo_ck_ln = 0x10,
};

struct csiphy_reg_t csiphy_common_reg_1_2_2[] = {
	{0x0814, 0xd5, 0x00, CSIPHY_LANE_ENABLE},
	{0x0818, 0x01, 0x00, CSIPHY_DEFAULT_PARAMS},
	{0x081C, 0x5A, 0x00, CSIPHY_DEFAULT_PARAMS},
	{0x0800, 0x03, 0x01, CSIPHY_DEFAULT_PARAMS},
	{0x0800, 0x02, 0x00, CSIPHY_DEFAULT_PARAMS},
	{0x0884, 0x00, 0x00, CSIPHY_DEFAULT_PARAMS},
	{0x088C, 0x00, 0x00, CSIPHY_DEFAULT_PARAMS},
	{0x0824, 0x72, 0x00, CSIPHY_2PH_REGS},
};

struct csiphy_reg_t
csiphy_2ph_v1_2_2_combo_mode_reg[MAX_LANES][MAX_SETTINGS_PER_LANE] = {
	{
		{0x0030, 0x00, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x002C, 0x01, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0034, 0x0F, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0010, 0x52, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x001C, 0x0A, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0014, 0x60, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0028, 0x00, 0x00, CSIPHY_DNP_PARAMS},
		{0x003C, 0xB8, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0000, 0x91, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0004, 0x0C, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0020, 0x00, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0024, 0x00, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0008, 0x10, 0x00, CSIPHY_SETTLE_CNT_LOWER_BYTE},
		{0x0038, 0xFE, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x005C, 0xC0, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0060, 0x0D, 0x00, CSIPHY_SKEW_CAL},
		{0x0064, 0x7F, 0x00, CSIPHY_DNP_PARAMS},
		{0x0800, 0x00, 0x00, CSIPHY_DEFAULT_PARAMS},
	},
	{
		{0x0730, 0x00, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x072C, 0x01, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0734, 0x0F, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0710, 0x52, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x071C, 0x0A, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0714, 0x60, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0728, 0x04, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x073C, 0xB8, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0700, 0x80, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0704, 0x0C, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0720, 0x00, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0724, 0x00, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0708, 0x10, 0x00, CSIPHY_SETTLE_CNT_LOWER_BYTE},
		{0x070C, 0xFF, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0738, 0x1F, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0800, 0x00, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0000, 0x00, 0x00, CSIPHY_DNP_PARAMS},
		{0x0000, 0x00, 0x00, CSIPHY_DNP_PARAMS},
	},
	{
		{0x0230, 0x00, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x022C, 0x01, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0234, 0x0F, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0210, 0x52, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x021C, 0x0A, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0214, 0x60, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0228, 0x00, 0x00, CSIPHY_DNP_PARAMS},
		{0x023C, 0xB8, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0200, 0x91, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0204, 0x0C, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0220, 0x00, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0224, 0x00, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0208, 0x10, 0x00, CSIPHY_SETTLE_CNT_LOWER_BYTE},
		{0x0238, 0xFE, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x025C, 0xC0, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0260, 0x0D, 0x00, CSIPHY_SKEW_CAL},
		{0x0264, 0x7F, 0x00, CSIPHY_DNP_PARAMS},
		{0x0800, 0x00, 0x00, CSIPHY_DEFAULT_PARAMS},
	},
	{
		{0x0430, 0x00, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x042C, 0x01, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0434, 0x0F, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0410, 0x52, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x041C, 0x0A, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0414, 0x60, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0428, 0x0A, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x043C, 0xB8, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0400, 0x91, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0404, 0x0C, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0420, 0x00, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0424, 0x00, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0408, 0x10, 0x00, CSIPHY_SETTLE_CNT_LOWER_BYTE},
		{0x0438, 0xFE, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x045C, 0xC0, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0460, 0x0D, 0x00, CSIPHY_SKEW_CAL},
		{0x0464, 0x7F, 0x00, CSIPHY_DNP_PARAMS},
		{0x0800, 0x00, 0x00, CSIPHY_DEFAULT_PARAMS},
	},
	{
		{0x0630, 0x00, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x062C, 0x01, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0634, 0x0F, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0610, 0x52, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x061C, 0x0A, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0614, 0x60, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0628, 0x0E, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x063C, 0xB8, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0600, 0x80, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0604, 0x0C, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0620, 0x00, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0624, 0x00, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0608, 0x10, 0x00, CSIPHY_SETTLE_CNT_LOWER_BYTE},
		{0x060C, 0xFF, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0638, 0x1F, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0800, 0x00, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0000, 0x00, 0x00, CSIPHY_DNP_PARAMS},
		{0x0000, 0x00, 0x00, CSIPHY_DNP_PARAMS},
	},
};

#endif /* _CAM_CSIPHY_1_2_2_HWREG_H_ */
