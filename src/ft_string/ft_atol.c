/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_atol.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mfaussur <mfaussur@student.le-101.>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/28 16:13:03 by mfaussur     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/28 16:13:27 by mfaussur    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../../inc/ft.h"

long			ft_atol(const char *str)
{
	long		sign;
	int			nbr;

	sign = 1;
	while (ft_isspace(*str) && (str++ || 1))
		;
	if (*str == '-' || *str == '+')
		if (*str++ == '-')
			sign = -1;
	nbr = 0;
	str -= 1;
	while (ft_isdigit((int)*++str))
		nbr = nbr * 10 + *str - '0';
	return (sign * nbr);
}
