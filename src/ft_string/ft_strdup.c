#include "../../inc/ft.h"

char    *ft_strdup(const char *src)
{
    char    *str;

    if (!(str = malloc(ft_strlen(src) + 1)))
        return (NULL);
    return (ft_strcpy(str, src));
}
