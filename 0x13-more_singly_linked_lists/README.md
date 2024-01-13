
# Project: 0x13. More singly linked lists

## Description
This project contains C programs that implement various operations on singly linked lists.

## Files and Directories
- **0-print_listint.c**
  - Function: `size_t print_listint(const listint_t *h)`
  - Description: Prints all the elements of a `listint_t` list and returns the number of nodes.

- **1-listint_len.c**
  - Function: `size_t listint_len(const listint_t *h)`
  - Description: Returns the number of elements in a `listint_t` list.

- **2-add_nodeint.c**
  - Function: `listint_t *add_nodeint(listint_t **head, const int n)`
  - Description: Adds a new node at the beginning of a `listint_t` list.

- **3-add_nodeint_end.c**
  - Function: `listint_t *add_nodeint_end(listint_t **head, const int n)`
  - Description: Adds a new node at the end of a `listint_t` list.

- **4-free_listint.c**
  - Function: `void free_listint(listint_t *head)`
  - Description: Frees a `listint_t` list.

- **5-free_listint2.c**
  - Function: `void free_listint2(listint_t **head)`
  - Description: Frees a `listint_t` list and sets the head to `NULL`.

- **6-pop_listint.c**
  - Function: `int pop_listint(listint_t **head)`
  - Description: Deletes the head node of a `listint_t` linked list and returns the head node’s data.

- **7-get_nodeint.c**
  - Function: `listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)`
  - Description: Returns the nth node of a `listint_t` linked list.

- **8-sum_listint.c**
  - Function: `int sum_listint(listint_t *head)`
  - Description: Returns the sum of all the data (n) of a `listint_t` linked list.

- **9-insert_nodeint.c**
  - Function: `listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)`
  - Description: Inserts a new node at a given position in a `listint_t` list.

- **10-delete_nodeint.c**
  - Function: `int delete_nodeint_at_index(listint_t **head, unsigned int index)`
  - Description: Deletes the node at index index of a `listint_t` linked list.

## Compilation and Usage
The programs can be compiled using GCC with the provided compilation commands. Each program has a corresponding `main` file for testing.

To compile and run a program, you can use the following example:
```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-print_listint.c -o a
./a
```

## Author
### HKDE
