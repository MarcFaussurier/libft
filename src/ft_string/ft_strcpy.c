#include "./../../inc/ft.h"

char        *ft_strcpy(char *dst, const char *src)
{
    unsigned int    i;

    i = 0;
    while (src[i])
    {
        dst[i] = src[i];
        i += 1;
    }
    dst[i] = '\0';
    return (dst);
}
