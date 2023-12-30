#include "memory.h"
#include <stdlib.h>

void* reallocate(void* pointer, size_t oldSize, size_t newSize)
{
	(void)oldSize; // will be needed later on
	if (newSize == 0) {
		free(pointer);
		return NULL;
	}

	void* out = realloc(pointer, newSize);
	if (!out) exit(1);

	return out;
}
