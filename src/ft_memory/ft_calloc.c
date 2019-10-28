/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_calloc.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mfaussur <mfaussur@student.le-101.>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/28 16:21:24 by mfaussur     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/28 16:26:00 by mfaussur    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "./../../inc/ft.h"

void			*ft_calloc(size_t nmemb, size_t size)
{
	unsigned	nbytes;
	void		*addr;

	nbytes = nmemb * size;
	addr = malloc(nbytes);
	if (addr)
		ft_memset(addr, 0, nbytes);
	return (addr);
}
