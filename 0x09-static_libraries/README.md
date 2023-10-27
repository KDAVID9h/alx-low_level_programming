```markdown
# Project: Static Libraries

This project involves creating a static library containing various C functions. The project includes two tasks:

## Task 0: A library is not a luxury but one of the necessities of life

Create the static library libmy.a containing all the functions listed below:

- int _putchar(char c);
- int _islower(int c);
- int _isalpha(int c);
- int _abs(int n);
- int _isupper(int c);
- int _isdigit(int c);
- int _strlen(char *s);
- void _puts(char *s);
- char *_strcpy(char *dest, char *src);
- int _atoi(char *s);
- char *_strcat(char *dest, char *src);
- char *_strncat(char *dest, char *src, int n);
- char *_strncpy(char *dest, char *src, int n);
- int _strcmp(char *s1, char *s2);
- char *_memset(char *s, char b, unsigned int n);
- char *_memcpy(char *dest, char *src, unsigned int n);
- char *_strchr(char *s, char c);
- unsigned int _strspn(char *s, char *accept);
- char *_strpbrk(char *s, char *accept);
- char *_strstr(char *haystack, char *needle);

If any of the above functions are not implemented, create empty functions with the correct prototype. Ensure that you push your `main.h` file to your repository, which should contain the prototypes of the functions listed above.

## Task 1: Without libraries, what have we? We have no past and no future

Create a script called `create_static_lib.sh` that creates a static library called `liball.a` from all the `.c` files in the current directory.

## Compilation and Testing

You can compile your code as shown below:

```bash
gcc -std=gnu89 main.c -L. -lmy -o quote
```

To run the program, use:

```bash
./quote
```

To create the static library in Task 1, execute the script as follows:

```bash
./create_static_lib.sh
```

This will generate a `liball.a` file containing all the functions from the `.c` files in the current directory.

## Repository

- GitHub repository: [alx-low_level_programming](https://github.com/KDAVID9h/alx-low_level_programming)
- Directory: `0x09-static_libraries`
- Files: `libmy.a`, `main.h`, `create_static_lib.sh`
```
