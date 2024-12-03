#ifndef DISABLE_STD_FLIE
#include <stdio.h>

ssize_t getline(char **restrict s, size_t *restrict n, FILE *restrict f)
{
	return getdelim(s, n, '\n', f);
}
#endif // DISABLE_STD_FLIE