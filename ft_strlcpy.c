/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strlcpy.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mfaussur <mfaussur@student.le-101.>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/28 15:50:58 by mfaussur     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/29 02:56:10 by mfaussur    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

size_t				ft_strlcpy(char *dest, const char *src, size_t len)
{
	char			*d;
	const char		*s;
	size_t			n;

	if (!dest && !src)
		return (0);
	d = dest;
	s = src;
	n = len;
	if (n != 0)
		while (--n != 0 && (*d++ = *s++) != '\0')
			;
	if (n == 0 && len != 0)
		*d = '\0';
	while (n == 0 && *s++)
		;
	return (s - src - 1);
}
