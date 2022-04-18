#include "libft.h"

int ft_isspace(const char c)
{
	return ((c == ' ' || (c >= '\t' && c <= '\r')));
}

int		ft_atoi(const char *s)
{
	int	sign;
	int	n;

	while (ft_isspace(*s))
		s++;
	sign = 1;
	if (*s == '-')
	{
		sign = -sign;
		s++;
	}
	else if (*s == '+')
		s++;
	n = 0;
	while (*s >= '0' && *s++ <= '9')
		n = n * 10 + (*(s-1) - '0');
	return (n * sign);
}