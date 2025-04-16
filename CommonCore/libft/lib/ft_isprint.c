#include "libft.h"

// Veryfy if the character is printable
int ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}