/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_bool.h                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mfaussur <mfaussur@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/15 17:40:32 by mfaussur     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/15 17:53:55 by mfaussur    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef FT_BOOL_H
# define FT_BOOL_H
# ifndef false
#  define FALSE 0
# endif
# ifndef true
#  define TRUE 1
# endif

typedef enum			e_bool
{g_false, g_true}		t_bool;

#endif
