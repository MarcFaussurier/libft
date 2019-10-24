#include "./../../inc/ft.h"

void        ft_free_until(void **array, void *end)
{
    void    *tmp;

    tmp = array;
    while (*array != end)
    {
        free(*array);
        array += 1;
    }
    free(tmp);
}
