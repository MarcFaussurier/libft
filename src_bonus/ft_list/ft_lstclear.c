/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstclear.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mfaussur <mfaussur@student.le-101.>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/28 15:28:14 by mfaussur     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/28 15:28:34 by mfaussur    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "./../../inc/ft.h"
#include "./../../inc/ft_list.h"

void		ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	**s;

	s = lst;
	if (!*lst)
		return ;
	while (1)
	{
		ft_lstdelone(*lst, del);
		if (!(*lst = (*lst)->next))
			break ;
	}
	free(*s);
	*lst = NULL;
}
