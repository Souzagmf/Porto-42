#include "libft.h"

void *ft_memset(void *p_src, int s_copy, size_t byte_n)
{
	unsigned char *str = (unsigned char *)p_src;
	while (byte_n > 0)
	{
		*str = s_copy;
		str++;
		byte_n--;
	}

	return (p_src);
}