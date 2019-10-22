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
    unsigned int    s1len;
    unsigned int    newsize;
    char            *out;
    unsigned int    start;
    unsigned int    stop;

    s1len = ft_strlen(s1);
    newsize = s1len + 1;
    i = -1;
    while (s1[++i])
        if (!is_char_in(s1[i], set))
        {
            start = i;
            break;
        }
        else
        {
            newsize -= 1;
        }
    i = s1len;
    while (s1[--i])
        if (!is_char_in(s1[i], set))
        {
            stop = i;
            break;
        }
        else
        {
            newsize -= 1;
        }
    out = malloc(newsize * sizeof(char));
    newsize = 0;
    i = 0;
    while (s1[i])
    {
        if (i >= start && i <= stop)
        {
            out[newsize++] = s1[i];
        }
    }
    out[newsize] = '\0';
    return (out);
}
