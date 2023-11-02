# Trust no one

This is a simple C program that demonstrates memory allocation using the `malloc` function.

## Table of Contents

- [Description](#description)
- [Usage](#usage)
- [File Descriptions](#file-descriptions)
- [Author](#author)

## Description

The program, `malloc_checked`, is a C function that allocates memory using `malloc`. It takes an `unsigned int` parameter `b` and returns a pointer to the allocated memory. If `malloc` fails to allocate the memory, the `malloc_checked` function causes the normal process termination with a status value of 98.

## Usage

To use this program, you can follow these steps:

1. Clone this repository to your local machine.
2. Navigate to the project directory.
3. Compile the C files using your preferred C compiler (e.g., `gcc`):

   ```sh
   gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-malloc_checked.c -o my_program
   ```

4. Run the program:

   ```sh
   ./my_program
   ```

   This will demonstrate how the `malloc_checked` function allocates memory and handles cases where `malloc` fails.

## File Descriptions

- `0-main.c`: A main program to test the `malloc_checked` function.
- `0-malloc_checked.c`: The implementation of the `malloc_checked` function.

## Author

- [HOGNON Kossi David](https://github.com/KDAVID9h)
```
