#include "./../../inc/ft.h"

void    ft_putstr(char *s)
{
    while (*s)
    {
        ft_putchar(*s);
        s += 1;
    }
}
