#include "./../../inc/ft.h"

unsigned short     ft_numlen(int n)
{
    size_t  out;

    out = 0;
    if (n < 0 && (n *= -1))
        out += 1;
    while (true)
    {
        out += 1;
        n /= 10;
        if (n == 0)
            break;
    }
    return (out);
}

