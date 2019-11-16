/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_trim_end.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mfaussur <mfaussur@student.le-101.>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/28 15:33:37 by mfaussur     #+#   ##    ##    #+#       */
/*   Updated: 2019/11/16 18:42:21 by mfaussur    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim_end(char const *s1, char const *set)
{
	int		i;

	if (!s1)
		return (NULL);
	if (!set)
		return ((char*)s1);
	i = ft_strlen(s1);
	while (i && ft_is_char_in(s1[--i], set))
		;
	return ((char*)s1 + i);
}
