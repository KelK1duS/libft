#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t num)
{
	char			*p;

	p = ptr;
	while (num--)
		*p++ = value;
	return (ptr);
}