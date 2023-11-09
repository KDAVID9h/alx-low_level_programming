# Variadic Functions Project

This repository contains a set of variadic functions implemented in C. Each function performs a specific operation, and this README provides an overview of the functionalities.

## Functions

### 0. Beauty is variable, ugliness is constant

**Description:** This function returns the sum of all its parameters.

**Prototype:**
```c
int sum_them_all(const unsigned int n, ...);
```

**Example:**
```c
int sum = sum_them_all(2, 98, 1024);
```

### 1. To be is to be the value of a variable

**Description:** This function prints numbers, separated by a given string and followed by a new line.

**Prototype:**
```c
void print_numbers(const char *separator, const unsigned int n, ...);
```

**Example:**
```c
print_numbers(", ", 4, 0, 98, -1024, 402);
```

### 2. One woman's constant is another woman's variable

**Description:** This function prints strings, separated by a given string and followed by a new line. If a string is `NULL`, it prints `(nil)`.

**Prototype:**
```c
void print_strings(const char *separator, const unsigned int n, ...);
```

**Example:**
```c
print_strings(", ", 2, "Jay", "Django");
```

### 3. To be is a to be the value of a variable

**Description:** This function prints any data type based on the provided format. It supports characters, integers, floats, and strings. If a string is `NULL`, it prints `(nil)`.

**Prototype:**
```c
void print_all(const char * const format, ...);
```

**Example:**
```c
print_all("ceis", 'B', 3, "stSchool");
```

## How to Use

1. Clone this repository.
2. Navigate to the desired task directory.
3. Compile the files using a C compiler (e.g., `gcc`).
4. Run the executable.

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-sum_them_all.c -o a
./a
```

## Author

- [HOGNON](https://github.com/KDAVID9h)
