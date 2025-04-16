#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
	long nb;
	char conversion[2];

	nb = n;
	if (nb < 0)
	{
		ft_putchar_fd('-', 1);
		nb = (nb * (-1));
	}
	if (nb / 10)
	{
		ft_putnbr_fd(nb / 10, 1);
	}
	conversion[0] = (nb % 10) + '0';
	conversion[1] = '\0';
	ft_putstr_fd(conversion, fd);
}