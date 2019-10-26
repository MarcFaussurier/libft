#include "./../../inc/ft.h"
#include "./../../inc/ft_list.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list  *out;
    t_list  *it;
    if (!lst)
        return (lst);
    if (!(out = ft_lstnew(f(lst->content))))
        return (NULL);
    it = out;
    while ((it = it->next))
        if (!ft_lstnew(f(it->content)))
        {
            ft_lstclear(&out, del);
            return (NULL);
        }
    return (out);
}
