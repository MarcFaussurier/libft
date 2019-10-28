/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strjoin.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mfaussur <mfaussur@student.le-101.>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/28 15:53:07 by mfaussur     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/28 18:31:12 by mfaussur    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft.h"

char				*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	final;
	char			*out;
	unsigned int	i;
	unsigned int	y;

	if (!s1)
		return (NULL);
	final = ft_strlen(s1) + ft_strlen(s2) + 1;
	out = malloc(final * sizeof(char));
	if (!out)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		out[i] = s1[i];
		i += 1;
	}
	y = 0;
	while (s2[y])
	{
		out[y + i] = s2[y];
		y += 1;
	}
	out[y + i] = '\0';
	return (out);
}
