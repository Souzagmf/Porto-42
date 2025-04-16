#include "libft.h"

// size-bounded string copy.

unsigned int ft_strlcpy(char *destiny, const char *source, size_t size)
{
	unsigned int src_size = 0;

	while (source[src_size])
		src_size++;
	if (size == 0)
		return (src_size);
	while (size > 0)
	{
		*destiny = *source;
		destiny++;
		source++;
		size--;
	}

	*destiny = '\0';

	return (src_size);
}