#include "./../../inc/ft.h"
#include "./../../inc/ft_list.h"

int     ft_lstsize(t_list *lst)
{
    int     i;

    if (!lst)
        return (0);
    i = 0;
    while (1)
    {
        i += 1;
        lst = lst->next;
        if (!lst)
            break;
    }
    return (i);
}
