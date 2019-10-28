/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_string.h                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mfaussur <mfaussur@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/15 17:10:04 by mfaussur     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/15 17:42:56 by mfaussur    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef FT_STRING_H
# define FT_STRING_H
# include "ft.h"

size_t			ft_strlen(const char *s);
size_t			ft_strnlen(const char *s, size_t maxlen);
int				ft_isalnum(int c);
int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isascii(int n);
int				ft_isprint(int c);
int				ft_isupper(int c);
int				ft_toupper(int c);
int				ft_islower(int c);
int				ft_tolower(int c);
int				ft_isspace(int c);
char			*ft_strchr(const char *s, int c);
char			*ft_strrchr(const char *s, int c);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
size_t			ft_strlcpy(char *dst, const	char *src, size_t dstsize);
size_t			ft_strlcat(char *dst, const	char *src, size_t dstsize);
char			*ft_strnstr(const char	*big, const char *little, size_t len);
int				ft_atoi(const char *nptr);
long			ft_atol(const char *nptr);
long long		ft_atoll(const char *nptr);
char			*ft_strdup(const char *s);
char			*ft_strndup(const char *s, size_t n);
char			*ft_strdupa(const char *s);
char			*ft_strndupa(const char *s, size_t n);
char			*ft_substr(char const *s, unsigned int start, size_t len);
char			*ft_strjoin(char const *s1, char const *s2);
t_bool			ft_is_char_in(char c, char const *set);
char			*ft_strtrim_begin(char const *s1, char const *set);
char			*ft_strtrim_end(char const *s1, char const *set);
char			*ft_strtrim(char const *s1, char const *set);
unsigned int	ft_count_occ(const char *s, char c);
char			**ft_split(char const *s2, char c);
char			*ft_itoa(int n);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char			*ft_strcpy(char *dst, const char *src);
#endif
