#include "./../../inc/ft.h"
#include <stdio.h>

char                *ft_strtrim(char const *s1, char const *set)
{
        char *start;
        char *stop;
        char *out;

        start = ft_strtrim_begin(s1, set);
        stop = ft_strtrim_end(s1, set);
        out = ft_substr(s1, start - s1, stop - start + 1);
        return (out);
}
