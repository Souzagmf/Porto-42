#include <stdio.h>

char *ft_strcat(char *dest, char *src);

int main(void)
{
    char arr_dest[100] = "its time to ";
    char arr_source[] = "give up, or go on?";


    ft_strcat(arr_dest, arr_source);
    printf("%s\n", arr_dest);
}

char *ft_strcat(char *dest, char *src)
{
    while (*dest != '\0')
    {
        dest++;
    }

    while (*src != '\0')
    {
        *dest = *src; //continue where previous while end
        src++;
        dest++;
    }
    dest = '\0';
    
    return dest;
}