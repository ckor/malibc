gcc -c -W -Wall -Werror -Wextra -pedantic -ansi -I ./ ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c
ar rc libft.a ft_putchar.o ft_swap.o ft_putstr.o ft_strlen.o ft_strcmp.o
find . -name "*.o" -delete
