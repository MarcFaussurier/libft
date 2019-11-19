/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strtrim.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mfaussur <mfaussur@student.le-101.>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/28 15:32:58 by mfaussur     #+#   ##    ##    #+#       */
/*   Updated: 2019/11/17 14:14:21 by mfaussur    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char		*ft_strtrim(char const *s1, char const *set)
{
	char				*start;
	char				*stop;

	if (!s1 || !s1[0])
		return (ft_strdup(""));
	else if (!set)
		return (ft_strdup(s1));
	else
	{	
		start = ft_strtrim_begin(s1, set);
		stop = ft_strtrim_end(s1, set);
		return (ft_substr(s1, start - s1, stop - start + 1));
	}
}
