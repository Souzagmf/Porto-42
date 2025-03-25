#include <stdio.h>
#include <string.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int main(void)
{
    char arr_buffer[50] = "She's so beautiful || ";
    char arr_str[] = "And I tell her every day, cause your amazing, just the way you are!";
    char arr_buffer_2[50] = "She's so beautiful || ";
    char arr_str_2[] = "And I tell her every day, cause your amazing, just the way you are!";
    unsigned int result, result_2;

    result_2 = strlcat(arr_buffer_2, arr_str_2, sizeof(arr_buffer_2));
    result = ft_strlcat(arr_buffer,arr_str, sizeof(arr_buffer));
    printf("Phrase My: %s\n", arr_buffer);
    printf("Return My: %u\n", result);
    printf("Phrase Of: %s\n", arr_buffer_2);
    printf("Return Of: %u\n", result_2);
}

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{   
	unsigned int	src_size;
	unsigned int	dest_size;
	unsigned int	index;

	src_size = 0;
	dest_size = 0;
	index = 0;
	while (dest[dest_size] && dest_size < size) //set the size of (dest)
	{
		dest_size++;
	}
	while (src[src_size])
	{
		src_size++;	
	}
	if(dest_size >= size - 1) //Case dest dont have space to concatenate
	{
		return size + src_size;
	}
	while (index < src_size && (dest_size + index + 1) < size)
	{
		dest[dest_size + index] = src[index]; //use the data and after increment
		index++;
	}
	dest[dest_size + index] = '\0';
	return (dest_size + src_size);
    
}
