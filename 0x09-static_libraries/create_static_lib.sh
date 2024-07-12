#!/bin/bash
gcc -c *.c
ar rcs libaall.a *.o
rm *.o
echo "Static library liball.a created successfully."
