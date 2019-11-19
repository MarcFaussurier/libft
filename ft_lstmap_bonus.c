/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstmap.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mfaussur <mfaussur@student.le-101.>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/28 15:24:22 by mfaussur     #+#   ##    ##    #+#       */
/*   Updated: 2019/11/19 12:52:14 by mfaussur    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list		**out;
	t_list		*tmp;
	t_list		*new;

	if (!lst || !f)
		return (NULL);
	tmp = NULL;
	out = &tmp;
	while (lst)
	{
		new = ft_lstnew(f(lst->content));
		if (!new)
		{
			ft_lstclear(out, del);
			return (NULL);
		}
		ft_lstadd_back(out, new);
		lst = lst->next;
	}
	return (*out);
}
