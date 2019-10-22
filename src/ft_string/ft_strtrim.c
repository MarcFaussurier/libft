#include "./../../inc/ft.h"

static t_bool       is_char_in(char c, char const *str)
{
    unsigned int    i;

    i = -1;
    while (str[++i])
        if (str[i] == c)
            return (true);
    return (false);
}

char                *ft_strtrim(char const *s1, char const *set)
{
    unsigned int    i;
    unsigned int    newsize;
    char            *out;
    unsigned int    start;
    unsigned int    stop;

    newsize = ft_strlen(s1)  + 1;
    i = -1;
    start = 0;
    stop = newsize - 2;
    while (s1[++i])
        if (!is_char_in(s1[i], set) && ((start = i) || 1))
            break;
        else
            newsize -= 1;
    i = ft_strlen(s1);
    while (s1[--i])
        if (!is_char_in(s1[i], set) && ((stop = i) || 1))
            break;
        else
            newsize -= 1;
    newsize = stop - start + 1;
    newsize = stop - start + 1;
    out = malloc(newsize * sizeof(char));
    newsize = 0;
    i = -1;
    while (s1[++i])
        if (i >= start && i <= stop)
            out[newsize++] = s1[i];
    out[newsize] = '\0';
    return (out);
}
