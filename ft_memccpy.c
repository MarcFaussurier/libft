/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memccpy.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mfaussur <mfaussur@student.le-101.>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/28 16:21:54 by mfaussur     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/28 18:29:20 by mfaussur    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft.h"

void			*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char		*d;
	const char	*s;

	d = dest;
	s = src;
	while (n-- && ((*d++ = *s++) || 1))
		if (*(d - 1) == (char)c)
			return (d);
	return (NULL);
}
