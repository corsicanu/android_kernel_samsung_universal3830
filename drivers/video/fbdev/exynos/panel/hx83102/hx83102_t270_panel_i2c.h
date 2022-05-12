#ifndef __HX83102_T270_PANEL_I2C_H__
#define __HX83102_T270_PANEL_I2C_H__

#include "../panel_drv.h"

struct i2c_data hx83102_t270_i2c_data = {
	.vendor = "INTERSIL",
	.model = "ISL98608",
	.addr_len = 0x01,
	.data_len = 0x01,
};

#endif
