/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_trim_end.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mfaussur <mfaussur@student.le-101.>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/28 15:33:37 by mfaussur     #+#   ##    ##    #+#       */
/*   Updated: 2019/11/07 18:28:07 by mfaussur    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim_end(char const *s1, char const *set)
{
	int		i;

	i = ft_strlen(s1);
	if (i == 0)
		return ((char*)s1);
	while (ft_is_char_in(s1[--i], set))
		if (i == 0)
			break ;
	return ((char*)s1 + i);
}
