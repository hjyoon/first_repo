#include "custom.h"

int main(void)
{
	int inputNumber[7] = { 0, };
	int randomNumber[7] = { 0, };

	Input_Number(inputNumber);
	Randomize_Number(&randomNumber);

	printf("Your rank is %d\n", Compare_Number(inputNumber, randomNumber));

	return 0;
}
