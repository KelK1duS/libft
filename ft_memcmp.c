#include "libft.h"

int		ft_memcmp(const void *str1, const void *str2, size_t n)
{
	const char *	s1;
	const char *	s2;

	s1 = str1;
	s2 = str2;
	while (s1 && n--)
	{
		if (*s1++ != *s2++)
			return (*(s1-1) - *(s2-1));		
	}
	return (0);
}