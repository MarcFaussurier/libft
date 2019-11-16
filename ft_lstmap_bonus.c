/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstmap.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mfaussur <mfaussur@student.le-101.>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/28 15:24:22 by mfaussur     #+#   ##    ##    #+#       */
/*   Updated: 2019/11/16 18:15:56 by mfaussur    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list		**out;

	if (!lst || !f)
		return (NULL);
	out = malloc(1 * sizeof(t_list*));
	*out = NULL;
	while (lst)
	{
		ft_lstadd_back(out, f(lst->content));
		lst = lst->next;
	}
	return (*out);
}
