#!/bin/bash

# Get all .c files in the current directory
c_files=$(find . -maxdepth 1 -name '*.c' -type f)

# Compile and create object files
for file in $c_files; do
    gcc -c -fPIC "$file" -o "${file%.c}.o"
done

# Create the dynamic library
gcc -shared -o liball.so *.o

# Clean up object files
rm -f *.o
