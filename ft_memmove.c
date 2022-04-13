#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t num)
{
	char		*d;
	const char	*s;

	if (dest < src)
	{
		d = dest;
		s = src;
		while (num--)
			*d++ = *s++;
	}
	else
	{
		d = dest + (num - 1);
		s = src + (num - 1);
		while (num--)
			*d-- = *s--;
	}
	return (dest);
}