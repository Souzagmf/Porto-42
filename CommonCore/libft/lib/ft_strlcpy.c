#include "libft.h"
#include <stdlib.h>

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
/*
#include <stdio.h>
int main(void)
{
	char dest[100];
	char *source = "Novo mundo";

	printf("\n*Create*\n");
	printf("Dest:%s\nSize: %ld\n", dest,ft_strlcpy(dest, source, 11));
	printf("\n*Default*\n");
	printf("Dest:%s\nSize: %ld\n", dest, strlcpy(dest, source, 11));
	return (0);
}*/