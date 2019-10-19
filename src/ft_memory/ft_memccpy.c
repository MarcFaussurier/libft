#include <ft.h>

void    *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
    char *q = dest;
	const char *p = src;
	char ch;

	while (n--) {
		*q++ = ch = *p++;
		if (ch == (char)c)
			return q;
	}

	return NULL;		/* No instance of "c" found */
}
