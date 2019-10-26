#include "./../../inc/ft.h"
#include "./../../inc/ft_list.h"

void ft_lstiter(t_list *lst, void (*f)(void *))
{
    if (!lst)
        return ;
    while (1)
    {
        f(lst->content);
        if (!lst->next)
            break ;
        lst = lst->next;
    }
}
