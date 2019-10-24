#include "./../../inc/ft.h"

void ft_putnbr_fd(int n, int fd)
{
    if (n == 0)
        return ;
    else if (n < 0 && (n = -n))
        ft_putchar_fd('-', fd);
    if (n >= 10)
    {
        ft_putnbr_fd(n / 10, fd);
        ft_putnbr_fd(n % 10, fd);
    }
    else
        ft_putchar_fd(n + '0', fd);
}
