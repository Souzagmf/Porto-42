#include "libft.h"

// write a byte to a byte string

void *ft_memset(void *p_src, int s_copy, size_t byte_n)
{
	unsigned char *s = (unsigned char *)p_src;
	while (byte_n > 0)
	{
		*s = s_copy;
		s++;
		byte_n--;
	}

	return (p_src);
}