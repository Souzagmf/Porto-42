#include "libft.h"
#include <stdlib.h>

void ft_bzero(void *str, size_t size)
{
	unsigned char *ptr;

	ptr = (unsigned char *)str;
	while (size-- > 0)
		*ptr++ = 0;
}
/*
#include <stdio.h>
int main(int argc, char const *argv[])
{
	char str[] = "Fada";

	ft_bzero(str, 4);
	printf("%s", str);
	return 0;
}
*/
