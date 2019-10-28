/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstadd_back.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mfaussur <mfaussur@student.le-101.>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/28 15:30:16 by mfaussur     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/28 18:28:29 by mfaussur    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft.h"
#include "ft_list.h"

void		ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*list;

	if (!new)
		return ;
	else if (!*alst)
		*alst = new;
	else
	{
		list = ft_lstlast(*alst);
		list->next = new;
	}
}
