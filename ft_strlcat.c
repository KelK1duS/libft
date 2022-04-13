#include "libft.h"

size_t	ft_strnlen(const char *str, size_t max)
{
	size_t	i;

	while (str[i] && i < max)
		i++;
	return (i);	
}

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	len;

	len = ft_strnlen(dest, size);
	if (len == size)
		return (len + ft_strlen(src));
	return (len + ft_strlcpy(dest + len, src, size - len));
}
