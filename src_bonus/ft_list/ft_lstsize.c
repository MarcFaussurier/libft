/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstsize.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mfaussur <mfaussur@student.le-101.>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/28 15:25:06 by mfaussur     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/28 15:26:03 by mfaussur    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "./../../inc/ft.h"
#include "./../../inc/ft_list.h"

int			ft_lstsize(t_list *lst)
{
	int		i;

	if (!lst)
		return (0);
	i = 0;
	while (1)
	{
		i += 1;
		lst = lst->next;
		if (!lst)
			break ;
	}
	return (i);
}
