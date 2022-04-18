#include "libft.h"

#include <ctype.h>
#include <string.h>
#include <bsd/string.h>
#include <stdlib.h>
#include <stdio.h>

void	print_is(char *str)
{
	while (*str++)
	{
		if (ft_isascii(*str - 1))
		{
			if (ft_isprint(*str - 1))
			{
				if (ft_isalnum(*str - 1))
				{
					if (ft_isalpha(*str - 1))
						printf("%c est alpha\n", *str - 1);
					else if (ft_isdigit(*str - 1))
						printf("%c est digit\n", *str - 1);
				}
				else
					printf("%c pas alpha ni digit\n", *str - 1);
			}
			else
				printf("%c pas print\n", *str - 1);
		}
		else
			printf("%c pas ascii\n", *str - 1);
	}
}

int	main(int argc, char **argv)
{
	char	*str;
	char	*s;
	int	i;

	str = argv[1];
	s = ft_strdup(str);
	printf("%s\n%s\n", str, s);
	return (0);
}