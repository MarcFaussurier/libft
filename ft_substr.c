/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_substr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mfaussur <mfaussur@student.le-101.>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/28 15:31:38 by mfaussur     #+#   ##    ##    #+#       */
/*   Updated: 2019/11/07 18:57:15 by mfaussur    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char				*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*out;

	if (!s)
		return (NULL);
	if (len == 0 || start >= ft_strlen(s))
		return (ft_strdup(""));
	out = malloc((len + 1) * sizeof(char));
	if (!out)
		return (NULL);
	i = -1;
	while (s[++i] && (i <= (start + len - 1)))
		if (i >= start)
			out[i - start] = s[i];
	out[i - start] = '\0';
	return (out);
}
