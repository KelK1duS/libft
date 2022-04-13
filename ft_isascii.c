#include "libft.h"

int	ft_isascii(int c)
{
	return ((c >= 0x0 && c <= 0x7f));
}