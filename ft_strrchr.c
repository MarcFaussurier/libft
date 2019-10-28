/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strrchr.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mfaussur <mfaussur@student.le-101.>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/28 15:36:06 by mfaussur     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/28 18:32:07 by mfaussur    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft.h"

char			*ft_strrchr(const char *s, int c)
{
	size_t		i;

	i = 0;
	while (s[i++])
		;
	while (i)
		if (s[--i] == (char)c)
			return (char *)s + i;
	return (NULL);
}
