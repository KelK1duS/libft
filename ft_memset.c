#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t n)
{
	char			*p;

	p = ptr;
	while (n--)
		*p++ = value;
	return (ptr);
}