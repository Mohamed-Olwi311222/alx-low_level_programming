#!/bin/bash

myfiles=$(ls *.c)

if [ -z "$myfiles" ]; then
	exit 1
fi

for file in $myfiles; do
	gcc -c -fPIC "$file" -o "${file%.c}.o"
done

gcc -shared *.o -o liball.so
rm -f *.o
