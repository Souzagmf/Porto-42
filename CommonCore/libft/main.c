#include "lib/libft.h"
#include <stdio.h>

int main(void)
{
	char dest[100];
	void *algo;
	char *src = "Flores do amanhacer";

	algo = ft_memcpy(dest, src, ft_strlen(src) + 1);

	printf("1:%p\n2:%s\n\n", algo, dest);
	return (0);
}