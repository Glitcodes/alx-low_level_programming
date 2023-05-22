#!/bin/bash

# File_name: 1-create_dynamic_lib.sh
# Created: 22th May, 2023
# Size: undefined
# Project: 0x18-dynamic_libraries
# Status: submitted.


# Collect all .c files in the current directory
C_FILES=$(ls *.c)

# Compile the .c files into object files
for file in $C_FILES
do
    gcc -c -Wall -Werror -fpic "$file" -o "${file%.c}.o"
done

# Create the dynamic library
gcc -shared -o liball.so *.o

# Clean up object files
rm *.o

echo "Dynamic library liball.so created successfully."
