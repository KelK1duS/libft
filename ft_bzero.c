#include "libft.h"

void	*ft_bzero(void *ptr, size_t n)
{
	return (ft_memset(ptr, 0, n));
}
