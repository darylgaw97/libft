main: main.o libft.h *.o
	gcc -Wall -Wextra -Werror main.o libft.h *.o

main.o: main.c
	gcc -c -Wall -Wextra -Werror main.c

*.o: *.c
	gcc -c -Wall -Wextra -Werror *.c
