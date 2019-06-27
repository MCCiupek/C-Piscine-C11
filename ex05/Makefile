# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mciupek <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/24 22:28:04 by mciupek           #+#    #+#              #
#    Updated: 2019/06/26 19:02:29 by mciupek          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= do-op
SRCS	= main.c ft_atoi.c ft_putstr.c ft_putnbr.c ft_strcmp.c
SRCDIR	= ./
INCDIR	= ft.h
CC		= gcc
FLAGS	= -Wall -Wextra -Werror
OBJ		= $(addprefix $(SRCDIR), $(SRCS:.c=.o))

$(SRCDIR)%.o:	$(SRCDIR)%.c
				$(CC) $(FLAGS) -I $(INCDIR) -o $@ -c $<

$(NAME): 		$(OBJ)
				$(CC) -o $(NAME) $(OBJ)

all: 			$(NAME)

clean:
				rm -f $(OBJ)

fclean: 		clean
				rm -f $(NAME)

.PHONY:			all clean fclean re
