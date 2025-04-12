#include "lib/libft.h"
#include <stdio.h>
int main(void)
{
	char *dest;
	char *str1 = "Flores do";
	char *str2 = " amanhacer";

	dest = ft_strjoin(str1, str2);

	printf("Dest: %s\n\n", dest);
	
	return (0);
}