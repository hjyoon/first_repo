#include "custom.h"

void Input_Number(int randomNumber[])
{
	int i = 0;
	int size = 0;

	size = sizeof(randomNumber);
	for (i = 0; i < size; i++) {
		scanf_s("%d", &randomNumber[i]);
	}
}
