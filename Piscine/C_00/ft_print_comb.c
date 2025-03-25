#include <unistd.h>
#include <string.h>

void	ft_print_comb(void)
{
	char	str[3];
        int     num_1; 
        int     num_2; 
        int     num_3;

        num_1 = 0;
        while (num_1 < 10)
        {
               	num_2 = num_1 + 1;
               	while (num_2 < 10)
               	{
                       	num_3 = num_2 + 1;
                       	while(num_3 < 10)
                       	{
                               	str[0] = num_1 + '0';
                               	str[1] = num_2 + '0';
                               	str[2] = num_3 + '0';
                               	write(1, str, strlen(str));
				if(str[0] != '7' && str[1] != '8' && str[])
				write(1, ", ", 2);				
                               	num_3++;
                       	}
                       	num_2++;
               	}	
               	num_1++;
        }
}


int	main(void)
{
	ft_print_comb();
	return (0);
}
