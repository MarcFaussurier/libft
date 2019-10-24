#include "./../../inc/ft.h"

void    *ft_realloc(void *ptr, size_t size)
{
    char	*out;
	size_t	oldsize;

	if (!ptr)
		return (malloc(size));
	oldsize = sizeof(ptr);
	if (size <= oldsize)
		return (ptr);
	out = malloc(size);
	if (!out)
        return (NULL);
    ft_memcpy(out, ptr, oldsize);
	free(ptr);
	return (out);
}
