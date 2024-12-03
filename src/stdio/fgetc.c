#ifndef DISABLE_STD_FLIE
#include <stdio.h>
#include "getc.h"

int fgetc(FILE *f)
{
	return do_getc(f);
}
#endif // DISABLE_STD_FLIE
