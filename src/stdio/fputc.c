#ifndef DISABLE_STD_FLIE
#include <stdio.h>
#include "putc.h"

int fputc(int c, FILE *f)
{
	return do_putc(c, f);
}
#endif // DISABLE_STD_FLIE
