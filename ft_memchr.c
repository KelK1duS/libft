#include "libft.h"

void	*ft_memchr(const void *ptr, int c, size_t n)
{
	const char	*p;

	p = ptr;
	while (n--)
	{
		if(*p++ == c)
			return ((void *)--p);
	}
	return ((void *)0);
}