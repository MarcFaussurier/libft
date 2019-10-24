#include "./../../inc/ft.h"
#include <stdio.h>

char        *ft_itoa(int n)
{
    unsigned short  numlen;
    size_t          i;
    char            *out;
    t_bool          isn;

    numlen = ft_numlen(n);
    out = malloc(sizeof(char) * (numlen + 1 ));
    if (!out)
        return (NULL);
    i = 0;
    isn = false;
    if (n == -2147483648)
        return (ft_strdup("-2147483648"));
    if (n < 0 && (isn = true) && (n = -n))
        out[i++] = '-';
    while (true)
        if (n == 0)
            break;
        else
        {
            out[numlen - i - !isn] = ('0' + n % 10);
            n /= 10;
            i += 1;
        }
    out[i] = '\0';
    return (out);
}
