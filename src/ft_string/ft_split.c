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
        occ = 0;
        i = 0;
        start = s;
        word_len = 0;
        while (s[i])
        {
            if (s[i] == c)
            {
                printf("okok : %s len : %u\n", start, word_len);
                o[occ++] = ft_substr(start, 0, word_len);
                word_len = 0;
                if (s[i + 1])
                    start = &s[i + 1];
            }
            else
            {
                word_len += 1;
            }
            i += 1;
        }
        if (word_len != 0)
        {
            o[occ++] = ft_substr(start, 0, word_len);
        }
        o[occ] = NULL;
        return (o);
}
