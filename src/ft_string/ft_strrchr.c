#include "../../inc/ft.h"

char        *ft_strrchr(const char *s, int c)
{
    size_t      i;
    
    i = 0;
    while ( s[i++] );
    while (i)
        if ( s[--i] == (char) c )
            return (char *) s + i;
    return NULL;
}
