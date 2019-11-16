/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstadd_back.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mfaussur <mfaussur@student.le-101.>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/28 15:30:16 by mfaussur     #+#   ##    ##    #+#       */
/*   Updated: 2019/11/16 18:18:06 by mfaussur    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*list;

	if (!alst)
		return ;
	if (!*alst)
		*alst = new;
	else
	{
		list = ft_lstlast(*alst);
		list->next = new;
	}
}
