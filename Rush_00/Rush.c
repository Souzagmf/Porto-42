#include <unistd.h>
#include "ft_putchar.c"

#define LETTER_CORNER_UP 'A'
#define LETTER_MIDDLE 'B'
#define LETTER_CORNER_DOWN 'C'
#define SPACE_MIDDLE ' '

void	rush(int user_line,int user_row)
{
	int index_line;
	int index_row;

	index_line = 0;
	index_row = 0;
	while (index_line < user_line)
	{
		while (index_row < user_row)
		{
			if(index_line == 0)
			{
				if (index_row == 0 || index_row == (user_row - 1))
                        	{
                                	ft_putchar(LETTER_CORNER_UP);
                        	}
				else
                        	{
                                	ft_putchar(LETTER_MIDDLE);
                        	}
			}
			else if (index_line > 0 && index_line < (user_line -1))
			{
				if(index_row == 0 || index_row == (user_row - 1))
				{
					ft_putchar(LETTER_MIDDLE);
				}
				else
				{
					ft_putchar(SPACE_MIDDLE);
				}
			}
			else if(index_line == (user_line -1))
                        {
                                if (index_row == 0 || index_row == (user_row - 1))
                                {
                                        ft_putchar(LETTER_CORNER_DOWN);
                                }
                                else
                                {
                                        ft_putchar(LETTER_MIDDLE);
                                }
                        }
			index_row++;
		}
		write(1, "\n", 2);
		index_row = 0;
		index_line++;
	}
}
