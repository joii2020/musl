#ifndef DISABLE_STD_FLIE
#include "stdio_impl.h"

int fsetpos(FILE *f, const fpos_t *pos)
{
	return __fseeko(f, *(const long long *)pos, SEEK_SET);
}
#endif // DISABLE_STD_FLIE
