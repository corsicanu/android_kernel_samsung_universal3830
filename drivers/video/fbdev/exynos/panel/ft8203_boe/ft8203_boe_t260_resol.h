/*
 * linux/drivers/video/fbdev/exynos/panel/ft8203_boe/ft8203_boe_daimler2_resol.h
 *
 * Header file for Panel Driver
 *
 * Copyright (c) 2019 Samsung Electronics
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef __FT8203_T260_RESOL_H__
#define __FT8203_T260_RESOL_H__

#include "../panel.h"

static struct panel_resol ft8203_boe_t260_resol[] = {
	{
		.w = 720,
		.h = 1600,
		.comp_type = PN_COMP_TYPE_NONE,
	},
};
#endif /* __FT8203_T260_RESOL_H__ */
