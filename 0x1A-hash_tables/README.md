# ALX Low-Level Programming - Hash Tables

## Overview

This repository contains C programs related to hash tables, as part of the ALX Low-Level Programming curriculum. Each program corresponds to a specific task.

## Table of Contents

1. [hash_table_create](#hash_table_create)
2. [hash_djb2](#hash_djb2)
3. [key_index](#key_index)
4. [hash_table_set](#hash_table_set)
5. [hash_table_get](#hash_table_get)
6. [hash_table_print](#hash_table_print)
7. [hash_table_delete](#hash_table_delete)

## Compilation

To compile the programs, use the provided Makefile:

```bash
$ make all
```

This will compile all the programs and create executable files.

## Usage

Each program corresponds to a specific task and can be executed individually. For example:

```bash
$ ./0-hash_table_create
```

Refer to the main functions in each C file for sample usage.

## Tasks

### 1. hash_table_create

```c
hash_table_t *hash_table_create(unsigned long int size);
```

- Creates a hash table.
- Returns a pointer to the newly created hash table.
- If something went wrong, the function returns NULL.

### 2. hash_djb2

```c
unsigned long int hash_djb2(const unsigned char *str);
```

- Implements the djb2 hash function algorithm.

### 3. key_index

```c
unsigned long int key_index(const unsigned char *key, unsigned long int size);
```

- Gives the index of a key in a hash table array using the hash_djb2 function.

### 4. hash_table_set

```c
int hash_table_set(hash_table_t *ht, const char *key, const char *value);
```

- Adds an element to the hash table.
- Returns 1 if it succeeded, 0 otherwise.
- In case of collision, adds the new node at the beginning of the list.

### 5. hash_table_get

```c
char *hash_table_get(const hash_table_t *ht, const char *key);
```

- Retrieves a value associated with a key in the hash table.
- Returns the value associated with the element, or NULL if the key couldn't be found.

### 6. hash_table_print

```c
void hash_table_print(const hash_table_t *ht);
```

- Prints the key/value pairs in the hash table in the order they appear in the array.
- Prints the array and list order.

### 7. hash_table_delete

```c
void hash_table_delete(hash_table_t *ht);
```

- Deletes a hash table.
- Frees all allocated memory.
