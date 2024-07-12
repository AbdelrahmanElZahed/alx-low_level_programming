#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -c *.c
ar -rc libaall.a *.o
ranlib liball.a
