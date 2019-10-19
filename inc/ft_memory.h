/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memory.h                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mfaussur <mfaussur@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/15 17:09:54 by mfaussur     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/15 17:42:02 by mfaussur    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef FT_MEMORY_H
# define FT_MEMORY_H
# include <ft.h>

void	*ft_memset(void *b, int c, size_t len);
void    ft_bzero(void *s, size_t n);
void    ft_explicit_bzero(void *s, size_t n);
void    *ft_memcpy(void *dest, const void *src, size_t n);
void    *ft_memcpy(void *dest, const void *src, size_t n);
void    *ft_memchr(const void *s, int c, size_t n);
void    *ft_memrchr(const void *s, int c, size_t n);
void    *ft_rawmemchr(const void *s, int c);
int     ft_memcmp(const void *s1, const void *s2, size_t n);
void    *ft_malloc(size_t size);
void    ft_free(void *ptr);
void    *ft_calloc(size_t nmemb, size_t size);
void    *ft_realloc(void *ptr, size_t size);
void    *ft_reallocarray(void *ptr, size_t nmemb, size_t size);

#endif
