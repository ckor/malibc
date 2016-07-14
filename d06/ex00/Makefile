NAME		=	$(FT_LIB)

FT_LIB_NAME	=	ft

FT_LIB		=	lib$(FT_LIB_NAME).a

SRC_DIR		+=	./

SRCS		=	ft_putchar.c \
			ft_putnbr.c \
			ft_swap.c \
			ft_putstr.c \
			ft_strlen.c \
			ft_strcmp.c \
			ft_atoi.c

OBJS		=	$(SRCS:.c=.o)

HEADERS_DIR	+=	./

HEADERS		=	libft.h

CFLAGS		+=	-W -Wall -Werror -Wextra -pedantic -ansi

CC		=	gcc

RM		=	@rm -f

CLEAN		=	@find . -name "*~" -delete -o -name "\#*\#" -delete

all	:
		@make $(NAME)

$(NAME)	:	$(OBJS)
		ar rc $(FT_LIB) $(OBJS)

$(OBJS)	:	%.o	:	$(SRC_DIR)%.c
		$(CC) -c $(CFLAGS) -I $(HEADERS_DIR) $<

clean	:
		$(RM) $(OBJS)
		$(CLEAN)

fclean	:	clean
		$(RM) $(NAME)

re	:	fclean all
