#include "../../inc/ft.h"
#include "../../inc/ft_string.h"

char    *ft_strnstr(const char *haystack, const char *needle, size_t slen)
{
	char        c;
    char        s;
	size_t      len;

	if ((c = *needle++) != '\0') {
		len = ft_strlen(needle);
		while (ft_strncmp(haystack, needle, len) != 0)
        {
            while (s != c)
                if ((s = *haystack++) == '\0' || slen-- < 1)
					return (NULL);   
			if (len > slen)
				return (NULL);
        }
		haystack--;
	}
	return ((char *)haystack);
}
