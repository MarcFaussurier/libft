#include "./../../inc/ft.h"
#include <stdio.h>


char            **ft_split(char const *s, char d)
{
    int		i;
	int		j;
	int		c;
	char	**ret;
	int		index;

    if (!s)
        return (NULL);
	ret = (char **)malloc(sizeof(char *) * (ft_count_occ(s, d) + 1));
	if (!ret)
        return (NULL);
    i = 0;
	index = -1;
	while (((++index) || 1) && s[i])
	{
		while (s[i] == d && s[i])
			i++;
		c = 0;
		while (s[i] != d && s[i + c])
			c++;
        if (c == 0)
            break ;
        ret[index] = (char *)malloc(sizeof(char) * (c + 1));
	    j = 0;
	    while (s[i] != d && s[i])
	        ret[index][j++] = s[i++];
	    ret[index][j] = '\0';
//        printf("WORD: %s\n", ret[index]);
	}
	ret[index] = NULL;
  //  printf("endl\n");
    return (ret);
}
