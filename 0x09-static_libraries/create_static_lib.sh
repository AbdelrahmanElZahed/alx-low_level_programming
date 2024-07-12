#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -c *.c
ar rcs libaall.a *.o
rm *.o
ranlib liball.a
