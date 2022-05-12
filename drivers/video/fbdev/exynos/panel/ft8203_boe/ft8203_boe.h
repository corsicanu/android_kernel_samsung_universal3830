/*
 * linux/drivers/video/fbdev/exynos/panel/ft8203_boe/ft8203_boe.h
 *
 * Header file for S6E3HAB Dimming Driver
 *
 * Copyright (c) 2016 Samsung Electronics
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef __FT8203_H__
#define __FT8203_H__

#include <linux/types.h>
#include <linux/kernel.h>

/*
 * OFFSET ==> OFS means N-param - 1
 * <example>
 * XXX 1st param => FT8203_XXX_OFS (0)
 * XXX 2nd param => FT8203_XXX_OFS (1)
 * XXX 36th param => FT8203_XXX_OFS (35)
 */

#define FT8203_ID_REG				0x04 /* no use */
#define FT8203_ID_OFS				0
#define FT8203_ID_LEN				(PANEL_ID_LEN)

#define FT8203_ID_DA_REG				0xDA
#define FT8203_ID_DA_OFS				0
#define FT8203_ID_DA_LEN				1

#define FT8203_ID_DB_REG				0xDB
#define FT8203_ID_DB_OFS				0
#define FT8203_ID_DB_LEN				1

#define FT8203_ID_DC_REG				0xDC
#define FT8203_ID_DC_OFS				0
#define FT8203_ID_DC_LEN				1

#define FT8203_NR_LUMINANCE		(256)
#define FT8203_NR_HBM_LUMINANCE	(51)

#define FT8203_TOTAL_NR_LUMINANCE (FT8203_NR_LUMINANCE + FT8203_NR_HBM_LUMINANCE)

enum {
	BRT_MAPTBL,
	MAX_MAPTBL,
};

enum {
	READ_ID,
	READ_ID_DA,
	READ_ID_DB,
	READ_ID_DC,
};

enum {
	RES_ID,
};

static u8 FT8203_ID[FT8203_ID_LEN];

static struct rdinfo ft8203_boe_rditbl[] = {
	[READ_ID_DA] = RDINFO_INIT(id, DSI_PKT_TYPE_RD, FT8203_ID_DA_REG, FT8203_ID_DA_OFS, FT8203_ID_DA_LEN),
	[READ_ID_DB] = RDINFO_INIT(id, DSI_PKT_TYPE_RD, FT8203_ID_DB_REG, FT8203_ID_DB_OFS, FT8203_ID_DB_LEN),
	[READ_ID_DC] = RDINFO_INIT(id, DSI_PKT_TYPE_RD, FT8203_ID_DC_REG, FT8203_ID_DC_OFS, FT8203_ID_DC_LEN),

};

static DECLARE_RESUI(id) = {
	{.rditbl = &ft8203_boe_rditbl[READ_ID_DA], .offset = 0},
	{.rditbl = &ft8203_boe_rditbl[READ_ID_DB], .offset = 1},
	{.rditbl = &ft8203_boe_rditbl[READ_ID_DC], .offset = 2},
};

static struct resinfo ft8203_boe_restbl[] = {
	[RES_ID] = RESINFO_INIT(id, FT8203_ID, RESUI(id)),
};

static int init_brightness_table(struct maptbl *tbl);
static int getidx_brt_table(struct maptbl *);
static void copy_common_maptbl(struct maptbl *, u8 *);

#endif /* __FT8203_H__ */
