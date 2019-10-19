#include <ft.h>

size_t      ft_strlcpy(char *dest, const char *src, size_t len)
{
    char            *d;
	const char      *s;
	size_t          n;
	
    d = dest;
    s = src;
    n = len;
    if (n != 0)
		while (--n != 0 && (*d++ = *s++) != '\0')
            ;
	if (n == 0 && len != 0)
		*d = '\0';
	while (n == 0 && *s++)
		;
	return(s - src - 1);
}