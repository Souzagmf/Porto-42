#include <stdio.h>

char *ft_strlowcase(char *str);

int main(void)
{
    char arr_str[] = "Bullet FOR my VALENTINE";

    ft_strlowcase(arr_str);

    printf("%s\n", arr_str);
}

char *ft_strlowcase(char *str)
{   
    int index; 
    
    index = 0;

    while (str[index] != '\0')
    {
        if(str[index] >= 'A' && str[index] <= 'Z') 
        {
            str[index] = str[index] + 32;
        }
        index++;
    }
    
    return str;
}