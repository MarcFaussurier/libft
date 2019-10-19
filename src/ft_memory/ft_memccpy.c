#include <ft.h>

void    *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
    char 		*d;
	const char 	*s;
	char 		t;

	d = dest;
	s = src;
	while (n-- && ((*d++ = t = *s++) || 1)) 
		if (t == (char)c)
			return (d);
	return (NULL);
}
