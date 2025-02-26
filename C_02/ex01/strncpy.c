#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n);

int main(void)
{
	char	str_destiny[100];
	char	str_source[] = "Boulevard of broken dreams";
	int	size_pretend = 35;
	int	index;

	index = 0;
	ft_strncpy(str_destiny, str_source, size_pretend);

	while(index < size_pretend)
	{
		printf("Dest: %c  || Pos: %d\n", str_destiny[index], index);
		index++;
	}
}

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	index;

	index = 0;
	while(index < n && src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	while (index < n)
	{
		dest[index] = '\0';
		index++;
	}
	return (dest);

}
