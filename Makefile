# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rpuccine <rpuccine@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/09/09 15:37:03 by rpuccine          #+#    #+#              #
#    Updated: 2015/12/28 19:06:36 by rpuccine         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = clang
CFLAGS = -Wall -Wextra -Werror
SRCS = Colleen.c
SRC = $(addprefix src/, $(SRCS))
OBJ = $(SRC:.c=.o)
NAME = Colleen

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) -o $@ $(OBJ)

%.o: %.c
	$(CC) -o $@ -c $< $(CFLAGS)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
