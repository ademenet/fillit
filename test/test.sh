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
echo "\033[1;33mTest invalid.tetri\033[0m"
./fillit test/invalid.tetri
echo "\033[1;33mTest invalid2.tetri\033[0m"
./fillit test/invalid2.tetri
echo "\033[1;33mTest invalid3.tetri\033[0m"
./fillit test/invalid3.tetri
echo "\033[1;33mTest invalid4.tetri\033[0m"
./fillit test/invalid4.tetri
echo "\033[1;33mTest invalid5.tetri\033[0m"
./fillit test/invalid5.tetri
echo "\033[1;33mTest invalidSEGV.tetri\033[0m"
./fillit test/invalidSEGV.tetri
echo "\033[1;33mTest 12h.tetri.txt\033[0m"
./fillit test/12h.tetri.txt
echo "\033[1;33mTest 1.fillit\033[0m"
./fillit test/1.fillit
echo "\033[1;33mTest 11.fillit\033[0m"
./fillit test/11.fillit
echo "\033[1;33mTest 12h.fillit\033[0m"
./fillit test/12h.fillit
#echo "\033[1;33mTest 13.fillit\033[0m"
#./fillit test/13.fillit
#echo "\033[1;33mTest 14.fillit\033[0m"
#./fillit test/14.fillit
#echo "\033[1;33mTest 15.fillit\033[0m"
#./fillit test/15.fillit
#echo "\033[1;33mTest 16.fillit\033[0m"
#./fillit test/16.fillit
#echo "\033[1;33mTest 17.fillit\033[0m"
#./fillit test/17.fillit
#echo "\033[1;33mTest 19.fillit\033[0m"
#./fillit test/19.fillit
echo "\033[1;33mTest 1e.fillit\033[0m"
./fillit test/1e.fillit
echo "\033[1;33mTest 2.fillit\033[0m"
./fillit test/2.fillit
#echo "\033[1;33mTest 21.fillit\033[0m"
#./fillit test/21.fillit
#echo "\033[1;33mTest 25.fillit\033[0m"
#./fillit test/25.fillit
#echo "\033[1;33mTest 26.fillit\033[0m"
#./fillit test/26.fillit
echo "\033[1;33mTest 3.fillit\033[0m"
./fillit test/3.fillit
echo "\033[1;33mTest 4.fillit\033[0m"
./fillit test/4.fillit
echo "\033[1;33mTest 7.fillit\033[0m"
./fillit test/7.fillit
echo "\033[1;33mTest 9.fillit\033[0m"
./fillit test/9.fillit
