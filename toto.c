/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   toto.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mfaussur <mfaussur@student.le-101.>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/11/06 21:17:33 by mfaussur     #+#   ##    ##    #+#       */
/*   Updated: 2019/11/06 21:52:19 by mfaussur    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
int main()
{
	char	**o = ft_split("       avion  pomme", ' ');
	unsigned int i;
	i = -1;
	printf("start\n");
	while (o[++i])
		printf("%i: %s (len %lu)\n", i,o[i],ft_strlen(o[i]));
	printf("end\n");
}
