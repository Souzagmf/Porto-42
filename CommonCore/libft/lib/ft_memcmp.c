#include "libft.h"

int ft_memcmp(const void *src1, const void *src2, size_t bytes)
{
	size_t i;
	unsigned char *_src1;
	unsigned char *_src2;

	i = 0;
	_src1 = (unsigned char *)src1;
	_src2 = (unsigned char *)src2;
	if (bytes == 0)
		return (0);
	while (i < bytes)
	{
		if (_src1[i] != _src2[i])
			return (_src1[i] - _src2[i]);
		i++;
	}
	return (0);
}