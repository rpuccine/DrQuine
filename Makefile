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

COLLEEN = Colleen
SRC_COLLEEN = Colleen.c

GRACE = Grace
SRC_GRACE = Grace_2.c

SRC = $(SRC_COLLEEN) $(SRC_GRACE)
OBJ = $(SRC:.c=.o)
EXE = $(COLLEEN) $(GRACE)

all: $(EXE)

$(COLLEEN): $(SRC_COLLEEN:.c=.o)
	$(CC) -o $@ $<

$(GRACE): $(SRC_GRACE:.c=.o)
	$(CC) -o $@ $<

%.o: %.c
	$(CC) -o $@ -c $< $(CFLAGS)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(EXE)

re: fclean all
