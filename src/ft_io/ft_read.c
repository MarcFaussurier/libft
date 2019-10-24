#include "./../../inc/ft.h"

char    *ft_read(char delimiter)
{
    return (ft_read_fd(delimiter, STDIN_FILENO));
}
