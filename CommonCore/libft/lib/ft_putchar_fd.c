#include "libft.h"

// Write a char on screen;

void ft_putchar_fd(char const s, int fd)
{
	write(fd, &s, 1);
}