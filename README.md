# Libft
Libft is a custom C library developed as the first project of the **Common Core** curriculum at **42 São Paulo**. This project focuses on building essential programming skills in C by recreating standard library functions and other additional functions.

**Note:** *Libft is updated and maintained as needed throughout the Common Core. The contents of this repository do not necessarily represent the approved project, although it always complies with the **Norm***.

## What You Will Learn
- Basic C syntax and conventions
- Memory and pointer manipulation
- Using libraries and header files (.h)
- Compiling projects with Makefile
- Implementing commonly used functions in the C standard library
- Manipulating data types and data structures in C

## Getting Started
To compile and use the library, clone the repository and run `make` in the terminal. This will generate a libft.a file, which you can link to your C projects.

## Project Structure
The project is divided into three main parts:

### Part 1: LibC Functions
This section includes the recreation of several essential functions from the C standard library:

- isalpha
- isdigit
- isalnum
- isascii
- isprint
- strlen
- memset
- bzero
- memcpy
- memmove
- strlcpy
- strlcat
- toupper
- tolower
- strchr
- strrchr
- strncmp
- memchr
- memcmp
- strnstr
- atoi
- calloc
- strdup

### Part 2: Additional Functions
The second section includes custom functions designed to extend standard capabilities or implement commonly-needed tasks in a C project:

- ft_substr
- ft_strjoin
- ft_strtrim
- ft_split
- ft_itoa
- ft_strmapi
- ft_striteri
- ft_putchar_fd
- ft_putstr_fd
- ft_putendl_fd
- ft_putnbr_fd

### Bonus: Linked List Functions
The bonus section introduces a set of functions to create and manipulate linked lists:

- ft_lstnew
- ft_lstadd_front
- ft_lstsize
- ft_lstlast
- ft_lstadd_back
- ft_lstdelone
- ft_lstclear
- ft_lstiter
- ft_lstmap
