#include "./../../inc/ft.h"
#include "./../../inc/ft_list.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list          *next;
    unsigned int    i;

    if (!*lst)
        return ;
    i = 0;
    while ((*lst + i) -> next)
    {
        ft_lstdelone(*lst + i, del);
        i += 1;
    }
    *lst = NULL;
}
