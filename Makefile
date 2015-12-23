# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ademenet <ademenet@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/12/21 17:34:59 by gvillat           #+#    #+#              #
#    Updated: 2015/12/22 11:59:28 by ademenet         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all, clean, fclean, re, test

SRC_PATH = ./src/
SRC_NAME = 	backtracking.c\
	 		check_file.c\
	 		ft_bsq.c\
	 		ft_collide.c\
			ft_createmap.c\
			ft_printmap.c\
			ft_strsetnew.c\
			ft_trace.c\
			points_assignment.c

OBJ = $(SRC_NAME:.c=.o) $(TEST_NAME:.c=.o) $(LIB_NAME:.c=.o)

TEST_PATH = ./test/
TEST_NAME = main_test.c

LIB_PATH = ./lib/
LIB_NAME = 	ft_putstr.c\
	 		ft_sqrt.c\
	  		ft_strlen.c\
			ft_round.c

INC_PATH = ./inc/
INC_NAME = fillit.h\

NAME = fillit

CC = gcc
CFLAGS = -Wall -Werror -Wextra

SRC = $(addprefix $(SRC_PATH),$(SRC_NAME))
TEST = $(addprefix $(TEST_PATH),$(TEST_NAME))
LIB = $(addprefix $(LIB_PATH),$(LIB_NAME))
INC = $(addprefix $(INC_PATH),$(INC_NAME))

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(SRC) main_true.c $(LIB) -I $(INC) -o $(NAME)

test:
	$(CC) $(CFLAGS) $(SRC) ./test/main_test.c $(LIB) -I $(INC) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

norme:
	norminette $(SRC)
	norminette $(LIB)
