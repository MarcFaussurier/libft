#include "./../../inc/ft.h"
#include <stdio.h>

char            **ft_split(char const *s, char c)
{
        unsigned int    i;
        unsigned int    occ;
        unsigned int    word_len;
        char            **o;
        char const      *start;

        occ = ft_count_occ(s, c) + 2;
        o = malloc(occ * sizeof(char*));
        if (!o)
            return (NULL);
        occ = 0;
        i = -1;
        start = s;
        word_len = 0;
        while (s[++i])
        {
            if (s[i] == c &&
            (
             o[occ++] = ft_substr(start, 0, word_len)) && (!(word_len = 0)))
            {
                if (!o[occ - 1])
                {
                    ft_free_until((void*)o, o + (occ - 2));
                    return (NULL);
                }
                if (s[i + 1])
                    start = &s[i + 1];
            }
            else
                word_len += 1;
        }
        if (word_len != 0)
            o[occ++] = ft_substr(start, 0, word_len);
        o[occ] = NULL;
        return (o);
}
