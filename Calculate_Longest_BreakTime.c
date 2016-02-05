#include "custom.h"

int Calculate_Longest_BreakTime(PartTimeDirector* partTimeDirector)
{
	int i = 0;
	int max = 0;
	int criteria_start = (START_WORK_TIME / 100) * 60 + (START_WORK_TIME % 100);
	int criteria_end = 0;

	for (i = 0; i < partTimeDirector->size; i++) {
		criteria_end = partTimeDirector->partTime[i].StartTime.total_minute - TERM_MINUTE;
		max = (criteria_end - criteria_start) > max ? (criteria_end - criteria_start) : max;
		criteria_start = partTimeDirector->partTime[i].EndTime.total_minute + TERM_MINUTE;
	}

	return max;
}