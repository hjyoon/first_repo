#pragma once

#include <stdio.h>
#include <malloc.h>
#include <memory.h>

#define TERM_MINUTE 10
#define START_WORK_TIME 1000
#define END_WORK_TIME 2200

int Input_Data(SourceDataDirector* sourceDirector);
int Processing_Data(PartTimeDirector* partTimeDirector, SourceDataDirector* sourceDirector);
int Sort_Data(PartTimeDirector* partTimeDirector);
int Calculate_Longest_BreakTime(PartTimeDirector* partTimeDirector);
int Check_Data(int start_temp, int end_temp);
int Swap_Data(PartTime* partTime_A, PartTime* partTime_B);
int Free_Memory(PartTimeDirector* partTimeDirector, SourceDataDirector* sourceDirector);

typedef struct PartTimeType {
	struct StartType {
		int hour;
		int minute;
		int total_minute;
	}StartTime;
	struct EndType {
		int hour;
		int minute;
		int total_minute;
	}EndTime;
}PartTime;

typedef struct PartTimeDirectorType {
	PartTime* partTime;
	int size;
}PartTimeDirector;

typedef struct SourceDataType {
	int start;
	int end;
}SourceData;

typedef struct SourceDataDirectorType {
	SourceData* source;
	int size;
}SourceDataDirector;