#include <ft.h>

int         ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t      i;
    
    i = 0;
    while (i < n)
    {
        if (s1 != s2)
            return (s1 - s2);   
        i += 1;
    }
    return (0);
}