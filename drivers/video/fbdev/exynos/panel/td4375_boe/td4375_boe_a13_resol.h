/*
 * linux/drivers/video/fbdev/exynos/panel/td4375_boe/td4375_boe_a13_resol.h
 *
 * Header file for Panel Driver
 *
 * Copyright (c) 2019 Samsung Electronics
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef __TD4375_A13_RESOL_H__
#define __TD4375_A13_RESOL_H__

#include "../panel.h"

static struct panel_resol td4375_boe_a13_resol[] = {
	{
		.w = 720,
		.h = 1600,
		.comp_type = PN_COMP_TYPE_NONE,
	},
};
#endif /* __TD4375_A13_RESOL_H__ */
