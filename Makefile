.PHONY: all fclean clean re bonus

NAME = libft.a
CC = gcc

#$(NAME)
#all
#clean
#fclean
#re
#bonus
everything := $(patsubst %.c,%.o,$(wildcard *.c))

all: $(NAME)

$(NAME): $(everything)
	ar rcs libft.a $(everything)

re: fclean all

clean:
	rm -rf *.o

fclean: clean
	rm -rf *.o libft.a
