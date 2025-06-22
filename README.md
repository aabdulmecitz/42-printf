<div align="center">

  # 42 ft_printf Project

  <p align="center"><a href="https://https://github.com/aabdulmecitz/42-printf" target="_blank"><img align="center" alt="ft_printf" src="https://github.com/mcombeau/mcombeau/blob/main/42_badges/ft_printfm.png"> </a></p>

  [![forthebadge](https://forthebadge.com/images/badges/made-with-c.svg)](https://forthebadge.com)
  [![forthebadge](https://forthebadge.com/images/badges/built-with-love.svg)](https://forthebadge.com)

   <a img src="https://img.shields.io/badge/score-125%20%2F%20100-success?style=for-the-badge"/></a>
   <a img src="https://img.shields.io/badge/circle-2-magenta?style=for-the-badge"/></a>
   <a img src="https://img.shields.io/badge/42-Evaluation-red?style=for-the-badge"/></a>

  <p align="center"><a href="https://https://42istanbul.com.tr/" target="_blank"><img src="https://img.shields.io/static/v1?label=&message=Istanbul&color=000&style=for-the-badge&logo=42""></a></p>

  <p align="center">100/100 :white_check_mark:</p>
</div>

## About The Project

This project is a recoding of the C standard library's `printf` function. As a part of the 42 school curriculum, `ft_printf` challenges us to handle a variable number of arguments (variadic functions) and format output in various ways. The goal is to create a static library `libftprintf.a` containing the `ft_printf` function, which mimics the behavior of the original `printf`.

This implementation handles several format specifiers for characters, strings, numbers, and pointers.

## Supported Format Specifiers

The `ft_printf` function supports the following conversion specifiers:

| Specifier | Description                                             |
| :-------: | :------------------------------------------------------ |
|    `%c`   | Prints a single character.                              |
|    `%s`   | Prints a string of characters.                          |
|    `%p`   | Prints the memory address of a pointer in hexadecimal.  |
|  `%d`, `%i` | Prints a signed decimal integer.                        |
|    `%u`   | Prints an unsigned decimal integer.                     |
|    `%x`   | Prints an unsigned integer in lowercase hexadecimal.    |
|    `%X`   | Prints an unsigned integer in uppercase hexadecimal.    |
|    `%%`   | Prints a literal percent sign (`%`).                    |

## Project Structure

Here's a breakdown of the project's file structure:

-   `ft_printf.c`: The main function that orchestrates the printing process.
-   `ft_check_type.c`: Determines the type of format specifier and calls the appropriate printing function.
-   `ft_put_c.c`: Handles the printing of a single character (`%c`).
-   `ft_put_s.c`: Handles the printing of a string (`%s`).
-   `ft_put_d_i.c`: Handles the printing of signed decimal integers (`%d`, `%i`).
-   `ft_put_u.c`: Handles the printing of unsigned decimal integers (`%u`).
-   `ft_put_x.c`: Handles the printing of hexadecimal numbers (`%x`, `%X`).
-   `ft_put_p.c`: Handles the printing of pointer addresses (`%p`).
-   `ft_base.c`: A utility function for converting numbers to a specified base (used for hexadecimal conversion).
-   `ft_printf.h`: The header file containing all function prototypes and required includes.
-   `Makefile`: The makefile to compile the source code into a static library (`ft_printf.a`).

## Getting Started

To get a local copy up and running, follow these simple steps.

### Prerequisites

You need `gcc` (GNU Compiler Collection) and `make` installed on your system.

### Compilation

1.  Clone the repository (or use the existing project files).
2.  Compile the project by running the `make` command in the root directory:
    ```sh
    make
    ```
    This will generate the static library file `ft_printf.a`.

## Usage

To use the `ft_printf` function in your own C project:

1.  Include the `ft_printf.h` header file in your source code.
2.  Compile your project and link it with the `ft_printf.a` library.

Here is an example `main.c`:

```c
#include "ft_printf.h"

int main(void)
{
    char *s = "World";
    int d = 42;
    
    ft_printf("Hello, %s!\n", s);
    ft_printf("The answer is %d.\n", d);
    ft_printf("Hex for %d is %x.\n", d, d);
    ft_printf("A pointer: %p\n", &d);
    ft_printf("Just a percent sign: %%\n");
    
    return (0);
}
```

To compile this example, place `main.c`, `ft_printf.a`, and `ft_printf.h` in the same directory and run:

```sh
gcc main.c -L. -lftprintf -o my_program
```

Then, run your program:
```sh
./my_program
```

## Makefile Commands

The `Makefile` includes the following rules:

-   `all`: (Default) Compiles the source files and creates the `ft_printf.a` static library.
-   `clean`: Removes all the object files (`.o`).
-   `fclean`: Removes the object files and the `ft_printf.a` library.
-   `re`: Re-compiles the library from scratch by running `fclean` and then `all`.

## Author

-   **aozkaya** - <aozkaya@student.42.fr>

## License

This project is for educational purposes as part of the 42 school curriculum.
