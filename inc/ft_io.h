#ifndef FT_IO_H
# define FT_IO_H

void    ft_putchar_fd(char c, int fd);
void    ft_putchar(char c);
void    ft_putstr_fd(char *s, int fd);
void    ft_putstr(char *s);
void    ft_putendl_fd(char *s, int fd);
void    ft_putendl(char *s);
void    ft_putnbr_fd(int n, int fd);
void    ft_putnbr(int n);
char    *ft_read_fd(char del, int fd);
char    *ft_read(char del);
char	*ob(void (*callback)());
#endif
