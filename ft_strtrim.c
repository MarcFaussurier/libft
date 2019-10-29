/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strtrim.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mfaussur <mfaussur@student.le-101.>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/28 15:32:58 by mfaussur     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/29 02:56:48 by mfaussur    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s1, char const *set)
{
	char	*start;
	char	*stop;
	char	*out;

	if (!s1)
		return (NULL);
	start = ft_strtrim_begin(s1, set);
	stop = ft_strtrim_end(s1, set);
	out = ft_substr(s1, start - s1, stop - start + 1);
	return (out);
}
