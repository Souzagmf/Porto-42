#include "libft.h"

//	locate byte in byte string.

void *ft_memchr(const void *src, int ch, size_t bytes)
{
	size_t index;
	unsigned char *_src;

	index = 0;
	_src = (unsigned char *)src;
	while (index < bytes)
	{
		if (_src[index] == (unsigned char)ch)
			return (&_src[index]);
		index++;
	}
	return (NULL);
}