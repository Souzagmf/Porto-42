#include "libft.h"

void *ft_memchr(const void *src, int ch, size_t bytes)
{
	size_t i;
	unsigned char *_src;

	i = 0;
	_src = (unsigned char *)src;
	while (i < bytes)
	{
		if (_src[i] == (unsigned char)ch)
			return (&_src[i]);
		i++;
	}
	return (NULL);
}