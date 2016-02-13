#include "custom.h"

int Check_Data(int start_temp, int end_temp)
{
	if (start_temp < START_WORK_TIME || end_temp > END_WORK_TIME || start_temp > end_temp) {
		return -1;
	}

	return 0;
}