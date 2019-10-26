#include "./../../inc/ft.h"
#include "./../../inc/ft_list.h"

int     ft_lstsize(t_list *lst)
{
    int     i;

    if (!lst)
        return (0);
    i = 0;
    while ((lst + i)->next != NULL)
    {
        i += 1;
    }
    return (i);
}
