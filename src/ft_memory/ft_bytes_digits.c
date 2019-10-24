#include "./../../inc/ft.h"

unsigned int    ft_bytes_digits(size_t bytes)
{
    return (ft_numlen((1 << bytes) - 1));
}
