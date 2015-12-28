#!/bin/bash

make re

echo "\033[1;33mTest file_false\033[0m"
./fillit test/file_false
echo "\033[1;33mTest file_false_tetri\033[0m"
./fillit test/file_false_tetri
echo "\033[1;33mTest file_test\033[0m"
./fillit test/file_test
echo "\033[1;33mTest file_test2\033[0m"
./fillit test/file_test2
echo "\033[1;33mTest file_test3\033[0m"
./fillit test/file_test3
echo "\033[1;33mTest file_test4\033[0m"
./fillit test/file_test4
