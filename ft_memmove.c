/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memmove.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mfaussur <mfaussur@student.le-101.>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/28 16:14:47 by mfaussur     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/29 02:54:26 by mfaussur    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memmove(void *dst, const void *src, size_t n)
{
	int				i;

	if (!dst && !src)
		return (NULL);
	if ((unsigned char*)dst > (unsigned char*)src && ((i = n) || 1))
		while (--i > -1)
			*((unsigned char*)(dst + i)) = *((unsigned char*)(src + i));
	else if ((unsigned char*)dst < (unsigned char*)src)
		ft_memcpy(dst, src, n);
	return (dst);
}
