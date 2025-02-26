#include <stdio.h>

char *ft_strcapitalize(char *str);

int main(void)
{
    char arr_str[] = "bring-me-the horizon";

    ft_strcapitalize(arr_str);

    printf("%s\n", arr_str);
}

char *ft_strcapitalize(char *str)
{   
    int index; 
    
    index = 0;

    while (str[index] != '\0')
    {
        if(str[index] >= 'a' && str[index] <= 'z') 
        {
            if(index == 0) //case fist position
            {
                str[index] = str[index] - 32;
            }
            else if((str[index - 1] < 'A' && str[index - 1] >= ' ') || (str[index - 1] > 'Z' && str[index - 1] < 'a') || (str[index - 1] > 'z' && str[index - 1] <= 'DELETE')) // case out of alphabet uppercase
            {
                str[index] = str[index] - 32;
            }            
        }
        index++;
    }
    
    return str;
}
