#include "./../../inc/ft.h"

char    *ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
    unsigned int    i;
    char            *out;

    if (!s || !f)
        return (NULL);
    i = 0;
    out = malloc((ft_strlen(s) + 1) * sizeof(char));
    if (!out)
        return (NULL);
    while (s[i])
    {
        out[i] = f(i, s[i]);
        i += 1;
    }
    out[i] = '\0';
    return (out);
}
