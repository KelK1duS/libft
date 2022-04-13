#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (src[i])
	{
		if (i < size - 1)
			*dest++ = src[i];
		i++;
	}
	if (size)
		*dest = '\0';
	return (i);
}
