#!/bin/bash
gcc -wall -werror -pedantic -c -fPIC *.c
gcc -shared -o liball.so *.o
