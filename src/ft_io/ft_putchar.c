#include "./../../inc/ft.h"

void    ft_putchar(char c)
{
    ft_putchar_fd(c, STDIN_FILENO);
}

