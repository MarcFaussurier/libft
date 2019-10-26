#include "./../../inc/ft.h"
#include "./../../inc/ft_list.h"


t_list      *ft_lstlast(t_list *lst)
{
    t_list  *out;
    unsigned int     i;

    if (!lst)
        return (NULL);
    i = 0;
    while ((lst + i)->next != NULL)
    {
        i += 1;
    }
    return (lst + i);
}
