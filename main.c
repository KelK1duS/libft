#include "libft.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	int i;
	if (argc > 1)
		i = ft_strlen(argv[1]);
	printf("%s : %i\n", argv[1], i);
	while (*argv[1])
	{
		if (ft_isalnum(*argv[1]))
		{
			if (ft_isalpha(*argv[1]))
				printf("%c est alpha\n", *argv[1]);
			else if (ft_isdigit(*argv[1]))
				printf("%c est digit\n", *argv[1]);
		}
		else
			printf("%c ne sais pas\n", *argv[1]);
		argv[1]++;
	}
	return (0);
}