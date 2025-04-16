#include "libft.h"
#include <stdlib.h>

// size-bounded string concatenation.

size_t ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t size_dest;
	size_t size_src;
	size_t index;

	index = 0;
	size_dest = 0;
	size_src = 0;

	while (dest[size_dest] && size_dest < size)
		size_dest++;
	while (src[size_src])
		size_src++;
	if (size_dest >= size)
		return (size + size_src);

	while (src[index] && (size_dest + index + 1) < size)
	{
		dest[size_dest + index] = src[index];
		index++;
	}

	dest[size_dest + index] = '\0';
	return (size_dest + size_src);
}
/*
#include <stdio.h>
#include <string.h>
int main(void)
{
	char dest[100] = "Terceiro ";
	char *source = "Novo mundo";
	
	printf("\n*Create*\n");
	printf("Dest:%s\nSize: %zu\n", dest, ft_strlcat(dest, source, 5));
	printf("\n*Default*\n");
	printf("Dest:%s\nSize: %zu\n\n\n\n\n", dest, strlcat(dest, source, 5));
	return (0);
}
*/