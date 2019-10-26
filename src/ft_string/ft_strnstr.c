#include "../../inc/ft.h"
#include "../../inc/ft_string.h"

char    *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t	needle_len;

	if (*needle == '\0')
		return ((char *)haystack);
	needle_len = ft_strlen(needle);
	while (*haystack != '\0' && len-- >= needle_len)
		if (*haystack == *needle && ft_memcmp(haystack, needle, needle_len) == 0)
			return ((char *)haystack);
        else
            haystack++;
	return (NULL);
}
