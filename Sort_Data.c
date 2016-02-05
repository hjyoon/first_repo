#include "custom.h"

int Sort_Data(PartTimeDirector* partTimeDirector)
{
	int i = 0, j = 0;

	for (i = 0; i < partTimeDirector->size-1; i++) {
		for (j = i; j < partTimeDirector->size-1; j++) {
			if(partTimeDirector->partTime[j].StartTime.total_minute > partTimeDirector->partTime[j + 1].StartTime.total_minute) {
				Swap_Data(&partTimeDirector->partTime[j], &partTimeDirector->partTime[j+1]);
			}
		}
	}
	
	return 0;
}