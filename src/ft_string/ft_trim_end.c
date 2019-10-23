#include "./../../inc/ft.h"

char         *ft_strtrim_end(char const *s1, char const *set)
{
        int     i;

        i = ft_strlen(s1) - 1;
        while (i >= 0 && ft_is_char_in(s1[i], set))
            i -= 1;
        return ((char*)&s1[i]);
}

