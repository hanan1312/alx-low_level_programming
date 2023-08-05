
#!/bin/bash

# Get the current directory
current_dir=$(pwd)

# Create the target directory
mkdir 0x09-static_libraries

# Get the list of directories
directories=$(find $current_dir -type d)

# Get the list of files to copy
files_to_copy=("0-isupper.c" "0-memset.c" "0-strcat.c" "1-isdigit.c" "1-memcpy.c" "2-strchr.c" "3-strlen.c")

# Loop through the directories
for directory in $directories; do

  # Get the list of files in the directory
  files=$(find $directory -type f)

  # Loop through the files
  for file in $files; do

    # Check if the file matches the list of files to copy
    if [[ $file in "$files_to_copy" ]]; then

      # Copy the file to a new directory
      cp $file 0x09-static_libraries/
    fi
  done
done
