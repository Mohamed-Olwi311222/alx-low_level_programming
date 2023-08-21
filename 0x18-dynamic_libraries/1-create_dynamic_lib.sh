#!/bin/bash
gcc *.c -c
gcc *.o -shared -fPIC liball.so
