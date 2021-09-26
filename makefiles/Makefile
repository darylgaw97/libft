source := $(wildcard *.c)
objects = $(source:.c=.o)
NAME = libft.a
FLAGS = -Wall -Wextra -Werror

all: $(NAME)
	gcc $(FLAGS) $(objects)

$(NAME): libft.h $(objects)
	ar rcs $(NAME) $(objects)
	
$(objects): $(source)

clean:
	rm *.o a.out libft.a
