#include <ft.h>

char        *ft_strchr(const char *s, int c)
{
    s -= 1;
    while (*++s != (char)c)
		if (*s == '\0')
			return NULL;
	return (char *)s;
}
