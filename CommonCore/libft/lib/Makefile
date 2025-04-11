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
	@$(CC) $(CFLAGS) -c $<

clear:
	@rm -rf $(OBJ)

fclear:
	rm -rf $(NAME)

erase: fclear clear

#Recompile the file
re: erase all