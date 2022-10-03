#!/bin/bash
gcc -c *.c
gcc -o liball.so -fpic -shared *.o
