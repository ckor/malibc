#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wzafati <wzafati@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/07/14 20:20:43 by wzafati           #+#    #+#              #
#    Updated: 2016/07/14 20:25:15 by wzafati          ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME		=	$(FT_LIB)
FT_LIB_NAME	=	ft
FT_LIB		=	lib$(FT_LIB_NAME).a
SRC_DIR		=	./srcs/
INCLUDES	=	./includes/
BUILD_DIR	=	./
FILES		=	ft_putchar ft_putstr ft_strcmp ft_strlen ft_swap
SRCS		=	$(addprefix $(SRC_DIR), $(FILES:=.c))
OBJS		=	$(addprefix $(BUILD_DIR), $(FILES:=.o))
CFLAGS		+=	-W -Wall -Werror -Wextra -pedantic -ansi
CC			=	gcc
LINKER		=	ar
RM			=	@rm -f
OBJ_CLEAN	=	@find . -name "*.o" -delete
CLEAN		=	@find . -name "*~" -delete -o -name "\#*\#" -delete

$(NAME)		:	$(OBJS)
				$(LINKER) rc $(BUILD_DIR)$(FT_LIB) $(BUILD_DIR)$(OBJS)
				$(LINKER) -s $(BUILD_DIR)$(FT_LIB)

all			:	$(NAME)

$(OBJS)		:
				$(CC) $(CFLAGS) -I $(INCLUDES) -c $(SRCS)

clean		:
				$(OBJ_CLEAN)
				$(CLEAN)

fclean		:	clean
				$(RM) $(NAME)

re			:	fclean all
