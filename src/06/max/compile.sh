#! /bin/sh
gcc -c main.c
gcc -c max.c
gcc main.o max.o -o main
rm *.o
