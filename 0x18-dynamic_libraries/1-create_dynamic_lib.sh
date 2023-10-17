#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c -fPIC *.c
gcc -shared -o liball.so *.o
export LD-LIBRARY-PATH=:$LD_LIBRARY_PATH
