#include "./../../inc/ft.h"

void        *ft_calloc(size_t nmemb, size_t size) {
	unsigned nbytes = nmemb * size;
	void *addr = malloc(nbytes);
	if (addr)
		ft_memset(addr, 0, nbytes);
	return (addr);
}
