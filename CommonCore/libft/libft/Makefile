#Variables
CC = gcc
CFLAGS = -Wall -Wextra -Werror -g
SRC = ft_isalnum.c \
	ft_isascii.c \
	ft_isalpha.c \
	ft_isdigit.c \
	ft_isprint.c \
	ft_tolower.c \
	ft_toupper.c \
	ft_atoi.c \
	ft_calloc.c \
	ft_strdup.c \
	ft_bzero.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_memset.c \
	ft_strlen.c \
	ft_strchr.c \
	ft_strrchr.c \
	ft_strnstr.c \
	ft_strncmp.c \
	ft_strcmp.c \
	ft_strlcpy.c \
	ft_strlcat.c \
	ft_putchar_fd.c \
	ft_putstr_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c \
	ft_itoa.c \
	ft_substr.c \
	ft_strtrim.c \
	ft_strjoin.c \
	ft_split.c \
	ft_strmapi.c \
	ft_striteri.c \
OBJ = $(SRC:.c=.o)

NAME = libft.a

all: $(NAME)

#create the "libft.a" with all dependencies
$(NAME): $(OBJ)
	@ar rcs $@ $^

%.o: %.c
	@$(CC) $(CFLAGS) -c $<

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME)

#Recompile the file
re: fclean all