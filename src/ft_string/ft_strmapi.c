/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strmapi.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mfaussur <mfaussur@student.le-101.>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/28 15:52:11 by mfaussur     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/28 15:52:28 by mfaussur    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "./../../inc/ft.h"

char				*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*out;

	if (!s || !f)
		return (NULL);
	i = 0;
	out = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!out)
		return (NULL);
	while (s[i])
	{
		out[i] = f(i, s[i]);
		i += 1;
	}
	out[i] = '\0';
	return (out);
}
