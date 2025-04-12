#Variables
CC = gcc
CFLAGS = -Wall -Wextra -Werror -g
SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)

NAME = libft.a

all: $(NAME)

#create the "libft.a" with all dependencies
$(NAME): $(OBJ)
	@ar rcs $@ $^

%.o: %.c
	@$(CC) $(CFLAGS) -c $<

clear:
	@rm -rf $(OBJ)

fclear: clear
	@rm -rf $(NAME)

#Recompile the file
re: fclear all