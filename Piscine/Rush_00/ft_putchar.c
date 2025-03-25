#include <unistd.h>


/* print the string or letter */
void	ft_putchar(char str)
{
	write(1, &str, 1);
}
