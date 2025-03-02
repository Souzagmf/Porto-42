#include <stdio.h>
#include <string.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);
int ft_count(char *str);

int main(void)
{
    char arr_buffer[50] = "She's so beautiful || ";
    char arr_str[] = "And I tell her every day";
    char arr_buffer2[50] = "She's so beautiful || ";
    char arr_str2[] = "And I tell her every day";
    unsigned int result;
    unsigned int result_original;

    result_original = strlcat(arr_buffer2, arr_str2,23);
    result = ft_strlcat(arr_buffer,arr_str, 23);
    printf("%s\nOriginal: %s\n", arr_buffer, arr_buffer2);
    printf("%u\nOriginal: %u", result, result_original);
}

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{   
    unsigned int src_size;
    unsigned int calc_size;
    unsigned int dest_size;

    src_size = ft_count(src);
    dest_size = 0;

    while (dest[dest_size] && dest_size < size) //set the size of (dest)
    {
        dest_size++;
    }

    if(dest_size >= size) //Case dest dont have space to concatenate
    {
        return size + src_size;
    }

    calc_size = size - dest_size - 1; // -1 to '\0'

    while (calc_size > 0)
    {
            dest[dest_size++] = *src++; //use the data and after increment
            calc_size--;
    }

    dest[dest_size] = '\0';

    return (dest_size + src_size);
    
}

int ft_count(char *str)
{
    int count;

    count = 0;
    while (*str++)
    {
        count++;
    }
    return (count);
}