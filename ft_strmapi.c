/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strmapi.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mfaussur <mfaussur@student.le-101.>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/28 15:52:11 by mfaussur     #+#   ##    ##    #+#       */
/*   Updated: 2019/11/16 17:54:55 by mfaussur    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*out;

	if (!s || !f)
		return (ft_strdup(""));
	if (!(out = malloc((ft_strlen(s) + 1) * sizeof(char))))
		return (NULL);
	i = -1;
	while (s[++i])
		out[i] = f(i, s[i]);
	out[i] = '\0';
	return (out);
}
