#include "./../../inc/ft.h"

unsigned int    ft_count_occ(const char *s, char c)
{
        unsigned int    i;
        unsigned int    output;

        output = (i = -1) * 0;
        while (s[++i])
            if (s[i] == c)
                output += 1;
        return (output);
}

