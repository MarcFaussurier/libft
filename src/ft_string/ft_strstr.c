#include <ft.h>

char    *strstr (const char *s1, const char *s2)
{
    char        *p;
    size_t      len;

    p = (char*) s1;
    len = ft_strlen(s2);
    while((p = ft_strchr (p, *s2)) != 0)
        if (ft_strncmp (p, s2, len) == 0)
            return (char *)p;
        else
            p += 1;
    return (0);
}