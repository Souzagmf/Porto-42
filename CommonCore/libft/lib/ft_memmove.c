#include "libft.h"

// Copy bytes of string 

void *ft_memmove(void *dest, const void *src, size_t bytes)
{
	unsigned char *_dest;
	unsigned char *_src;

	_dest = (unsigned char *)dest;
	_src = (unsigned char *)src;

	if (!_dest && !_src)
		return (NULL);
	if(_src > _dest)
		return (ft_memcpy(_dest, _src, bytes));
	while(bytes--)
		_dest[bytes] = _src[bytes];
	return (_dest);
}