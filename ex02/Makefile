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

NAME	=	atoi

ifeq	($(MAKECMDGOALS),)
		GOALS+="main.c"
SRCS	=	[[ $(GOALS) ]] && 

else
		GOALS:=$(MAKECMDGOALS)
endif

.PHONY : all

all:
	@for GOAL in $(GOALS) ; do \
	gcc $$GOAL -Wall -Werror -Wextra ; \
	done

%:		all
		@: