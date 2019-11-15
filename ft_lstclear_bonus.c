/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstclear.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mfaussur <mfaussur@student.le-101.>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/28 15:28:14 by mfaussur     #+#   ##    ##    #+#       */
/*   Updated: 2019/11/15 17:57:26 by mfaussur    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	**s;

	s = lst;
	if (!s || !*s)
		return ;
	if (del)
		while (1)
		{
			ft_lstdelone(*lst, del);
			if (!(*lst = (*lst)->next))
				break ;
		}
	free(*s);
	*lst = NULL;
}
