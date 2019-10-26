#include "./../../inc/ft.h"
#include "./../../inc/ft_list.h"


t_list      *ft_lstlast(t_list *lst)
{
    unsigned int     i;

    if (!lst)
        return (lst);
    i = 0;
    while ((lst + i)->next != NULL)
        i += 1;
    return (lst + i);
}
