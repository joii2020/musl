#ifndef DISABLE_STD_FLIE
#include "stdio_impl.h"

void clearerr(FILE *f)
{
	FLOCK(f);
	f->flags &= ~(F_EOF|F_ERR);
	FUNLOCK(f);
}

weak_alias(clearerr, clearerr_unlocked);
#endif // DISABLE_STD_FLIE
