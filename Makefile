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
SRC_COLLEEN = src/Colleen.c

GRACE = Grace
SRC_GRACE = src/Grace.c

SULLY = Sully
SRC_SULLY = src/Sully.c

SRC = $(SRC_COLLEEN) $(SRC_GRACE) $(SRC_SULLY)
OBJ = $(SRC:.c=.o)
EXE = $(COLLEEN) $(GRACE) $(SULLY)

all: $(EXE)

$(COLLEEN): $(SRC_COLLEEN:.c=.o)
	$(CC) -o $@ $<

$(GRACE): $(SRC_GRACE:.c=.o)
	$(CC) -o $@ $<

$(SULLY): $(SRC_SULLY:.c=.o)
	$(CC) -o $@ $<

%.o: %.c
	$(CC) -o $@ -c $< $(CFLAGS)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(EXE)

re: fclean all
