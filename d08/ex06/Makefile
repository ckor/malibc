#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wzafati <wzafati@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/07/15 04:48:39 by wzafati           #+#    #+#              #
#    Updated: 2016/07/15 07:06:46 by wzafati          ###   ########.fr        #
#                                                                              #
#******************************************************************************#

EXEC		=	my_param_to_tab

HEADERS_DIR	=	./

SRCS		=	$(wildcard *.c)

OBJS		=	$(SRCS:.c=.o)

CFLAGS		=	-W -Wall -Werror -Wextra -pedantic -ansi

CC		=	gcc

RM		=	@rm -f

CLEAN		=	@find . -name "*~" -delete -o -name "\#*\#" -delete

all		:
		@make $(EXEC)

$(EXEC)	:	$(OBJS)
		$(CC) -o $(EXEC) $(OBJS)

$(OBJS)	:	%.o	:	%.c
		$(CC) $(CFLAGS) -I$(HEADERS_DIR) -c $(SRCS)

clean	:
		$(RM) $(OBJS)
		$(CLEAN)

fclean	:	clean
		$(RM) $(EXEC)

re		:	fclean all
