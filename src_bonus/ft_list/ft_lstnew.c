#include "./../../inc/ft.h"
#include "./../../inc/ft_list.h"

t_list *ft_lstnew(void *content)
{
    t_list  *out;

    if (!(out = malloc(1 * sizeof(t_list))))
        return (NULL);
    out->content = content;
    out->next = NULL;
    return (out);
}
