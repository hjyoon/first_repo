#include "custom.h"

int Processing_Data(PartTimeDirector* partTimeDirector, SourceDataDirector* sourceDirector)
{
	int i = 0;

	partTimeDirector->partTime = (PartTimeDirector*)malloc(sizeof(PartTimeDirector)*sourceDirector->size);

	if (partTimeDirector->partTime == NULL) {
		printf("메모리 할당 에러\n");
		exit(-1);
	}

	memset(partTimeDirector->partTime, 0, sizeof(PartTimeDirector) * sourceDirector->size);

	for (i = 0; i < sourceDirector->size; i++) {
		int temp = sourceDirector->source[i].start;
		partTimeDirector->partTime[i].StartTime.hour = temp / 100;
		partTimeDirector->partTime[i].StartTime.minute = temp % 100;
		partTimeDirector->partTime[i].StartTime.total_minute = (temp / 100) * 60 + (temp % 100);

		temp = sourceDirector->source[i].end;
		partTimeDirector->partTime[i].EndTime.hour = temp / 100;
		partTimeDirector->partTime[i].EndTime.minute = temp % 100;
		partTimeDirector->partTime[i].EndTime.total_minute = (temp / 100) * 60 + (temp % 100);
	}

	partTimeDirector->size = sourceDirector->size;

	return 0;
}