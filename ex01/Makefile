# ************************************************************************** #
#                                                                            #
#                                                        :::      ::::::::   #
#   Makefile                                           :+:      :+:    :+:   #
#                                                    +:+ +:+         +:+     #
#   By: wzafati <marvin@42.fr>                     +#+  +:+       +#+        #
#                                                +#+#+#+#+#+   +#+           #
#   Created: 2016/07/10 03:14:17 by wzafati           #+#    #+#             #
#   Updated: 2016/07/10 08:00:17 by wzafati          ###   ########.fr       #
#                                                                            #
# ************************************************************************** #

ifeq	($(MAKECMDGOALS),)
		GOALS+="main.c"
else
	GOALS:=$(MAKECMDGOALS)
endif

NAMES	=	$(GOALS:.c:)

CC	=	gcc

CFLAGS	+=	-W -Wall -Werror -pedantic -ansi

SRCS	=	$(GOALS)

OBJS	=	$(SRCS:.c=.o)

RM	=	rm -Rf

CLEAN	=	clean

.PHONY	:	all

all	:	$(OBJS)
		@for NAME in $(NAMES) ; do \
			$(CC) -o $$NAME $(OBJS) ; \
		done

%	:	all
		@:

clean	:
		$(RM) $(OBJS)
		@$(CLEAN)

fclean	:	clean
		$(RM) $(GOALS)

re	:	fclean all
