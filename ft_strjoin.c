/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strjoin.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mfaussur <mfaussur@student.le-101.>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/28 15:53:07 by mfaussur     #+#   ##    ##    #+#       */
/*   Updated: 2019/11/19 14:25:26 by mfaussur    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strjoin(char const *s1, char const *s2)
{
	char			*out;
	unsigned int	dstsize;

	if (!s1 && !s2)
		return (ft_strdup(""));
	else if (!s1)
		return (ft_strdup(s2));
	else if (!s2)
		return (ft_strdup(s1));
	else
	{
		dstsize = ft_strlen(s1) + ft_strlen(s2) + 1;
		out = malloc(dstsize * sizeof(char));
		if (!out)
			return (NULL);
		ft_strcpy(out, s1);
		ft_strlcat(out, s2, dstsize);
		return (out);
	}
}
