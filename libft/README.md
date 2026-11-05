*This project has been created as part of the 42 curriculum by <ayel-mac>.*

# Libft

## Description

Libft is a custom C library developed as part of the 42 curriculum.

The goal of this project is to recreate several standard C library functions from scratch, understand how they work internally, and build a reusable library that can be used in future C projects.

Through this project, we learn and practice:
- Memory management and dynamic allocation.
- String manipulation.
- Pointers and pointer arithmetic.
- Working with different data types.
- Linked lists and data structures.
- Compilation and static library creation.
- Writing clean, reusable, and reliable C code.

The final result is a static library named `libft.a`.

## Instructions

### Compilation

Clone the repository:

```bash
git clone <repository-url>
cd libft
```

Compile the library:

```bash
make
```

Compile the bonus functions:

```bash
make bonus
```

Remove object files:

```bash
make clean
```

Remove object files and the library:

```bash
make fclean
```

Recompile everything:

```bash
make re
```

### Using the library

Include the header in your C source file:

```c
#include "libft.h"
```

Compile your program with the library:

```bash
cc main.c -L. -lft -I. -o program
```

Run it:

```bash
./program
```

## Library Description

Libft recreates useful functions from the standard C library and introduces additional functions for working with strings, memory, file descriptors, and linked lists.

### 1. Character Classification and Conversion

Functions used to check and convert individual characters.

| Function | Description |
|---|---|
| `ft_isalpha` | Checks whether a character is alphabetic. |
| `ft_isdigit` | Checks whether a character is a digit. |
| `ft_isalnum` | Checks whether a character is alphanumeric. |
| `ft_isascii` | Checks whether a character belongs to the ASCII character set. |
| `ft_isprint` | Checks whether a character is printable. |
| `ft_toupper` | Converts a lowercase character to uppercase. |
| `ft_tolower` | Converts an uppercase character to lowercase. |

### 2. String Manipulation

Functions for searching, comparing, copying, and modifying strings.

| Function | Description |
|---|---|
| `ft_strlen` | Calculates the length of a string. |
| `ft_strchr` | Locates the first occurrence of a character. |
| `ft_strrchr` | Locates the last occurrence of a character. |
| `ft_strncmp` | Compares two strings up to a specified number of characters. |
| `ft_strlcpy` | Copies a string with size limitations. |
| `ft_strlcat` | Concatenates strings with size limitations. |
| `ft_strnstr` | Locates a substring within a limited length. |
| `ft_strdup` | Creates a dynamically allocated duplicate of a string. |
| `ft_substr` | Extracts a substring from a string. |
| `ft_strjoin` | Joins two strings into a new allocation. |
| `ft_strtrim` | Removes specified characters from the beginning and end of a string. |
| `ft_split` | Splits a string into an array of strings using a delimiter. |
| `ft_itoa` | Converts an integer into a string. |
| `ft_strmapi` | Applies a function to each character and creates a new string. |
| `ft_striteri` | Applies a function to each character using its index. |

### 3. Memory Management

Functions for manipulating memory blocks.

| Function | Description |
|---|---|
| `ft_memset` | Fills a memory area with a specified byte value. |
| `ft_bzero` | Sets a memory area to zero. |
| `ft_memcpy` | Copies a memory area. |
| `ft_memmove` | Copies memory safely when source and destination overlap. |
| `ft_memchr` | Searches for a byte in a memory area. |
| `ft_memcmp` | Compares two memory areas. |
| `ft_calloc` | Allocates memory and initializes it to zero. |

### 4. Conversion

| Function | Description |
|---|---|
| `ft_atoi` | Converts a string into an integer. |

### 5. File Descriptor Output

Functions used to write characters, strings, and numbers to a specified file descriptor.

| Function | Description |
|---|---|
| `ft_putchar_fd` | Writes a character to a file descriptor. |
| `ft_putstr_fd` | Writes a string to a file descriptor. |
| `ft_putendl_fd` | Writes a string followed by a newline. |
| `ft_putnbr_fd` | Writes an integer to a file descriptor. |

### 6. Linked List Functions (Bonus)

The bonus part introduces singly linked lists using the following structure:

```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;
```

Each node contains:
- `content`: A pointer to the data stored in the node.
- `next`: A pointer to the next node in the list.

| Function | Description |
|---|---|
| `ft_lstnew` | Creates a new linked list node. |
| `ft_lstadd_front` | Adds a node at the beginning of the list. |
| `ft_lstsize` | Counts the number of nodes. |
| `ft_lstlast` | Returns the last node. |
| `ft_lstadd_back` | Adds a node at the end of the list. |
| `ft_lstdelone` | Deletes one node using a specified deletion function. |
| `ft_lstclear` | Deletes an entire linked list. |
| `ft_lstiter` | Applies a function to each node's content. |
| `ft_lstmap` | Creates a new list by applying a function to each node's content. |

## Resources

The following resources were useful for understanding C programming, memory management, and the functions recreated in this project:

- [Linux man pages](https://man7.org/linux/man-pages/) – Documentation for standard C and system functions.
- [cppreference – C library](https://en.cppreference.com/w/c) – C language and standard library reference.
- [GNU C Library Documentation](https://www.gnu.org/software/libc/manual/) – Documentation about standard library functions.
- [42 The Norm](https://github.com/42School/norminette) – Coding standards and Norminette.

### AI Usage

AI tools were used as learning and debugging assistance throughout the development of this project.

They were used for:
- Understanding C concepts such as pointers, pointer arithmetic, memory allocation, and data structures.
- Explaining the behavior of standard C library functions.
- Identifying and debugging errors in function implementations.
- Understanding memory errors reported by Valgrind.
- Reviewing function logic and discussing edge cases.
- Understanding Makefiles and static library compilation.

AI was used as a supporting educational resource. The implementation, testing, and validation of the functions were part of the development process.


