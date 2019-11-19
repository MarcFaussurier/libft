/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_itoa.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mfaussur <mfaussur@student.le-101.>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/28 15:54:03 by mfaussur     #+#   ##    ##    #+#       */
/*   Updated: 2019/11/19 13:23:57 by mfaussur    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char				*ft_itoa(int n)
{
	unsigned short	numlen;
	size_t			i;
	char			*out;
	t_bool			isn;

	if (n == 0)
		return (ft_strdup("0"));
	numlen = ft_numlen(n);
	if (!(out = malloc(sizeof(char) * (numlen + 1))))
		return (NULL);
	isn = FALSE;
	if ((i = 0) || (n == -2147483648))
		return (ft_strdup("-2147483648"));
	if (n < 0 && (isn = TRUE))
		out[i++] = '-';
	if (n < 0)
		n = -n;
	while (n)
	{
		out[numlen - i - !isn] = ('0' + n % 10);
		n /= 10;
		i += 1;
	}
	out[i] = '\0';
	return (out);
}
