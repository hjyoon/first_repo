#include "custom.h"

void Print_Win_Number(int randomNumber[])
{
	int i = 0;
	int size = 0;

	size = sizeof(randomNumber);

	printf("Winning Numbers\n");
	for (i = 0; i < size-1; i++) {
		printf("%d ", randomNumber[i]);
	}
	printf("+Bonus %d\n", randomNumber[size - 1]);
}