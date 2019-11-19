/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft.h                                             .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mfaussur <mfaussur@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/15 17:08:47 by mfaussur     #+#   ##    ##    #+#       */
/*   Updated: 2019/11/19 13:25:45 by mfaussur    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include <stdio.h>
# ifndef false
#  define FALSE 0
# endif
# ifndef true
#  define TRUE 1
# endif

typedef enum			e_bool
{g_false, g_true}		t_bool;
void					*ft_memset(void *b, int c, size_t len);
void					ft_bzero(void *s, size_t n);
void					*ft_memcpy(void *dest, const void *src, size_t n);
void					*ft_memccpy(void *dest, const void *src, int c,
		size_t n);
void					*ft_memmove(void *dest, const void *src, size_t n);
void					*ft_memchr(const void *s, int c, size_t n);
int						ft_memcmp(const void *s1, const void *s2, size_t n);
void					ft_free_until(void **array, void *end);
void					*ft_realloc(void *ptr, size_t size);
void					*ft_calloc(size_t nmemb, size_t size);
unsigned short			ft_numlen(int n);
size_t					ft_strlen(const char *s);
size_t					ft_strnlen(const char *s, size_t maxlen);
int						ft_isalnum(int c);
int						ft_isalpha(int c);
int						ft_isdigit(int c);
int						ft_isascii(int n);
int						ft_isprint(int c);
int						ft_isupper(int c);
int						ft_toupper(int c);
int						ft_islower(int c);
int						ft_tolower(int c);
int						ft_isspace(int c);
char					*ft_strchr(const char *s, int c);
char					*ft_strrchr(const char *s, int c);
int						ft_strncmp(const char *s1, const char *s2, size_t n);
size_t					ft_strlcpy(char *dst, const	char *src, size_t dstsize);
size_t					ft_strlcat(char *dst, const	char *src, size_t dstsize);
char					*ft_strnstr(const char	*big, const char *little,
		size_t len);
int						ft_atoi(const char *nptr);
char					*ft_strdup(const char *s);
char					*ft_strndup(const char *s, size_t n);
char					*ft_strdupa(const char *s);
char					*ft_strndupa(const char *s, size_t n);
char					*ft_substr(char const *s, unsigned int start,
		size_t len);
char					*ft_strjoin(char const *s1, char const *s2);
t_bool					ft_is_char_in(char c, char const *set);
char					*ft_strtrim_begin(char const *s1, char const *set);
char					*ft_strtrim_end(char const *s1, char const *set);
char					*ft_strtrim(char const *s1, char const *set);
unsigned int			ft_count_occ(const char *s, char c);
char					**ft_split(char const *s2, char c);
char					*ft_itoa(int n);
char					*ft_strmapi(char const *s,
		char (*f)(unsigned int, char));
char					*ft_strcpy(char *dst, const char *src);
void					ft_putchar_fd(char c, int fd);
void					ft_putchar(char c);
void					ft_putstr_fd(char *s, int fd);
void					ft_putstr(char *s);
void					ft_putendl_fd(char *s, int fd);
void					ft_putendl(char *s);
void					ft_putnbr_fd(int n, int fd);
void					ft_putnbr(int n);
char					*ft_read_fd(char del, int fd);
char					*ft_read(char del);
typedef struct			s_list
{
	void				*content;
	struct s_list		*next;
}						t_list;
t_list					*ft_lstnew(void *content);
void					ft_lstadd_front(t_list **alst, t_list *new_itm);
int						ft_lstsize(t_list *lst);
t_list					*ft_lstlast(t_list *lst);
void					ft_lstadd_back(t_list **alst, t_list *new_itm);
void					ft_lstdelone(t_list *lst, void (*del)(void *));
void					ft_lstclear(t_list **lst, void (*del)(void *));
void					ft_lstiter(t_list *lst, void (*f)(void *));
t_list					*ft_lstmap(t_list *lst, void *(*f)(void *),
		void (*del)(void *));
typedef struct			s_split_state
{
	char				**out;
	char				*tmp;
	unsigned int		i;
	unsigned int		y;
	unsigned int		nb_words;
	unsigned int		s_len;
}						t_split_state;
#endif
