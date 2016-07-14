EXEC		=	my_strdup

FT_LIB_NAME	=	ft

SRC_DIR		=	./

LIB_PATH	=	./

HEADERS_DIR	=	./

SRCS		=	ft_strdup.c \
			main.c

OBJS		=	$(SRCS:.c=.o)

CFLAGS		=	-W -Wall -Werror -Wextra -pedantic -ansi

CC		=	gcc

RM		=	@rm -f

CLEAN		=	@find . -name "*~" -delete -o -name "\#*\#" -delete

all	:
		@make $(EXEC)

$(EXEC)	:	$(OBJS)
		$(CC) -o $(EXEC) $(OBJS) -L$(LIB_PATH) -l$(FT_LIB_NAME)

$(OBJS)	:	%.o	:	$(SRC_DIR)%.c
		$(CC) $(CFLAGS) -I$(HEADERS_DIR) -L$(LIB_PATH) -l$(FT_LIB_NAME) -c $(SRC_DIR)$(SRCS)

clean	:
		$(RM) $(OBJS)
		$(CLEAN)

fclean	:	clean
		$(RM) $(EXEC)

re	:	fclean all
