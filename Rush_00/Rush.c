#include <unistd.h>
#include "ft_putchar.c"

#define LETTER_CORNER_UP 'A'
#define LETTER_MIDDLE 'B'
#define LETTER_CORNER_DOWN 'C'
#define SPACE_MIDDLE ' '

void	rush(int user_row,int user_col)
{
	int index_row;
	int index_col;

	index_row = 0;
	index_col = 0;
	while (index_row < user_row)
	{
		while (index_col < user_col)
		{
			if(index_row == 0)
			{
				if (index_col == 0 || index_col == (user_col - 1))
                        	{
                                	ft_putchar(LETTER_CORNER_UP);
                        	}
				else
                        	{
                                	ft_putchar(LETTER_MIDDLE);
                        	}
			}
			else if (index_row > 0 && index_row < (user_row -1))
			{
				if(index_col == 0 || index_col == (user_col - 1))
				{
					ft_putchar(LETTER_MIDDLE);
				}
				else
				{
					ft_putchar(SPACE_MIDDLE);
				}
			}
			else if(index_row == (user_row -1))
                        {
                                if (index_col == 0 || index_col == (user_col - 1))
                                {
                                        ft_putchar(LETTER_CORNER_DOWN);
                                }
                                else
                                {
                                        ft_putchar(LETTER_MIDDLE);
                                }
                        }
			index_col++;
		}
		write(1, "\n", 2);
		index_col = 0;
		index_row++;
	}
}
