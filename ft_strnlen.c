/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_string.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mfaussur <mfaussur@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/15 17:11:19 by mfaussur     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/28 18:31:54 by mfaussur    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft.h"
#include "ft_string.h"

size_t		ft_strnlen(const char *s, size_t maxlen)
{
	size_t	i;

	i = 0;
	while (s[i] && i < maxlen)
		i += 1;
	return (i);
}
