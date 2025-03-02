#include <stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int nb);

int main(void)
{
    char arr_dest[100] = "its time to ";
    char arr_source[] = "give up, or go on?";


    ft_strncat(arr_dest, arr_source, 8);
    printf("%s\n", arr_dest);
}

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
    while (*dest != '\0')
    {
        dest++;
    }

    while (nb > 0)
    {
        *dest = *src; //continue where previous while end
        src++;
        dest++;
        nb--;
    }
    dest = '\0';
    
    return dest;
}