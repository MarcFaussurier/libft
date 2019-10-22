#include "./../../inc/ft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
    size_t          i;
    unsigned char   *sc;

    sc = (unsigned char*) s;
    i = -1;
    while (++i < n)
        if (*(sc + i) == (unsigned char) c)
            return ((void*)s + i);
    return (NULL);
}
