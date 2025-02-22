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
	/* create the row */ 
	while (index_row < user_row)
	{
		/* create the coluns */
		while (index_col < user_col)
		{
			/*First line condition */
			if(index_row == 0)
			{
				/* Put the letter A on first position and last position on line */
				if (index_col == 0 || index_col == (user_col - 1))
                        	{
                                	ft_putchar(LETTER_CORNER_UP);
                        	}
				/* case on middle put letter B */
				else
                        	{
                                	ft_putchar(LETTER_MIDDLE);
                        	}
			}
			/* Verify if are bellow the first line and upper last line */
			else if (index_row > 0 && index_row < (user_row -1))
			{
				/* Put the letter on first collum and last collum  */
				if(index_col == 0 || index_col == (user_col - 1))
				{
					ft_putchar(LETTER_MIDDLE);
				}
				/* case on middle put space */
				else
				{
					ft_putchar(SPACE_MIDDLE);
				}
			}
			/* verify if stay on last line */
			else if(index_row == (user_row -1))
                        {
				/* put the letter C  on first and last position on last line */
                                if (index_col == 0 || index_col == (user_col - 1))
                                {
                                        ft_putchar(LETTER_CORNER_DOWN);
                                }
				/* case on middle put letter B  */
                                else
                                {
                                        ft_putchar(LETTER_MIDDLE);
                                }
                        }
			index_col++;
		}
		/* break line, reset colluns index, and add 1 on index line */
		write(1, "\n", 2);
		index_col = 0;
		index_row++;
	}
}
