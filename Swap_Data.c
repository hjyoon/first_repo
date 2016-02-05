#include "custom.h"

int Swap_Data(PartTime* partTime_A, PartTime* partTime_B)
{
	PartTime temp = { 0 };

	temp = *partTime_A;
	*partTime_A = *partTime_B;
	*partTime_B = temp;

	return 0;
}