# 0x18-dynamic_libraries

Description of the project goes here.

## Table of Contents
- [Introduction](#introduction)
- [Requirements](#requirements)
- [File Structure](#file-structure)
- [Usage](#usage)
- [Scripts](#scripts)
- [Author](#author)

## Introduction

Briefly describe the purpose and goals of the project.

## Requirements

- The project is written in C and Bash.
- All C files should adhere to the Betty style.
- No use of standard library functions is allowed (except for `_putchar`).
- Each file should end with a new line.
- ...

## File Structure

- `libdynamic.c`: Contains the implementation of the required functions.
- `main.h`: Header file containing function prototypes.
- `1-create_dynamic_lib.sh`: Bash script to create a dynamic library.

## Usage

```bash
# Compile the dynamic library
gcc -Wall -Werror -Wextra -pedantic -shared -o libdynamic.so -fPIC libdynamic.c

# Execute the script to create a dynamic library from all .c files
./1-create_dynamic_lib.sh
```

## Scripts

### 1-create_dynamic_lib.sh

This script compiles all .c files in the current directory into a dynamic library named `liball.so`.

## Author

Your HOGNON <dhognon9@gmail.com>
