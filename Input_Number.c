#include "custom.h"

void Input_Number(int randomNumber[])
{
	int i = 0;

	for (i = 0; i < 7; i++) {
		scanf_s("%d", &randomNumber[i]);
	}
}
