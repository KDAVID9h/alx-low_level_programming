# Debugging Project

This project contains several tasks related to debugging C code. Each task has its own specific requirements for fixing or testing code.

## Task 0: Multiple mains

In most projects, we often give you only one main file to test with. This task involves creating a new main.c file named `0-main.c` to test the `positive_or_negative()` function when given a case of 0.

### Usage
Compile and run the code using the following commands:

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 positive_or_negative.c 0-main.c -o 0-main
./0-main
