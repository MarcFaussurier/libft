/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_split.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mfaussur <mfaussur@student.le-101.>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/28 15:36:40 by mfaussur     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/28 15:48:53 by mfaussur    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "./../../inc/ft.h"
#include <stdio.h>

char		**ft_split(char const *s, char d)
{
	int		i;
	int		j;
	int		c;
	char	**ret;
	int		index;

	if ((i = 0) || !s)
		return (NULL);
	if (!(ret = (char **)malloc(sizeof(char *) * (ft_count_occ(s, d) + 1))))
		return (NULL);
	index = -1;
	while (((++index) || 1) && s[i])
	{
		while ((c = 0) || (s[i] == d && s[i]))
			i++;
		while (s[i] != d && s[i + c])
			c++;
		if ((j = 0) || (c == 0))
			break ;
		ret[index] = (char*)(malloc(sizeof(char) * (c + 1)));
		while (s[i] != d && s[i])
			ret[index][j++] = s[i++];
		ret[index][j] = '\0';
	}
	return ((ret[index] = NULL) ? ret : ret);
}
