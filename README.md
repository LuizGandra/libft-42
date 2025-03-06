# Libft - A Custom C Library

Libft is a project from the [42 São Paulo](https://www.42sp.org.br/) Common Core curriculum. It consists of a static C library (`libft.a`) containing general-purpose functions designed to serve as foundational tools for subsequent C programming assignments.

![42 São Paulo](https://img.shields.io/badge/42-São_Paulo-black?style=flat-square&logo=42)

## About 42

[42 São Paulo](https://www.42sp.org.br/) is a tuition-free, global coding school focused on peer-to-peer learning and project-based education. This project introduces core C programming concepts by reimplementing standard library functions and creating custom utilities.

## Project Overview

Libft provides a collection of functions split into two sections:
- **Mandatory Part**: Reimplementations of libc functions (e.g., `ft_strlen`, `ft_memcpy`) and additional tools (e.g., `ft_substr`, `ft_split`).
- **Bonus Part**: Linked list manipulation functions (e.g., `ft_lstnew`, `ft_lstadd_front`).

### Key Features

- Rebuilt standard C functions with the `ft_` prefix.
- Custom string and memory manipulation utilities.
- Bonus linked list management using a `t_list` structure.
- Strict memory management with no leaks.

### Restrictions

- Written in C, compliant with the 42 Norm.
- No global variables or unexpected crashes.
- Compiled with `-Wall -Wextra -Werror`.
- Limited external functions (e.g., `malloc`, `free`, `write`).

## Getting Started

### Prerequisites

- C compiler (e.g., `clang`)
- `make` utility

### How to Build and Run

1. Clone the repository:
   
   ```bash
   git clone https://github.com/LuizGandra/libft-42.git
   cd libft-42

2. Build the mandatory part:
   
   ```bash
   make

3. Build the bonus part (optional):
   
   ```bash
   make
This includes linked list functions in `libft.a`.

4. Link the library to your C project:
   
   ```bash
   clang -o <program> <file>.c -L<libft.a directory> -lft

#### Additional commands

- `make clean`: remove object files.
- `make fclean`: remove `libft.a` and object files.
- `make re`: rebuild everything.

## Project Structure

- `libft.h`: function prototypes.
- `ft_*.c`: mandatory function sources.
- `ft_*_bonus.c`: bonus function sources.
- `Makefile`: compilation automation.

## License

This project is part of the 42 curriculum and intended for educational use.
