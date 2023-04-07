#!/bin/bash
gcc -c *c -o *.o
ar rcs liball.a *.o
