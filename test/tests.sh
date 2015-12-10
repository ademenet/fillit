#!/bin/bash

rm -rf test
echo "\033[34m>>>\033[0m compilation"
gcc -Wall -Wextra -Werror -o test test_fillit.c ../ft_bsq.c\
	../ft_sqrt.c 
if [ -e "test" ] && [ -x "test" ]
then
	echo "\033[32m>>>\033[0m done, launching..."
	./test
else
	echo "\033[31m>>>\033[0m an error occured: no executable file 'test'"
fi
exit 0;
