#include "./../../inc/ft.h"
#include "./../../inc/ft_list.h"

void ft_lstadd_back(t_list **alst, t_list *new)
{
    t_list  *list;
    if (!new)
        return;
    else if (!*alst)
        *alst = new;
    else
    {
        list = ft_lstlast(*alst);
		list->next = new;
    }
}

