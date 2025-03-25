#include <stdio.h>

char *ft_strstr(char *str, char *to_find);

int main(void)
{
    char arr_dest[] = "Nothing can change how i fell about you!!";
    char arr_find[] = "";
    char *result;

    result = ft_strstr(arr_dest, arr_find);
    if (result)
        printf("%s\n", result);
    else
        printf("Words not found\n");
    return (0);
}

char *ft_strstr(char *str, char *to_find)
{
    
    char *start;
    char *find;

    start = str;
    find = to_find;
    if(*to_find == '\0')
    {
        return (str);
    }
    while (*str)
    {
        find = to_find; //restat to first position
        start = str; //each loop fixed to current position
        while (*str && *find && (*str == *find))//Verify every words tha match until find end
        {
            str++;
            find++;
        }
        
        if(!*find)//Found all words
        {    
              return(start);//Return the position on first current loop          
        }
        str = start + 1; //increment to next character
    }
    return (NULL);
}