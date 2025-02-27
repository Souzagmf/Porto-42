#include <stdio.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

int ft_count_str(char *arr_source);

int	main(void)
{
	char	arr_destiny[20];
	char	arr_source[] = "Billie Jean";		unsigned int	dest_size;

	dest_size = ft_count_str(arr_source); /* count the size of source to copy all data */
	ft_strlcpy(arr_destiny, arr_source, dest_size +1);

	printf("Arr destiny: %s || Arr size: %d", arr_destiny, dest_size);
	return (0);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size) /* return a value positive to string size, and copy to dest all data of src */
{

	unsigned int	index;

	index = 0;
	if(size == 0) /* case size 0, give a dest value EMPTY */
	{
		dest[0] = '\0';
		return (0);
	}
	while(index < (size - 1) && src[index] != '\0') /* Case end the line or reach of limit size */
	{
		dest[index] = src[index];
		index++;
	}

	dest[index] = '\0';

	return (ft_count_str(src));  /* return th size of source */
}

int	ft_count_str(char *arr_source) /* Only count all characteres of string (Array) */
{
	size_t	index;

	index = 0;
	while(arr_source[index] != '\0')
	{
		index++;
	}

	return (index);
}
