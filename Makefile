# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ademenet <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/12/09 15:31:10 by ademenet          #+#    #+#              #
#    Updated: 2015/12/09 17:56:54 by ademenet         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all, clean, fclean, re
.SUFFIXES:

SRC_PATH = ./src/
SRC_NAME = main.c\

OBJ_PATH = ./obj/

INC_PATH = ./include/

LIB_PATH = ./lib/
LIB_NAME = fillit.h\
		   libft.h

NAME = fillit

CC = gcc
CFLAGS = -Wall -Wextra -Werror

OBJ_NAME = $(SRC_NAME:.c=.o)

SRC = $(addprefix $(SRC_PATH),$(SRC_NAME))
OBJ = $(addprefix $(OBJ_PATH),$(OBJ_NAME))
LIB = $(addprefix -L,$(LIB_PATH))
INC = $(addprefix -I,$(INC_PATH))

all: $(NAME)

$(NAME): $(INC) $(OBJ)
	echo -e "\033[44m---------- COMPILATION DE $(NAME) -----------\033[0m"
	$(CC) $(CFLAGS) $(OBJ) -o $@
	echo -e "\033[44m---------- \033[32mEFFECTUE\033[0m\033[44m-----------\033[0m"

$(OBJ_PATH)%.o: $(SRC_PATH)%.c
	@mkdir -p $(OBJ_PATH) 2> /dev/null
	$(CC) $(CFLAGS) $(LIB) $(INC) -o $@ -c $<


clean:
	echo -e "\033[44m---------- CLEAN ! -----------\033[0m"
	rm -rf $(OBJ)
	@rmdir $(OBJ_PATH) 2> /dev/null || echo "" /dev/null
	echo -e "\033[44m---------- \033[32mEFFECTUE\033[0m\033[44m-----------\033[0m"

fclean: clean
	echo -e "\033[44m---------- FULL CLEAN ! -----------\033[0m"
	rm -rf $(NAME)
	echo -e "\033[44m---------- \033[32mEFFECTUE\033[0m\033[44m-----------\033[0m"

re: fclean all

norme:
	norminette $(SRC)
	norminette $(INC_PATH)*.h
