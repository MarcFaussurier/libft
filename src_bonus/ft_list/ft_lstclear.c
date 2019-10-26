#include "./../../inc/ft.h"
#include "./../../inc/ft_list.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
    if (!*lst)
        return ;
    while ((*lst)->next)
    {
        ft_lstdelone(*lst, del);
        *lst = (*lst)->next;
    }
    *lst = NULL;
}
