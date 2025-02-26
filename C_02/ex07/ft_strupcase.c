#include <stdio.h>

char *ft_strupcase(char *str);

int main(void)
{
    char arr_str[] = "dragonForce";

    ft_strupcase(arr_str);

    printf("%s\n", arr_str);
}

char *ft_strupcase(char *str)
{   
    int index; 
    
    index = 0;

    while (str[index] != '\0')
    {
        if(str[index] >= 'a' && str[index] <= 'z')
        {
            str[index] = str[index] - 32;
        }
        index++;
    }
    
    return str;
}