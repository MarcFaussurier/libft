/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_numlen.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mfaussur <mfaussur@student.le-101.>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/28 16:14:08 by mfaussur     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/29 02:54:36 by mfaussur    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

unsigned short			ft_numlen(int n)
{
	size_t				out;

	out = 0;
	if (n < 0 && (n *= -1))
		out += 1;
	while (TRUE)
	{
		out += 1;
		n /= 10;
		if (n == 0)
			break ;
	}
	return (out);
}
