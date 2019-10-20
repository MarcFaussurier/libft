#include <ft.h>

long         ft_atol(const char *str)
{
	long	    sign;
	int		    nbr;

	sign = 1;
	while (ft_isspace(*str) && (str++ || 1))
        ;
	if (*str == '-' || *str == '+')
		if (*str++ == '-')
			sign = -1;
	nbr = 0;
	str -= 1;
    while (ft_isdigit((int)*++str))
		nbr = nbr * 10 + *str - '0';
	return (sign * nbr);
}
