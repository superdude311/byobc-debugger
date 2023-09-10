#pragma once

#define VERSION_YEAR  2023
#define VERSION_MONTH 9
#define VERSION_DAY   8

struct VersionInfo {
	uint16_t year;
	uint8_t  month;
	uint8_t  day;
};

const VersionInfo VERSION = { VERSION_YEAR, VERSION_MONTH, VERSION_DAY };