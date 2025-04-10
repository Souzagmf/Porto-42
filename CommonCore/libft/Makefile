#Variables
CC = gcc
CFLAGS = -Wall -Wextra -Werror -g
SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)
NAME = libft.a

all: $(NAME)

#create the "libft.a" with all dependencies
$(NAME): $(OBJ)
	ar rcs $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $<

nm:
	norminette

clear:
	rm -rf $(OBJ)

fclear:
	rm -rf $(NAME)

erase: fclear clear

re: fclear all