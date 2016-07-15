#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wzafati <wzafati@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/07/15 04:48:39 by wzafati           #+#    #+#              #
#    Updated: 2016/07/15 04:48:42 by wzafati          ###   ########.fr        #
#                                                                              #
#******************************************************************************#

EXEC		=	my_s_point

SRCS		=	$(wildcard *.c)

OBJS		=	$(SRCS:.c=.o)

CFLAGS		=	-W -Wall -Werror -Wextra -pedantic -ansi

CC		=	gcc

RM		=	@rm -f

CLEAN		=	@find . -name "*~" -delete -o -name "\#*\#" -delete

all	:
		@make $(EXEC)

$(EXEC)	:	$(OBJS)
		$(CC) $(OBJS) -o $(EXEC)

%.o	:	%.c
		$(CC) -c $(CFLAGS) $< -o $@

clean	:
		$(RM) $(OBJS)
		$(CLEAN)

fclean	:	clean
		$(RM) $(EXEC)

re	:	fclean all
