#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t n, size_t size)
{
	void	*p;
	char	*s;

	p = malloc(n * size);
	if (!p)
		return ((char *)0);
	s = p;
	while ((void *)s < p + (n * size))
		*s++ = 0;
	return (p);	
}