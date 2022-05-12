/*
 * nl802154.h
 *
 * Copyright (C) 2007, 2008 Siemens AG
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2
 * as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */

#include <linux/kernel.h>
#include <net/netlink.h>
#include <linux/nl802154.h>

#define NLA_HW_ADDR NLA_U64

const struct nla_policy ieee802154_policy[IEEE802154_ATTR_MAX + 1] = {
	[IEEE802154_ATTR_DEV_NAME] = { .type = NLA_STRING, },
	[IEEE802154_ATTR_DEV_INDEX] = { .type = NLA_U32, },
	[IEEE802154_ATTR_PHY_NAME] = { .type = NLA_STRING, },

	[IEEE802154_ATTR_STATUS] = { .type = NLA_U8, },
	[IEEE802154_ATTR_SHORT_ADDR] = { .type = NLA_U16, },
	[IEEE802154_ATTR_HW_ADDR] = { .type = NLA_HW_ADDR, },
	[IEEE802154_ATTR_PAN_ID] = { .type = NLA_U16, },
	[IEEE802154_ATTR_CHANNEL] = { .type = NLA_U8, },
	[IEEE802154_ATTR_BCN_ORD] = { .type = NLA_U8, },
	[IEEE802154_ATTR_SF_ORD] = { .type = NLA_U8, },
	[IEEE802154_ATTR_PAN_COORD] = { .type = NLA_U8, },
	[IEEE802154_ATTR_BAT_EXT] = { .type = NLA_U8, },
	[IEEE802154_ATTR_COORD_REALIGN] = { .type = NLA_U8, },
	[IEEE802154_ATTR_PAGE] = { .type = NLA_U8, },
	[IEEE802154_ATTR_DEV_TYPE] = { .type = NLA_U8, },
	[IEEE802154_ATTR_COORD_SHORT_ADDR] = { .type = NLA_U16, },
	[IEEE802154_ATTR_COORD_HW_ADDR] = { .type = NLA_HW_ADDR, },
	[IEEE802154_ATTR_COORD_PAN_ID] = { .type = NLA_U16, },
	[IEEE802154_ATTR_SRC_SHORT_ADDR] = { .type = NLA_U16, },
	[IEEE802154_ATTR_SRC_HW_ADDR] = { .type = NLA_HW_ADDR, },
	[IEEE802154_ATTR_SRC_PAN_ID] = { .type = NLA_U16, },
	[IEEE802154_ATTR_DEST_SHORT_ADDR] = { .type = NLA_U16, },
	[IEEE802154_ATTR_DEST_HW_ADDR] = { .type = NLA_HW_ADDR, },
	[IEEE802154_ATTR_DEST_PAN_ID] = { .type = NLA_U16, },

	[IEEE802154_ATTR_CAPABILITY] = { .type = NLA_U8, },
	[IEEE802154_ATTR_REASON] = { .type = NLA_U8, },
	[IEEE802154_ATTR_SCAN_TYPE] = { .type = NLA_U8, },
	[IEEE802154_ATTR_CHANNELS] = { .type = NLA_U32, },
	[IEEE802154_ATTR_DURATION] = { .type = NLA_U8, },
	[IEEE802154_ATTR_ED_LIST] = { .len = 27 },
	[IEEE802154_ATTR_CHANNEL_PAGE_LIST] = { .len = 32 * 4, },

	[IEEE802154_ATTR_TXPOWER] = { .type = NLA_S8, },
	[IEEE802154_ATTR_LBT_ENABLED] = { .type = NLA_U8, },
	[IEEE802154_ATTR_CCA_MODE] = { .type = NLA_U8, },
	[IEEE802154_ATTR_CCA_ED_LEVEL] = { .type = NLA_S32, },
	[IEEE802154_ATTR_CSMA_RETRIES] = { .type = NLA_U8, },
	[IEEE802154_ATTR_CSMA_MIN_BE] = { .type = NLA_U8, },
	[IEEE802154_ATTR_CSMA_MAX_BE] = { .type = NLA_U8, },

	[IEEE802154_ATTR_FRAME_RETRIES] = { .type = NLA_S8, },

	[IEEE802154_ATTR_LLSEC_ENABLED] = { .type = NLA_U8, },
	[IEEE802154_ATTR_LLSEC_SECLEVEL] = { .type = NLA_U8, },
	[IEEE802154_ATTR_LLSEC_KEY_MODE] = { .type = NLA_U8, },
	[IEEE802154_ATTR_LLSEC_KEY_SOURCE_SHORT] = { .type = NLA_U32, },
	[IEEE802154_ATTR_LLSEC_KEY_SOURCE_EXTENDED] = { .type = NLA_HW_ADDR, },
	[IEEE802154_ATTR_LLSEC_KEY_ID] = { .type = NLA_U8, },
	[IEEE802154_ATTR_LLSEC_FRAME_COUNTER] = { .type = NLA_U32 },
	[IEEE802154_ATTR_LLSEC_KEY_BYTES] = { .len = 16, },
	[IEEE802154_ATTR_LLSEC_KEY_USAGE_FRAME_TYPES] = { .type = NLA_U8, },
	[IEEE802154_ATTR_LLSEC_KEY_USAGE_COMMANDS] = { .len = 258 / 8 },
	[IEEE802154_ATTR_LLSEC_FRAME_TYPE] = { .type = NLA_U8, },
	[IEEE802154_ATTR_LLSEC_CMD_FRAME_ID] = { .type = NLA_U8, },
	[IEEE802154_ATTR_LLSEC_SECLEVELS] = { .type = NLA_U8, },
	[IEEE802154_ATTR_LLSEC_DEV_OVERRIDE] = { .type = NLA_U8, },
	[IEEE802154_ATTR_LLSEC_DEV_KEY_MODE] = { .type = NLA_U8, },
};
