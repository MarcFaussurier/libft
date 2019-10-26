#include "./../../inc/ft.h"
#include "./../../inc/ft_list.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list      **s;

    s = lst;
    if (!*lst)
        return ;
    while (1)
    {
        ft_lstdelone(*lst, del);
        if (!(*lst = (*lst)->next))
            break;
    }
    free(*s);
    *lst = NULL;
}
