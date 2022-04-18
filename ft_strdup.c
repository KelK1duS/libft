#include "libft.h"
#include <stdlib.h>

char *ft_strcpy(char *dest, char *src)
{
	char	*d;

	d = dest;
	while (*src)
		*dest++ = *src++;
	return (d);
}

char	*ft_strdup(char *str)
{
	char *s;

	s = malloc(sizeof(char) * ft_strlen(str));
	if (!s)
		return ((char *)0);
	s = ft_strcpy(s, str);
	return (s);
}