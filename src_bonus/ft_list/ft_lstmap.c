#include "./../../inc/ft.h"
#include "./../../inc/ft_list.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list  *bckp;
    t_list  *out;
    t_list  *it;
    if (!lst)
        return (lst);
    if (!(out = ft_lstnew(f(lst->content))))
        return (NULL);
    it = lst;
    bckp = out;
    while (1)
    {
        if (!(out->next = ft_lstnew(f(it->content))))
        {
            ft_lstclear(&bckp, del);
            return (NULL);
        }
        it = it->next;
        out = out->next;
        if (!it || !out )
            break;
    }
    return (bckp);
}
