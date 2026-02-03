*This project has been created as part of the 42 curriculum by mmacari-*

# Libft

## Description

Libft is a custom C library developed as part of the 42 curriculum. The objective of this project is to recreate a set of standard C library functions and implement additional utility functions related to memory manipulation, string handling, file descriptor output, and linked list management.

---

## Instructions

### Compilation

To compile the library, run:

make

This command will generate the static library file `libft.a`.

### Cleaning

make clean    → removes object files (.o)  
make fclean   → removes object files and the library (libft.a)  
make re       → recompiles the project from scratch  

### Usage

Include the header file in your source code:

#include "libft.h"

Compile your program while linking the library:

gcc -Wall -Wextra -Werror your_program.c libft.a -o your_program

---

## Resources

References used during this project include:
- C Standard Library documentatThis project aims to strengthen the understanding of low-level programming concepts such as pointers, memory allocation, recursion, and data structures, while providing a reusable library for future C projects.ion (cppreference)
- GNU C Library Manual
- Official 42 subject documentation

AI usage:

ChatGPT was used only to help understand certain programming concepts, such as recursion, linked list logic, pointer manipulation, and overall function behavior. All code was written and implemented independently.

---

## Library Details

### Memory Functions
- ft_memset — fills memory with a constant byte
- ft_bzero — sets memory to zero
- ft_memcpy — copies a memory area
- ft_memmove — copies memory areas safely, handling overlap
- ft_memchr — locates a byte in memory
- ft_memcmp — compares memory areas
- ft_calloc — allocates zero-initialized memory

### String Functions
- ft_strlen — returns the length of a string
- ft_strlcpy — copies a string with size limitation
- ft_strlcat — concatenates strings with size limitation
- ft_strdup — duplicates a string
- ft_substr — extracts a substring from a string
- ft_strjoin — concatenates two strings
- ft_strtrim — trims characters from the beginning and end of a string
- ft_split — splits a string using a delimiter
- ft_strmapi — applies a function to each character, returning a new string
- ft_striteri — applies a function to each character in place
- ft_itoa — converts an integer to a string
- ft_atoi — converts a string to an integer

### Character Functions
- ft_isalpha — checks if a character is alphabetic
- ft_isdigit — checks if a character is a digit
- ft_isalnum — checks if a character is alphanumeric
- ft_isascii — checks if a character is ASCII
- ft_isprint — checks if a character is printable
- ft_toupper — converts lowercase to uppercase
- ft_tolower — converts uppercase to lowercase

### File Descriptor Functions
- ft_putchar_fd — writes a character to a file descriptor
- ft_putstr_fd — writes a string to a file descriptor
- ft_putendl_fd — writes a string followed by a newline
- ft_putnbr_fd — writes an integer to a file descriptor

### Linked List Functions
- t_list — structure containing a void pointer `content` and a pointer to the next node
- ft_lstnew — creates a new list node
- ft_lstadd_front — adds a node at the beginning of the list
- ft_lstadd_back — adds a node at the end of the list
- ft_lstsize — returns the number of nodes in a list
- ft_lstlast — returns the last node of a list
- ft_lstdelone — deletes a single node using a delete function
- ft_lstclear — deletes all nodes of a list
- ft_lstiter — applies a function to each node’s content
- ft_lstmap — applies a function to each node’s content and creates a new list