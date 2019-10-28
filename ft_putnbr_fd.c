/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_putnbr_fd.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mfaussur <mfaussur@student.le-101.>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/28 16:26:43 by mfaussur     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/28 18:30:17 by mfaussur    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft.h"

void		ft_putnbr_fd(int n, int fd)
{
	if (n < -2147483647)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
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
