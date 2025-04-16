#include "libft.h"

// Copy a string

void *ft_memcpy(void *dest, const void *src, size_t bytes)
{
	unsigned char *_dest;
	const unsigned char *_src;

	_dest = (unsigned char *)dest;
	_src = (const unsigned char *)src;

	if (!_dest && !_src)
		return (NULL);

	while (bytes--)
		*_dest++ = *_src++;

	return (dest);
}