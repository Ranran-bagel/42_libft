*This project has been created as part of the 42 curriculum by wezhou.*

### libft

[![CI](https://github.com/Ranran-bagel/42_libft/actions/workflows/ci.yml/badge.svg)](https://github.com/Ranran-bagel/42_libft/actions/workflows/ci.yml)

## Description

`libft` is a custom C library developed as part of the 42 curriculum.

The goal of this project is to reimplement a selection of standard C library functions, as well as to create additional utility functions that can be reused in later 42 projects. Through this project, I practiced fundamental C programming concepts such as memory management, pointer manipulation, string handling, file descriptor output, static libraries, and linked lists.

The final result of the project is a static library named `libft.a`.

## Library Overview

This library contains functions divided into several categories.

### Character Functions

These functions check or convert individual characters.

- `ft_isalpha`

- `ft_isdigit`

- `ft_isalnum`

- `ft_isascii`

- `ft_isprint`

- `ft_toupper`

- `ft_tolower`

They are useful for validating character types and performing basic character conversion.

### Memory Functions

These functions operate directly on memory blocks.

- `ft_memset`

- `ft_bzero`

- `ft_memcpy`

- `ft_memmove`

- `ft_memchr`

- `ft_memcmp`

- `ft_calloc`

They are used to initialize, copy, move, compare, search, and allocate memory safely.

### String Functions

These functions manipulate C strings.

- `ft_strlen`

- `ft_strlcpy`

- `ft_strlcat`

- `ft_strchr`

- `ft_strrchr`

- `ft_strncmp`

- `ft_strnstr`

- `ft_strdup`

- `ft_substr`

- `ft_strjoin`

- `ft_strtrim`

- `ft_split`

- `ft_itoa`

- `ft_strmapi`

- `ft_striteri`

They cover common string operations such as measuring length, copying, concatenating, searching, comparing, duplicating, trimming, splitting, converting integers to strings, and applying functions to characters.

### File Descriptor Output Functions

These functions write data to a given file descriptor.

- `ft_putchar_fd`

- `ft_putstr_fd`

- `ft_putendl_fd`

- `ft_putnbr_fd`

They can be used to output characters, strings, lines, and integers to standard output, standard error, or files.

### Linked List Functions

The library also implements a singly linked list structure.

```c

typedef struct s_list

{

	void			*content;
	struct s_list	*next;
}	t_list;

```

The linked list functions are:

- `ft_lstnew`

- `ft_lstadd_front`

- `ft_lstsize`

- `ft_lstlast`

- `ft_lstadd_back`

- `ft_lstdelone`

- `ft_lstclear`

- `ft_lstiter`

- `ft_lstmap`
These functions allow creating nodes, adding nodes to the front or back of a list, counting nodes, finding the last node, deleting nodes, clearing an entire list, iterating over list contents, and creating a new mapped list.

Because `content` is stored as `void *`, the list can store different types of data. Deletion behavior is controlled by a user-provided `del` function.

## Instructions

### Compilation

To compile the mandatory part of the library:

`make`

This creates the static library:

`libft.a`

To remove object files:

`make clean`

To remove object files and the library:

`make fclean`

To rebuild the project:

`make re`

### Usage

Include the header file in your C source file:

`#include "libft.h"`

Compile your program with `libft.a`:

`cc -Wall -Wextra -Werror main.c libft.a`

Alternatively, if `libft.a` is in the current directory:

`cc -Wall -Wextra -Werror main.c -L. -lft`

Example usage:

```c

#include "libft.h"

#include <stdio.h>

#include <stdlib.h>

int	main(void)

{

	char	*s;
	s = ft_strjoin("Hello, ", "libft!");
	if (!s)
		return (1);
	printf("%s\n", s);
	free(s);
	return (0);

}

These functions allow creating nodes, adding nodes to the front or back of a list, counting nodes, finding the last node, deleting one node, clearing an entire list, iterating over list contents, and creating a new mapped list.

Because `content` is stored as `void *`, the list can store different types of data. Deletion behavior is controlled by a user-provided `del` function.

## Instructions

### Compilation

To compile the library:

```bash

make

```

This creates the static library:

```bash

libft.a

```

To remove object files:

```bash

make clean

```

To remove object files and the library:

```bash

make fclean

```

To rebuild the project:

```bash

make re

```

### Usage

Include the header file in your C source file:

```c

#include "libft.h"

```

Compile your program with `libft.a`:

```bash

cc -Wall -Wextra -Werror main.c libft.a

```

Alternatively, if `libft.a` is in the current directory:

```bash

cc -Wall -Wextra -Werror main.c -L. -lft

```

Example usage:

```c

#include "libft.h"
/home/wezhou/core/libft/ft_toupper.c
#include <stdio.h>

#include <stdlib.h>

int	main(void)

{

	char	*s;
	s = ft_strjoin("Hello, ", "libft!");
	if (!s)
		return (1);
	printf("%s\n", s);
	free(s);
	return (0);

}

```

Expected output:

```text

Hello, libft!

```

## Testing

The library can be tested by writing small `main.c` files for each function and comparing behavior with the corresponding standard C library functions when applicable.

Example compilation with AddressSanitizer:

```bash

cc -Wall -Wextra -Werror -g -fsanitize=address main.c libft.a

```

Then run:

```bash

./a.out

```

AddressSanitizer can help detect memory errors such as invalid reads, invalid writes, use-after-free, double free, and memory leaks.

Some useful test cases include:

- empty strings;

- strings with only separators;

- overlapping memory areas for `ft_memmove`;

- `NULL` handling where appropriate;

- `INT_MIN` and `INT_MAX` for `ft_itoa` and `ft_putnbr_fd`;

- empty linked lists;

- single-node linked lists;

- multi-node linked lists;

- dynamically allocated linked list contents.

## Resources

### Documentation and References

The following resources were useful for understanding C standard library behavior and low-level C programming concepts:

- The 42 project subject for `libft`

- `man strlen`

- `man memset`

- `man memcpy`

- `man memmove`

- `man calloc`

- `man malloc`

- `man free`

- `man write`

- `man 3 printf`

- cppreference C documentation

- The GNU C Library documentation

- Tutorials and explanations about pointers, memory allocation, and linked lists in C

### Use of AI

AI tools were used as a learning assistant during this project.

AI was used to:

- clarify C concepts such as pointers, double pointers, memory allocation, static libraries, function pointers, and linked lists;

- discuss implementation strategies before writing functions;

- identify possible edge cases and testing ideas;

- explain debugging tools such as `lldb`, AddressSanitizer, and terminal process inspection;

- help structure and draft this `README.md`.

AI was not used as a substitute for understanding the project requirements. The source code was written, reviewed, tested, and corrected manually.
