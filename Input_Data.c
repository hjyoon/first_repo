#include "custom.h"

int Input_Data(SourceDataDirector* sourceDirector)
{
	int cnt = 0;
	int i = 0;

	scanf_s("%d", &cnt);

	sourceDirector->size = cnt;
	sourceDirector->source = (SourceData*)malloc(sizeof(SourceData) * cnt);

	if (sourceDirector->source == NULL) {
		printf("메모리 할당 에러\n");
		exit(-1);
	}

	memset(sourceDirector->source, 0, sizeof(SourceData) * cnt);

	for (int i = 0; i < cnt; i++) {
		int start_temp = 0, end_temp = 0;
		scanf_s("%d%d", &start_temp, &end_temp);
		if (Check_Data(start_temp, end_temp)) {
			return -1;
		} else {
			sourceDirector->source[i].start = start_temp;
			sourceDirector->source[i].end = end_temp;
		}
	}

	return 0;
}