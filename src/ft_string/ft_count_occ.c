/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_count_occ.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mfaussur <mfaussur@student.le-101.>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/28 16:12:23 by mfaussur     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/28 16:12:47 by mfaussur    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "./../../inc/ft.h"

unsigned int		ft_count_occ(const char *s, char c)
{
	unsigned int	i;
	unsigned int	output;

	i = -1;
	output = 0;
	while (s[++i])
		if (s[i] == c)
			output += 1;
	return (output);
}
