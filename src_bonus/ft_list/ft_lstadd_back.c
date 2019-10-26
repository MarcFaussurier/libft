#include "./../../inc/ft.h"
#include "./../../inc/ft_list.h"

void ft_lstadd_back(t_list **alst, t_list *new)
{
    if (!*alst)
        *alst = new;
    else
        (ft_lstlast(*alst))->next = new;
}

