#include "libft.h"

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <bsd/string.h>

void	print_is(char *str)
{
	while (*str)
	{
		if (ft_isascii(*str))
		{
			if (ft_isprint(*str))
			{
				if (ft_isalnum(*str))
				{
					if (ft_isalpha(*str))
						printf("%c est alpha\n", *str);
					else if (ft_isdigit(*str))
						printf("%c est digit\n", *str);
				}
			}
		}
		else
			printf("%c ne sais pas\n", *str);
		str++;
	}
}

int	main(int argc, char **argv)
{
	char *s;
	int	i;

	s = argv[1];
	printf("%i\n", ft_strncmp("Hello0", "Hello", 50));
	return (0);
}