#include "custom.h"

int Free_Memory(PartTimeDirector* partTimeDirector, SourceDataDirector* sourceDirector)
{
	free(sourceDirector->source);
	free(partTimeDirector->partTime);

	return 0;
}