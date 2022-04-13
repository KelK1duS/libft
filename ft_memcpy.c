#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t num)
{
	char		*d;
	const char	*s;

	d = dest;
	s = src;
	while (num--)
		*d++ = *s++;
	return (dest);
}