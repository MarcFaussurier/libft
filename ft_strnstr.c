/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strnstr.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mfaussur <mfaussur@student.le-101.>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/28 15:37:09 by mfaussur     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/28 18:32:02 by mfaussur    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft.h"
#include "ft_string.h"

char		*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needlelen;

	if (*needle == '\0')
		return ((char *)haystack);
	needlelen = ft_strlen(needle);
	while (*haystack != '\0' && len-- >= needlelen)
		if (*haystack == *needle && ft_memcmp(haystack, needle, needlelen) == 0)
			return ((char *)haystack);
		else
			haystack++;
	return (NULL);
}
