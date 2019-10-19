#include <ft.h>

void    *ft_memmove(void *dest, const void *src, size_t n)
{
    char    *tmp;

    tmp = malloc(n * sizeof(unsigned char)); 
    ft_memcpy((void*)tmp, src, n);
    ft_memcpy(dest, tmp, n);
    free(tmp);
    return (dest);
}
