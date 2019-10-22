#include "./../../inc/ft.h"

void    *ft_memset(void *s, int c, size_t len)
{
    unsigned char   *p;
    size_t          i;

    i = 0;
    p = s;
    while(i < len)
        p[i++] = c;
    return(s);
}
