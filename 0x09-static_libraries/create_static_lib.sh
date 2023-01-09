#!bin/bash
gcc -Wall -pedanatic -Werror -Wextra -c *.c
ar rc liball.a *.o
