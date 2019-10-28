/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strdup.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mfaussur <mfaussur@student.le-101.>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/28 16:04:38 by mfaussur     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/28 16:04:47 by mfaussur    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../../inc/ft.h"

char		*ft_strdup(const char *src)
{
	char	*str;

	if (!(str = malloc(ft_strlen(src) + 1)))
		return (NULL);
	return (ft_strcpy(str, src));
}
