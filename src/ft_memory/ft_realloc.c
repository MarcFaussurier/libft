/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_realloc.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mfaussur <mfaussur@student.le-101.>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/28 16:13:43 by mfaussur     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/28 16:13:55 by mfaussur    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "./../../inc/ft.h"

void		*ft_realloc(void *ptr, size_t size)
{
	char	*out;
	size_t	oldsize;

	if (!ptr)
		return (malloc(size));
	oldsize = sizeof(ptr);
	if (size <= oldsize)
		return (ptr);
	out = malloc(size);
	if (!out)
		return (NULL);
	ft_memcpy(out, ptr, oldsize);
	free(ptr);
	return (out);
}
