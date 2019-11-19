/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mfaussur <mfaussur@student.le-101.>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/11/19 12:45:38 by mfaussur     #+#   ##    ##    #+#       */
/*   Updated: 2019/11/19 12:47:58 by mfaussur    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ff(void *ptr)
{
	return ((void*)ft_strtrim(ft_strdup((char*)ptr), "l"));
}

void	dd(void *ptr)
{
	free(ptr);
}

int main()
{
	t_list	*t = ft_lstnew((void*)"lol");
	ft_lstadd_back(&t, ft_lstnew("lal"));

	t_list *n = ft_lstmap(t, ff, dd);
	while (n)
	{
		ft_putendl((char*)n->content);
		n = n->next;
	}
}
