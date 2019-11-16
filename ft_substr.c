/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_substr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mfaussur <mfaussur@student.le-101.>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/28 15:31:38 by mfaussur     #+#   ##    ##    #+#       */
/*   Updated: 2019/11/16 17:37:42 by mfaussur    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char				*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	unsigned int	min_len;
	char			*out;

	if (!s)
		return (NULL);
	if (len <= 0 || start >= ft_strlen(s))
		return (ft_strdup(""));
	min_len = ft_strlen(s + start);
	if (min_len < len)
		len = min_len;
	if (!(out = malloc((len + 1) * sizeof(char))))
		return (NULL);
	i = start;
	while (s[i] && (i - start) < len)
	{
		out[i - start] = s[i];
		i += 1;
	}
	return (out + (long)(out[i - start] = '\0'));
}
