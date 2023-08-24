#!/bin/bash

# Check if betty is installed
if ! command -v betty &> /dev/null; then
    echo "Betty style checker is not installed. Please install it."
    exit 1
fi

# Set the current directory
directory="$(dirname "$0")"

# Check each C file in the directory using Betty
for file in "$directory"/*.c; do
    if [ -f "$file" ]; then
        echo "Checking $file ..."
        betty "$file"
        echo "--------------------------------"
    fi
done

echo "Style checking complete."