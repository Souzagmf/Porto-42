#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);
int 	ft_count_str(char *str);

int main(void)
{
	char arr_source[] = "Nothing else matters";
	char arr_destiny[100];

	ft_strcpy(arr_destiny, arr_source);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	size_str;
	int	index;

	size_str = ft_count_str(src);
	index = 0;

	while(index <= size_str)
	{
		dest[index] = src[index];
		printf("Str: %c\n", dest[index]);
		index ++;
	}

	dest[index] = '\0';

	return (dest);
}

int ft_count_str(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		index++;
	}

	return (index);

}
