#ifndef DISABLE_STD_FLIE
#include "stdio_impl.h"

int fgetpos(FILE *restrict f, fpos_t *restrict pos)
{
	off_t off = __ftello(f);
	if (off < 0) return -1;
	*(long long *)pos = off;
	return 0;
}
#endif // DISABLE_STD_FLIE
