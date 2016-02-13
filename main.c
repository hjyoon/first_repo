#include "custom.h"

int main(void)
{
	SourceDataDirector sourceDirector = { 0 };
	PartTimeDirector partTimeDirector = { 0 };

	while (Input_Data(&sourceDirector)) {
		printf("다시 입력해주세요.\n");
	}

	Processing_Data(&partTimeDirector, &sourceDirector);

	Sort_Data(&partTimeDirector);
	
	printf("%d\n", Calculate_Longest_BreakTime(&partTimeDirector));

	Free_Memory(&partTimeDirector, &sourceDirector);

	return 0;
}
