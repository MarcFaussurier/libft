#include "./../../inc/ft.h"

t_bool       ft_is_char_in(char c, char const *str)
{
    unsigned int    i;

    i = -1;
    while (str[++i])
        if (str[i] == c)
            return (true);
    return (false);
}

