*This project has been created as part of the 42 curriculum by mmacari-.*

# ft_printf

## Description

`ft_printf` is a reimplementation of the standard C `printf` function. The goal of this project is to deepen understanding of variable argument lists, formatting, and low-level output using system calls (`write`).  

The project supports the following format specifiers:

- `%c` – print a character  
- `%s` – print a string  
- `%p` – print a pointer address in hexadecimal  
- `%d` / `%i` – print signed integers  
- `%u` – print unsigned integers  
- `%x` / `%X` – print hexadecimal numbers (lowercase or uppercase)  
- `%%` – print the percent symbol  

This project focuses on building a robust and efficient function without relying on the standard library's `printf`.

## Algorithm and Data Structure

The implementation is based on:

- **Buffering integers and hexadecimal numbers:** Numbers are converted into character arrays in reverse order and then printed from the end to the beginning. This avoids recursion for numbers while maintaining correctness.  
- **Recursive pointer printing:** For pointers, recursion is used to handle arbitrary-length hexadecimal representation efficiently.  
- **Variadic functions (`va_list`):** The core uses `va_start`, `va_arg`, and `va_end` to handle an unknown number of arguments of different types.  
- **Simple character output:** All outputs are done using `write` to file descriptor `1` (standard output), ensuring low-level control and independence from standard I/O functions.  

This approach was chosen because it balances performance, readability, and simplicity while fully meeting the project requirements.

## Instructions

1. Clone the repository (or copy the project files):

```bash
git clone <repository_url>
cd ft_printf

Compile the project using the provided Makefile:

	make

Use ft_printf as a drop-in replacement for printf:

	#include "ft_printf.h"

	int main(void)
	{
    	ft_printf("Hello %s!\n", "world");
    	return 0;
	}

Clean Objetc files:

	make clean

Fully remove compiled library:

	make fclean

Resources

C Standard Library documentation for printf

Tutorials on variadic functions in C (va_list, va_arg, va_start, va_end)

Hexadecimal and number conversion algorithms

AI usage: AI was only used to understand basic concepts and clarify doubts about variadic functions and buffer handling.