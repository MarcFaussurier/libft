#include "./../../inc/ft.h"

void    *ft_memmove(void *dst, const void *src, size_t n)
{
	int             i;

	if (!dst && !src)
		return (NULL);
	if ((unsigned char*)dst > (unsigned char*) src && ((i = n) || 1))
		while (--i > -1)
			*((unsigned char*)(dst + i)) = *((unsigned char*) (src + i));
	else if ((unsigned char*)dst < (unsigned char*) src)
		ft_memcpy(dst, src, n);
	return (dst);
}
