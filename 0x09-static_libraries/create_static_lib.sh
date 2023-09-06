#!/bin/bash

# Compile and create object files from all .c files in the current directory
gcc -c *.c

# Create a static library named liball.a from the generated object files
ar -rc liball.a *.o

# Index the static library for faster linking
ranlib liball.a

# Clean up the temporary object files
rm -f *.o

echo "Static library liball.a created successfully."

