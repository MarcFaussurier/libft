#include "./../../inc/ft.h"
#include "./../../inc/ft_list.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    unsigned int    i;

    t_list  *out;
    t_list  *it;
    
    if (!lst)
        return (NULL);
    if (!(out = ft_lstnew(f(lst->content))))
        return (NULL);
    it = out;
    while ((it = it->next))
    {
        if (!ft_lstnew(f(it->content)))
        {
            ft_lstclear(&out, del);
            return (NULL);
            // clean until initial out then set out to null;
        }
    }

    return (out);
}
