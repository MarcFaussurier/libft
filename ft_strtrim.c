/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strtrim.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mfaussur <mfaussur@student.le-101.>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/28 15:32:58 by mfaussur     #+#   ##    ##    #+#       */
/*   Updated: 2019/11/16 14:35:01 by mfaussur    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s1, char const *set)
{
	char				*start;
	char				*stop;

	if (!s1 || !set)
		return (NULL);
	if (!*set || !*s1)
		return (ft_strdup(s1));
	start = ft_strtrim_begin(s1, set);
	stop = ft_strtrim_end(s1, set);
	if (stop == s1)
		return (ft_strdup(""));
	return (ft_substr(s1, start - s1, stop - start + 1));
}
