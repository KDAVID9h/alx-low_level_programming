# Project Title

Doubly Linked List Operations in C

## Project Description

This project implements various operations on a doubly linked list in C, following specific requirements. The tasks include printing the list, finding the list length, adding nodes at the beginning or end, freeing the list, getting a node at a specific index, finding the sum of all data, inserting at an index, and deleting at an index. Additionally, there are tasks related to cracking a password, finding the largest palindrome, and creating a keygen for a crackme program.

## Project Structure

- `0-print_dlistint.c`: Print all elements of a doubly linked list.
- `1-dlistint_len.c`: Return the number of elements in a doubly linked list.
- `2-add_dnodeint.c`: Add a new node at the beginning of a doubly linked list.
- `3-add_dnodeint_end.c`: Add a new node at the end of a doubly linked list.
- `4-free_dlistint.c`: Free a doubly linked list.
- `5-get_dnodeint_at_index.c`: Return the nth node of a doubly linked list.
- `6-sum_dlistint.c`: Return the sum of all data in a doubly linked list.
- `7-insert_dnodeint_at_index.c`: Insert a new node at a given position in a doubly linked list.
- `8-delete_dnodeint_at_index.c`: Delete the node at a given index in a doubly linked list.
- `9-crackme4.c`: Find the password for crackme4 and save it in the file `100-password`.
- `10-largest_palindrome.c`: Find the largest palindrome made from the product of two 3-digit numbers and save it in the file `102-result`.
- `11-keygen5.c`: Create a keygen for crackme5.

## Requirements

- All files should end with a new line.
- A `README.md` file at the root of the project is mandatory.
- Code should follow the Betty style.
- No global variables are allowed.
- No more than 5 functions per file.
- Only specific C standard library functions are allowed.
- Prototypes of all functions should be included in the `lists.h` header file.
- All header files should be include guarded.

## How to Compile

Compile the source files using the following commands:

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 *.c -o executable_name
