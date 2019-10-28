/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstnew.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mfaussur <mfaussur@student.le-101.>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/28 15:26:29 by mfaussur     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/28 18:29:10 by mfaussur    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft.h"
#include "ft_list.h"

t_list		*ft_lstnew(void *content)
{
	t_list		*out;

	if (!(out = malloc(1 * sizeof(t_list))))
		return (NULL);
	out->content = content;
	out->next = NULL;
	return (out);
}
