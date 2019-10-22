#include "./../../inc/ft.h"

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char        *d;
    const unsigned char  *s;
    size_t              i;

    i = 0;
    d = (unsigned char*) dest;
    s = (unsigned char*) src;
    while(i < n)
    {
        d[i] = s[i];
        i += 1;
    }
    return(dest);
}
