/* SPDX-License-Identifier: GPL-2.0-only */
/*
 * Copyright (c) 2018-2021, The Linux Foundation. All rights reserved.
 */

#ifndef __H_CVP_HFI_H__
#define __H_CVP_HFI_H__

//#include <media/msm_media_info.h>
#include "cvp_hfi_helper.h"
#include "cvp_hfi_api.h"
#include "cvp_comm_def.h"

#define HFI_CMD_SESSION_CVP_START	\
	(HFI_DOMAIN_BASE_CVP + HFI_ARCH_COMMON_OFFSET +	\
	HFI_CMD_START_OFFSET + 0x1000)

#define  HFI_CMD_SESSION_CVP_SET_BUFFERS\
	(HFI_CMD_SESSION_CVP_START + 0x001)
#define  HFI_CMD_SESSION_CVP_RELEASE_BUFFERS\
	(HFI_CMD_SESSION_CVP_START + 0x002)

#define  HFI_CMD_SESSION_CVP_DS\
	(HFI_CMD_SESSION_CVP_START + 0x003)
#define  HFI_CMD_SESSION_CVP_HCD_FRAME\
	(HFI_CMD_SESSION_CVP_START + 0x004)
#define  HFI_CMD_SESSION_CVP_HCD_CONFIG\
	(HFI_CMD_SESSION_CVP_START + 0x005)
#define  HFI_CMD_SESSION_CVP_CV_HOG_FRAME\
	(HFI_CMD_SESSION_CVP_START + 0x006)
#define  HFI_CMD_SESSION_CVP_CV_HOG_CONFIG\
	(HFI_CMD_SESSION_CVP_START + 0x007)
#define  HFI_CMD_SESSION_CVP_SVM\
	(HFI_CMD_SESSION_CVP_START + 0x008)
#define  HFI_CMD_SESSION_CVP_NCC_FRAME\
	(HFI_CMD_SESSION_CVP_START + 0x009)
#define  HFI_CMD_SESSION_CVP_NCC_CONFIG\
	(HFI_CMD_SESSION_CVP_START + 0x00A)
#define  HFI_CMD_SESSION_CVP_DFS_FRAME\
	(HFI_CMD_SESSION_CVP_START + 0x00B)
#define  HFI_CMD_SESSION_CVP_DFS_CONFIG\
	(HFI_CMD_SESSION_CVP_START + 0x00C)
#define  HFI_CMD_SESSION_CVP_FTEXT\
	(HFI_CMD_SESSION_CVP_START + 0x00F)

/* ==========CHAINED OPERATIONS===================*/
#define  HFI_CMD_SESSION_CVP_CV_HOG_SVM_FRAME\
	(HFI_CMD_SESSION_CVP_START + 0x010)
#define  HFI_CMD_SESSION_CVP_CV_HOG_SVM_CONFIG\
	(HFI_CMD_SESSION_CVP_START + 0x011)
#define  HFI_CMD_SESSION_CVP_CV_HOG_SVM_HCD_FRAME\
	(HFI_CMD_SESSION_CVP_START + 0x012)
#define  HFI_CMD_SESSION_CVP_CV_HOG_SVM_HCD_CONFIG\
	(HFI_CMD_SESSION_CVP_START + 0x013)
#define  HFI_CMD_SESSION_CVP_OPTICAL_FLOW\
	(HFI_CMD_SESSION_CVP_START + 0x014)

/* ===========USECASE OPERATIONS===============*/
#define  HFI_CMD_SESSION_CVP_DC_FRAME\
	(HFI_CMD_SESSION_CVP_START + 0x030)
#define  HFI_CMD_SESSION_CVP_DC_CONFIG\
	(HFI_CMD_SESSION_CVP_START + 0x031)
#define  HFI_CMD_SESSION_CVP_DCM_FRAME\
	(HFI_CMD_SESSION_CVP_START + 0x034)
#define  HFI_CMD_SESSION_CVP_DCM_CONFIG\
	(HFI_CMD_SESSION_CVP_START + 0x035)

#define  HFI_CMD_SESSION_CVP_DME_CONFIG\
	(HFI_CMD_SESSION_CVP_START + 0x039)
#define  HFI_CMD_SESSION_CVP_DME_BASIC_CONFIG\
	(HFI_CMD_SESSION_CVP_START + 0x03B)
#define  HFI_CMD_SESSION_CVP_DME_FRAME\
	(HFI_CMD_SESSION_CVP_START + 0x03A)

#define  HFI_CMD_SESSION_CVP_CV_TME_CONFIG\
	(HFI_CMD_SESSION_CVP_START + 0x047)
#define  HFI_CMD_SESSION_CVP_CV_TME_FRAME\
	(HFI_CMD_SESSION_CVP_START + 0x048)
#define  HFI_CMD_SESSION_CVP_CV_OD_CONFIG\
	(HFI_CMD_SESSION_CVP_START + 0x049)
#define  HFI_CMD_SESSION_CVP_CV_OD_FRAME\
	(HFI_CMD_SESSION_CVP_START + 0x04A)
#define  HFI_CMD_SESSION_CVP_CV_ODT_CONFIG\
	(HFI_CMD_SESSION_CVP_START + 0x04B)
#define  HFI_CMD_SESSION_CVP_CV_ODT_FRAME\
	(HFI_CMD_SESSION_CVP_START + 0x04C)

#define  HFI_CMD_SESSION_CVP_SET_PERSIST_BUFFERS\
	(HFI_CMD_SESSION_CVP_START + 0x04D)
#define HFI_CMD_SESSION_CVP_PYS_HCD_CONFIG\
	(HFI_CMD_SESSION_CVP_START + 0x050)
#define HFI_CMD_SESSION_CVP_PYS_HCD_FRAME\
	(HFI_CMD_SESSION_CVP_START + 0x051)
#define HFI_CMD_SESSION_CVP_SET_MODEL_BUFFERS\
	(HFI_CMD_SESSION_CVP_START + 0x052)
#define HFI_CMD_SESSION_CVP_FD_CONFIG\
	(HFI_CMD_SESSION_CVP_START + 0x053)
#define HFI_CMD_SESSION_CVP_FD_FRAME\
	(HFI_CMD_SESSION_CVP_START + 0x054)
#define HFI_CMD_SESSION_CVP_RELEASE_PERSIST_BUFFERS\
	(HFI_CMD_SESSION_CVP_START + 0x055)
#define HFI_CMD_SESSION_CVP_FLUSH\
	(HFI_CMD_SESSION_CVP_START + 0x057)
#define  HFI_CMD_SESSION_CVP_ICA_FRAME\
	(HFI_CMD_SESSION_CVP_START + 0x100)
#define  HFI_CMD_SESSION_CVP_ICA_CONFIG\
	(HFI_CMD_SESSION_CVP_START + 0x101)


#define HFI_MSG_SESSION_CVP_START	\
	(HFI_DOMAIN_BASE_CVP + HFI_ARCH_COMMON_OFFSET +	\
	HFI_MSG_START_OFFSET + 0x1000)

#define HFI_MSG_SESSION_CVP_SET_BUFFERS\
	(HFI_MSG_SESSION_CVP_START + 0x001)
#define HFI_MSG_SESSION_CVP_RELEASE_BUFFERS \
	(HFI_MSG_SESSION_CVP_START + 0x002)
#define HFI_MSG_SESSION_CVP_DS\
	(HFI_MSG_SESSION_CVP_START + 0x003)
#define HFI_MSG_SESSION_CVP_HCD\
	(HFI_MSG_SESSION_CVP_START + 0x004)
#define HFI_MSG_SESSION_CVP_CV_HOG\
	(HFI_MSG_SESSION_CVP_START + 0x005)
#define HFI_MSG_SESSION_CVP_SVM\
	(HFI_MSG_SESSION_CVP_START + 0x006)
#define HFI_MSG_SESSION_CVP_NCC\
	(HFI_MSG_SESSION_CVP_START + 0x007)
#define HFI_MSG_SESSION_CVP_DFS\
	(HFI_MSG_SESSION_CVP_START + 0x008)
#define HFI_MSG_SESSION_CVP_TME\
	(HFI_MSG_SESSION_CVP_START + 0x009)
#define HFI_MSG_SESSION_CVP_FTEXT\
	(HFI_MSG_SESSION_CVP_START + 0x00A)

#define HFI_MSG_SESSION_CVP_ICA\
	(HFI_MSG_SESSION_CVP_START + 0x014)

#define HFI_MSG_SESSION_CVP_DME\
	(HFI_MSG_SESSION_CVP_START + 0x023)
#define HFI_MSG_SESSION_CVP_OPERATION_CONFIG (HFI_MSG_SESSION_CVP_START + 0x030)

#define HFI_MSG_SESSION_CVP_SET_PERSIST_BUFFERS\
	(HFI_MSG_SESSION_CVP_START + 0x034)
#define HFI_MSG_SESSION_CVP_SET_MODEL_BUFFERS\
	(HFI_MSG_SESSION_CVP_START + 0x036)
#define HFI_MSG_SESSION_CVP_FD\
	(HFI_MSG_SESSION_CVP_START + 0x037)
#define HFI_MSG_SESSION_CVP_RELEASE_PERSIST_BUFFERS\
	(HFI_MSG_SESSION_CVP_START + 0x038)
#define HFI_MSG_SESSION_CVP_FLUSH_DEPRECATE\
	(HFI_CMD_SESSION_CVP_START + 0x03A)
#define HFI_MSG_SESSION_CVP_FLUSH\
	(HFI_MSG_SESSION_CVP_START + 0x03A)

#define CVP_IFACEQ_MAX_PKT_SIZE       1024
#define CVP_IFACEQ_MED_PKT_SIZE       768
#define CVP_IFACEQ_MIN_PKT_SIZE       8
#define CVP_IFACEQ_VAR_SMALL_PKT_SIZE 100
#define CVP_IFACEQ_VAR_LARGE_PKT_SIZE 512
#define CVP_IFACEQ_VAR_HUGE_PKT_SIZE  (1024*12)

struct cvp_hfi_cmd_session_flush_packet {
	u32 size;
	u32 packet_type;
	u32 session_id;
	u32 flush_type;
};

struct cvp_hfi_cmd_session_get_property_packet {
	u32 size;
	u32 packet_type;
	u32 session_id;
	u32 num_properties;
	u32 rg_property_data[1];
};

struct cvp_hfi_msg_sys_session_abort_done_packet {
	u32 size;
	u32 packet_type;
	u32 session_id;
	u32 error_type;
};

struct cvp_hfi_msg_sys_property_info_packet {
	u32 size;
	u32 packet_type;
	u32 num_properties;
	u32 rg_property_data[128];
};

enum session_flags {
	SESSION_PAUSE = BIT(1),
};

struct cvp_hal_session {
	struct list_head list;
	void *session_id;
	u32 flags;
	void *device;
};

struct msm_cvp_fw {
	int cookie;
};

int cvp_hfi_process_msg_packet(u32 device_id,
	void *msg_hdr, struct msm_cvp_cb_info *info);

enum cvp_status cvp_hfi_process_sys_init_done_prop_read(
	struct cvp_hfi_msg_sys_init_done_packet *pkt,
	struct cvp_hal_sys_init_done *sys_init_done);

enum cvp_status hfi_process_session_init_done_prop_read(
	struct cvp_hfi_msg_sys_session_init_done_packet *pkt,
	struct cvp_hal_session_init_done *session_init_done);

#endif
