#include "libft.h"

char	*ft_strnstr(const char *s, const char *f, size_t n)
{
	int	i;

	while (s++ && n--)
	{
		i = 0;
		while (s[i - 1] == f[i])
		{
			if (f[i])
				return ((char *)--s);
			i++;
		}
	}
	return ((char *)0);
}