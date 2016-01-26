#include "custom.h"

int main(void)
{
	int inputNumber[7] = { 0, };
	int randomNumber[7] = { 0, };

	while(Input_Number(inputNumber)) {
		printf("Please, Input between 1 and 45 numbers\n");
	}

	Randomize_Number(randomNumber);

	Print_Win_Number(randomNumber);
	printf("Your rank is %d\n", Compare_Number(inputNumber, randomNumber));

	return 0;
}
