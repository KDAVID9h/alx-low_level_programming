# 0x0E-structures_typedef

## Description
This project involves working with C data structures and typedefs. It requires you to define a new structure, initialize it, print its elements, and create and free instances of the structure.

## Requirements
- The code should be written in C and compiled on Ubuntu 20.04 LTS using `gcc`.
- Use the following compilation options: `-Wall -Werror -Wextra -pedantic -std=gnu89`.
- All your C files should end with a newline.
- A `README.md` file at the root of the project directory is mandatory.
- Your code should follow the Betty style, and it will be checked using `betty-style.pl` and `betty-doc.pl`.
- Avoid using global variables.
- Each C file should have no more than 5 functions.
- The only allowed C standard library functions are `printf`, `malloc`, `free`, and `exit`.
- Header files should include guards to prevent double inclusion.

## Tasks
### Task 0: Poppy
Define a new structure named `struct dog` with the following elements:
- `name` (type: `char *`)
- `age` (type: `float`)
- `owner` (type: `char *`)

```c
typedef struct dog {
    char *name;
    float age;
    char *owner;
} dog_t;
```

### Task 1: A dog is the only thing on earth that loves you more than you love yourself
Write a function `init_dog` that initializes a variable of type `struct dog`.

```c
void init_dog(struct dog *d, char *name, float age, char *owner);
```

### Task 2: A dog will teach you unconditional love. If you can have that in your life, things won't be too bad
Write a function `print_dog` that prints the elements of a `struct dog` in a specific format. If any element is `NULL`, it should be printed as "(nil)".

```c
void print_dog(struct dog *d);
```

### Task 3: Outside of a dog, a book is a man's best friend. Inside of a dog, it's too dark to read
Define a new type `dog_t` as a new name for the type `struct dog`.

```c
typedef struct dog dog_t;
```

### Task 4: A door is what a dog is perpetually on the wrong side of
Write a function `new_dog` that creates a new dog. You must store a copy of the `name` and `owner` in the new structure.

```c
dog_t *new_dog(char *name, float age, char *owner);
```

### Task 5: How many legs does a dog have if you call his tail a leg? Four. Saying that a tail is a leg doesn't make it a leg
Write a function `free_dog` that frees the memory allocated for a dog structure.

```c
void free_dog(dog_t *d);
```

## Files
- `0-dog.h`: Header file containing the definition of the `struct dog`.
- `1-init_dog.c`: Function to initialize a dog structure.
- `2-print_dog.c`: Function to print the contents of a dog structure.
- `3-dog.h`: Header file defining a new type `dog_t`.
- `4-new_dog.c`: Function to create a new dog structure.
- `5-free_dog.c`: Function to free the memory allocated for a dog structure.

## Usage
You can compile the source code for each task as follows (replace `X` with the task number):

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 X-main.c X-<task_name>.c -o X-executable
```

Run the resulting executable to test the code for each task.

## Author
HKDE

## GitHub
https://github.com/KDAVID9h
