# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ademenet <ademenet@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/12/21 17:34:59 by gvillat           #+#    #+#              #
#    Updated: 2015/12/26 11:25:28 by tvisenti         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all, clean, fclean, re

SRC_PATH = ./src/
SRC_NAME =	check_file.c\
			ft_bsq.c\
			ft_createmap.c\
			ft_strsetnew.c\
			points_assignment.c\
			initfile.c\
			affichage.c\
			main.c

OBJ = $(SRC_NAME:.c=.o) $(TEST_NAME:.c=.o) $(LIB_NAME:.c=.o)

LIB_PATH = ./lib/
LIB_NAME = 	ft_putstr.c\
			ft_putchar.c\
			ft_putnbr.c\
	 		ft_sqrt.c\
	  		ft_strlen.c\
			ft_round.c

INC_PATH = ./inc/
INC_NAME = fillit.h\

NAME = fillit

CC = gcc
CFLAGS = -Wall -Werror -Wextra

SRC = $(addprefix $(SRC_PATH),$(SRC_NAME))
LIB = $(addprefix $(LIB_PATH),$(LIB_NAME))
INC = $(addprefix $(INC_PATH),$(INC_NAME))

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(SRC) $(LIB) -I $(INC) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

norme:
	norminette $(SRC)
	norminette $(LIB)
