/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memset.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mfaussur <mfaussur@student.le-101.>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/28 16:16:30 by mfaussur     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/28 16:17:40 by mfaussur    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "./../../inc/ft.h"

void				*ft_memset(void *s, int c, size_t len)
{
	unsigned char	*p;
	size_t			i;

	i = 0;
	p = s;
	while (i < len)
		p[i++] = c;
	return (s);
}
