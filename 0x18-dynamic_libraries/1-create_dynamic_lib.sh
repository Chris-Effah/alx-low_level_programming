#!/bin/bash
c_files=$(ls *.c)
for c_file in $c_files; do
    gcc -c -fPIC "$c_file" -o "${c_file%.c}.o"
done
gcc -shared -o liball.so *.o
