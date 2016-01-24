#include "custom.h"

void Print_Win_Number(int randomNumber[])
{
	int i = 0;

	printf("Winning Numbers\n");
	for (i = 0; i < 6; i++) {
		printf("%d ", randomNumber[i]);
	}
	printf("+Bonus %d\n", randomNumber[6]);
}