#!/bin/bash

rm -rf test
echo "\033[34m>>>\033[0m compilation"
gcc -Wall -Wextra -Werror -o test test_fillit.c ../src/ft_bsq.c\
	../lib/ft_sqrt.c ../src/ft_strsetnew.c ../src/ft_createmap.c\
	~/Github/libft/ft_strnew.c ~/Github/libft/ft_bzero.c\

if [ -e "test" ] && [ -x "test" ]
then
	echo "\033[32m>>>\033[0m done, launching..."
	./test
else
	echo "\033[31m>>>\033[0m an error occured: no executable file 'test'"
fi
exit 0;
