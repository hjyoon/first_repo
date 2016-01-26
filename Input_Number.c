#include "custom.h"

int Input_Number(int randomNumber[])
{
	int i = 0;
	int temp = 0;

	for (i = 0; i < 7; i++) {
		scanf_s("%d", &temp);

		if (temp > 0 && temp <= 45) {
			randomNumber[i] = temp;
		} else {
			return -1;
		}
	}

	return 0;
}
