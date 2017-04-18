/******************************************************************************
 *
 * Copyright(c) 2009-2010  Realtek Corporation.
 *
 *****************************************************************************/

#ifndef __RTW_WIFI_REGD_H__
#define __RTW_WIFI_REGD_H__

#if (LINUX_VERSION_CODE >= KERNEL_VERSION(4, 8, 0))
#define IEEE80211_BAND_2GHZ NL80211_BAND_2GHZ
#define IEEE80211_BAND_5GHZ NL80211_BAND_5GHZ
#define ieee80211_band nl80211_band
#define IEEE80211_NUM_BANDS 2
#endif

struct country_code_to_enum_rd {
	u16 countrycode;
	const char *iso_name;
};

enum country_code_type_t {
	COUNTRY_CODE_USER = 0,

	/*add new channel plan above this line */
	COUNTRY_CODE_MAX
};

int rtw_regd_init(_adapter *padapter);
void rtw_reg_notify_by_driver(_adapter *adapter);

#endif /* __RTW_WIFI_REGD_H__ */
