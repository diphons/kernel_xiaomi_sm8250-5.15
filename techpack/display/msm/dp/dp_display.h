/* SPDX-License-Identifier: GPL-2.0-only */
/*
 * Copyright (c) 2021-2024, Qualcomm Innovation Center, Inc. All rights reserved.
 * Copyright (c) 2017-2021, The Linux Foundation. All rights reserved.
 */

#ifndef _DP_DISPLAY_H_
#define _DP_DISPLAY_H_

#include <linux/list.h>
#include <drm/sde_drm.h>

#include "dp_panel.h"


enum dp_drv_state {
	PM_DEFAULT,
	PM_SUSPEND,
};

struct dp_mst_drm_cbs {
	void (*hpd)(void *display, bool hpd_status);
	void (*hpd_irq)(void *display);
	void (*set_drv_state)(void *dp_display,
			enum dp_drv_state mst_state);
	int (*set_mgr_state)(void *dp_display, bool state);
};

struct dp_mst_drm_install_info {
	void *dp_mst_prv_info;
	const struct dp_mst_drm_cbs *cbs;
};

struct dp_mst_caps {
	bool has_mst;
	u32 max_streams_supported;
	u32 max_dpcd_transaction_bytes;
	struct drm_dp_aux *drm_aux;
};

struct dp_display {
	struct drm_device *drm_dev;
	struct dp_bridge *bridge;
	struct drm_connector *base_connector;
	void *base_dp_panel;
	bool is_sst_connected;
	bool is_mst_supported;
	bool dsc_cont_pps;
	bool is_connected;
	bool is_yuv_supported;
	bool yuv422_enable;
	u32 max_pclk_khz;
	void *dp_mst_prv_info;
	u32 max_mixer_count;
	u32 max_dsc_count;
	void *dp_ipc_log;
#ifdef CONFIG_DRM_CLIENT_BOOTSPLASH
	bool is_bootsplash_en;
#endif

	int (*enable)(struct dp_display *dp_display, void *panel);
	int (*post_enable)(struct dp_display *dp_display, void *panel);

	int (*pre_disable)(struct dp_display *dp_display, void *panel);
	int (*disable)(struct dp_display *dp_display, void *panel);

	int (*set_mode)(struct dp_display *dp_display, void *panel,
			struct dp_display_mode *mode);
	enum drm_mode_status (*validate_mode)(struct dp_display *dp_display,
			void *panel, struct drm_display_mode *mode,
			const struct msm_resource_caps_info *avail_res);
	int (*get_modes)(struct dp_display *dp_display, void *panel,
		struct dp_display_mode *dp_mode);
	int (*get_dc_support)(struct dp_display *dp,
		u32 mode_pclk_khz, u32 out_format, bool dc_enable);
	int (*prepare)(struct dp_display *dp_display, void *panel);
	int (*unprepare)(struct dp_display *dp_display, void *panel);
	int (*request_irq)(struct dp_display *dp_display);
	struct dp_debug *(*get_debug)(struct dp_display *dp_display);
	void (*post_open)(struct dp_display *dp_display);
	int (*config_hdr)(struct dp_display *dp_display, void *panel,
				struct drm_msm_ext_hdr_metadata *hdr_meta,
				bool dhdr_update);
	int (*set_colorspace)(struct dp_display *dp_display, void *panel,
				u32 colorspace);
	int (*post_init)(struct dp_display *dp_display);
	int (*mst_install)(struct dp_display *dp_display,
			struct dp_mst_drm_install_info *mst_install_info);
	int (*mst_uninstall)(struct dp_display *dp_display);
	int (*mst_connector_install)(struct dp_display *dp_display,
			struct drm_connector *connector);
	int (*mst_connector_uninstall)(struct dp_display *dp_display,
			struct drm_connector *connector);
	int (*mst_connector_update_edid)(struct dp_display *dp_display,
			struct drm_connector *connector,
			struct edid *edid);
	int (*mst_connector_update_link_info)(struct dp_display *dp_display,
			struct drm_connector *connector);
	int (*mst_get_fixed_topology_port)(struct dp_display *dp_display,
			u32 strm_id, u32 *port_num);
	int (*get_mst_caps)(struct dp_display *dp_display,
			struct dp_mst_caps *mst_caps);
	int (*set_stream_info)(struct dp_display *dp_display, void *panel,
			u32 strm_id, u32 start_slot, u32 num_slots, u32 pbn,
			int vcpi);
	void (*convert_to_dp_mode)(struct dp_display *dp_display, void *panel,
			const struct drm_display_mode *drm_mode,
			struct dp_display_mode *dp_mode);
	int (*update_pps)(struct dp_display *dp_display,
			struct drm_connector *connector, char *pps_cmd);
	void (*wakeup_phy_layer)(struct dp_display *dp_display,
			bool wakeup);
	int (*get_available_dp_resources)(struct dp_display *dp_display,
			const struct msm_resource_caps_info *avail_res,
			struct msm_resource_caps_info *max_dp_avail_res);
	int (*get_display_type)(struct dp_display *dp_display,
			const char **display_type);
};

void *get_ipc_log_context(void);

#if IS_ENABLED(CONFIG_DRM_MSM_DP)
int dp_display_get_num_of_displays(void);
int dp_display_get_displays(void **displays, int count);
int dp_display_get_num_of_streams(void);
int dp_display_mmrm_callback(struct mmrm_client_notifier_data *notifier_data);
bool dp_connector_mode_needs_full_range(void *display);
#else
static inline int dp_display_get_num_of_displays(void)
{
	return 0;
}
static inline int dp_display_get_displays(void **displays, int count)
{
	return 0;
}
static inline int dp_display_get_num_of_streams(void)
{
	return 0;
}
static inline int dp_connector_update_pps(struct drm_connector *connector,
		char *pps_cmd, void *display)
{
	return 0;
}
static inline int dp_display_mmrm_callback(struct mmrm_client_notifier_data *notifier_data)
{
	return 0;
}
#endif /* CONFIG_DRM_MSM_DP */

#ifdef CONFIG_DRM_CLIENT_BOOTSPLASH
void drm_bootsplash_client_register(struct drm_device *dev);
#endif /* CONFIG_DRM_CLIENT_BOOTSPLASH */
#endif /* _DP_DISPLAY_H_ */
