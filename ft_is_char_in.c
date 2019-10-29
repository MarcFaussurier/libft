/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_is_char_in.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mfaussur <mfaussur@student.le-101.>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/28 16:08:20 by mfaussur     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/29 02:52:32 by mfaussur    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

t_bool				ft_is_char_in(char c, char const *str)
{
	unsigned int	i;

	i = -1;
	while (str[++i])
		if (str[i] == c)
			return (TRUE);
	return (FALSE);
}
