# Project: Function Pointers

This repository contains C programs that demonstrate the use of function pointers.

## Project Files

- **0-print_name.c:** A C program that defines a function `print_name` that prints a name using a function pointer.

- **1-array_iterator.c:** A C program that defines a function `array_iterator` that executes a function on each element of an array using a function pointer.

- **2-int_index.c:** A C program that defines a function `int_index` that searches for an integer in an array using a function pointer.

- **3-calc.h:** A header file that contains function prototypes and a data structure for a calculator program.

- **3-op_functions.c:** A C program that contains functions for addition, subtraction, multiplication, division, and modulo operations used in the calculator program.

- **3-get_op_func.c:** A C program that contains a function `get_op_func` that selects the appropriate operation function for the calculator based on the operator provided.

- **3-main.c:** The main program that handles user input and invokes the calculator functions.

## How to Compile

You can compile the programs using the following commands:

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-print_name.c 0-main.c -o 0-print_name
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-array_iterator.c 1-main.c -o 1-array_iterator
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-int_index.c 2-main.c -o 2-int_index
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-op_functions.c 3-get_op_func.c -o calc
```

## How to Run

You can run each program with the provided examples as follows:

```bash
./0-print_name
./1-array_iterator
./2-int_index
./calc <num1> <operator> <num2>
```

Replace `<num1>`, `<operator>`, and `<num2>` with the desired values and operator for the calculator program.

## Author

This project is authored by HKDE.