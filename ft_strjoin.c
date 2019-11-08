/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strjoin.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mfaussur <mfaussur@student.le-101.>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/28 15:53:07 by mfaussur     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/29 02:56:01 by mfaussur    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strjoin(char const *s1, char const *s2)
{
	char			*out;
	unsigned int	final;
	unsigned int	s2len1;

	if (!s1 || !s2)
		return (NULL);
	s2len1 = ft_strlen(s2) + 1;
	final = ft_strlen(s1) + s2len1;
	out = malloc(final * sizeof(char));
	if (!out)
		return (NULL);
	ft_strcpy(out, s1);
	ft_strlcat(out, s2, s2len1);
	return (out);
}