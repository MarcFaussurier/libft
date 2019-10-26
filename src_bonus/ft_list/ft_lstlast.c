#include "./../../inc/ft.h"
#include "./../../inc/ft_list.h"


t_list      *ft_lstlast(t_list *lst)
{
    t_list *tmp;

    if (!lst)
        return (lst);
    tmp = lst;
    while (tmp->next)
    {
        tmp = tmp->next;
    }
    return (tmp);
}
