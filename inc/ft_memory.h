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
# include "ft.h"

void	        *ft_memset(void *b, int c, size_t len);
void            ft_bzero(void *s, size_t n);
void            *ft_memcpy(void *dest, const void *src, size_t n);
void            *ft_memccpy(void *dest, const void *src, int c, size_t n);
void            *ft_memmove(void *dest, const void *src, size_t n);
void            *ft_memchr(const void *s, int c, size_t n);
int             ft_memcmp(const void *s1, const void *s2, size_t n);
void            ft_free_until(void **array, void *end);
void            *ft_calloc(size_t nmemb, size_t size);
unsigned int    ft_bytes_digits(size_t bytes);
unsigned short  ft_numlen(int n);


#endif
