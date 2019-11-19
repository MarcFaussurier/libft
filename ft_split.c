/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_split.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mfaussur <mfaussur@student.le-101.>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/11/19 13:02:33 by mfaussur     #+#   ##    ##    #+#       */
/*   Updated: 2019/11/19 13:14:08 by mfaussur    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_split.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mfaussur <mfaussur@student.le-101.>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/11/16 17:25:58 by mfaussur     #+#   ##    ##    #+#       */
/*   Updated: 2019/11/19 13:02:02 by mfaussur    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static char			**ft_malloc_split(char const *s, char d, unsigned int *ui, unsigned int *uwc)
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
	*ui = -1;
	*uwc = -1;
	return (malloc(word_count * sizeof(char*)));
}

char				**ft_split(char const *s, char d)
{
	char			**output;
	unsigned int	word_count;
	unsigned int	i;
	unsigned int	y;

	if (!s || !(output = ft_malloc_split(s, d, &i, &word_count)))
		return (NULL);
	while ((y = 0) || s[++i])
	{
		while (s[i + y] && s[i + y] != d)
			y += 1;
		if (y > 0)
		{
			output[++word_count] = ft_substr(s, i, y);
			if (!output[word_count] && word_count > 0)
			{
				if (word_count > 0)
					ft_free_until((void**)output, &output[word_count - 1]);
				break;
			}
			if (!s[i += y])
				break ;
		}
	}
	return (output + (long)(output[++word_count] = NULL));
}
