#include "custom.h

void Input_Number(int[]);
void Randomize_Number(int[]);
int Compare_Number(int[], int[]);

int main(void)
{
	int inputNumber[7] = { 0, };
	int randomNumber[7] = { 0, };

	Input_Number(inputNumber);
	Randomize_Number(randomNumber);

	printf("Your rank is %d\n", Compare_Number(inputNumber, randomNumber));

	return 0;
}
