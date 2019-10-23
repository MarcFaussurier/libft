#include "./../../inc/ft.h"

char            **ft_split(char const *s, char c)
{
        unsigned int    i;

        char            **o;

        o = 0;
        i = -1;
        while (s[++i])
        {
            if (s[i] == c)
            {
                // we got a match ...
            }
            i += 1;
        }
        return (o);
}
