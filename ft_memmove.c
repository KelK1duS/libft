#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*d;
	const char	*s;

	if (dest < src)
	{
		d = dest;
		s = src;
		while (n--)
			*d++ = *s++;
	}
	else
	{
		d = dest + n;
		s = src + n;
		while (n--)
			*--d = *--s;
	}
	return (dest);
}