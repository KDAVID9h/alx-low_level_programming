
# Project 0x12. C - Singly linked lists

## Description

This project contains C programs and assembly code related to singly linked lists. The programs are designed to meet specific requirements and follow certain guidelines. The tasks involve creating and manipulating singly linked lists, printing list elements, counting elements, adding nodes, freeing lists, and implementing advanced features.

## Requirements

- **General:**
  - Allowed editors: vi, vim, emacs
  - All files compiled on Ubuntu 20.04 LTS using gcc with the options -Wall -Werror -Wextra -pedantic -std=gnu89
  - All files should end with a new line
  - README.md file at the root of the project folder is mandatory
  - Code should use the Betty style, checked using betty-style.pl and betty-doc.pl
  - No global variables allowed
  - Maximum 5 functions per file
  - Only allowed C standard library functions are malloc, free, and exit
  - Use _putchar (do not push _putchar.c)
  - Prototypes of functions and _putchar should be included in the header file lists.h
  - Header files should be include guarded

- **Data Structure:**
  ```c
  /**
   * struct list_s - singly linked list
   * @str: string - (malloc'ed string)
   * @len: length of the string
   * @next: points to the next node
   *
   * Description: singly linked list node structure
   */
  typedef struct list_s
  {
      char *str;
      unsigned int len;
      struct list_s *next;
  } list_t;
  ```

## Tasks

1. **Print List (`0-print_list.c`):**
   - Write a function that prints all the elements of a list_t list.
   - Prototype: `size_t print_list(const list_t *h);`
   - Return: the number of nodes

   ```c
   /* Example Usage */
   #include <stdlib.h>
   #include <string.h>
   #include <stdio.h>
   #include "lists.h"

   int main(void)
   {
       // ... (see example in task description)
   }
   ```

2. **List Length (`1-list_len.c`):**
   - Write a function that returns the number of elements in a linked list_t list.
   - Prototype: `size_t list_len(const list_t *h);`

   ```c
   /* Example Usage */
   #include <stdlib.h>
   #include <string.h>
   #include <stdio.h>
   #include "lists.h"

   int main(void)
   {
       // ... (see example in task description)
   }
   ```

3. **Add Node (`2-add_node.c`):**
   - Write a function that adds a new node at the beginning of a list_t list.
   - Prototype: `list_t *add_node(list_t **head, const char *str);`
   - Return: the address of the new element, or NULL if it failed

   ```c
   /* Example Usage */
   #include <stdlib.h>
   #include <string.h>
   #include <stdio.h>
   #include "lists.h"

   int main(void)
   {
       // ... (see example in task description)
   }
   ```

4. **Add Node at the End (`3-add_node_end.c`):**
   - Write a function that adds a new node at the end of a list_t list.
   - Prototype: `list_t *add_node_end(list_t **head, const char *str);`
   - Return: the address of the new element, or NULL if it failed

   ```c
   /* Example Usage */
   #include <stdlib.h>
   #include <string.h>
   #include <stdio.h>
   #include "lists.h"

   int main(void)
   {
       // ... (see example in task description)
   }
   ```

5. **Free List (`4-free_list.c`):**
   - Write a function that frees a list_t list.
   - Prototype: `void free_list(list_t *head);`

   ```c
   /* Example Usage */
   #include <stdlib.h>
   #include <string.h>
   #include <stdio.h>
   #include "lists.h"

   int main(void)
   {
       // ... (see example in task description)
   }
   ```

6. **The Hare and the Tortoise (`100-first.c`):**
   - Write a function that prints specific text before the `main` function is executed.
   - You are allowed to use the printf function.

   ```c
   /* Example Usage */
   #include <stdio.h>

   int main(void)
   {
       // ... (see example in task description)
   }
   ```

7. **Assembly Program (`101-hello_holberton.asm`):**
   - Write a 64-bit program in assembly that prints "Hello, Holberton" followed by a new line.
   - Only use the printf function.
   - Compile using: `nasm -f elf64 101-hello_holberton.asm && gcc -no-pie -std=gnu89 101-hello_holberton.o -o hello`

   ```assembly
   ; Example Usage
   ```

## Author

Your Name (GitHub Username) - [GitHub Profile](https://github.com/KDAVID9h)
