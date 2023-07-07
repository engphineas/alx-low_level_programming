#!/bin/bash
gcc -Wall -Wextra -Werror -edantic -c *.c
ar rc liball.a *.o
