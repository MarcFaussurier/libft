/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_string.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mfaussur <mfaussur@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/15 17:11:19 by mfaussur     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/15 17:11:52 by mfaussur    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <ft.h>
#include <ft_string.h>

t_size_t	ft_strlen(const char *s)
{
	t_size_t	i;

	i = 0;
	while (s[i])
		i += 1;
	return (i);
}

t_size_t	ft_strnlen(const char *s, t_size_t maxlen)
{
	t_size_t	i;

	i = 0;
	while (s[i] && i < maxlen)
		i += 1;
	return (i);
}
