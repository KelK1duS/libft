#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*l;

	l = s + ft_strlen(s);
	while (l-- > s)
	{
		if (c == *l)
			return ((char *)l);
	}
	return ((char *)0);
}