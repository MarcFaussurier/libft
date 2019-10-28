/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstlast.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mfaussur <mfaussur@student.le-101.>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/28 15:27:10 by mfaussur     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/28 18:28:59 by mfaussur    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft.h"
#include "ft_list.h"

t_list		*ft_lstlast(t_list *lst)
{
	t_list	*tmp;

	if (!lst)
		return (lst);
	tmp = lst;
	while (tmp->next)
	{
		tmp = tmp->next;
	}
	return (tmp);
}
