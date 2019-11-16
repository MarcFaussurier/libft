/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_split.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mfaussur <mfaussur@student.le-101.>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/11/16 17:25:58 by mfaussur     #+#   ##    ##    #+#       */
/*   Updated: 2019/11/16 18:38:26 by mfaussur    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static char			**ft_malloc_split(char const *s, char d)
{
	unsigned int	word_count;
	unsigned int	i;
	unsigned int	y;

	word_count = 0;
	i = 0;
	while (s[i])
	{
		y = 0;
		while (s[i + y] && s[i + y] != d)
			y += 1;
		if (y > 0)
		{
			word_count += 1;
			if (!s[i += y])
				break ;
		}
		i += 1;
	}
	word_count += 1;
	return (malloc(word_count * sizeof(char*)));
}

char				**ft_split(char const *s, char d)
{
	char			**output;
	unsigned int	word_count;
	unsigned int	i;
	unsigned int	y;

	if (!s || !(output = ft_malloc_split(s, d)))
		return (NULL);
	i = 0;
	word_count = 0;
	while ((y = 0) || s[i])
	{
		while (s[i + y] && s[i + y] != d)
			y += 1;
		if (y > 0)
		{
			output[word_count] = ft_substr(s, i, y);
			if (!output[word_count])
				ft_free_until((void**)output, output + word_count);
			word_count += 1;
			if (!s[i += y])
				break ;
		}
		i += 1;
	}
	return (output + (long)(output[word_count] = NULL));
}
