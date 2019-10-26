#include "./../../inc/ft.h"
#include "./../../inc/ft_list.h"

void ft_lstadd_front(t_list **alst, t_list *new)
{
    new->next = *alst;
    *alst = new;
}
