#  FUNCTION _printf

_printf is a simpler printf function.\
It prints single strings of characters, and can handle variadic arguments like **ints**, **chars** or **strings**.

Doubles and floats types are not implemented yet.

**Compilation command :** \
_printf is written in C language and needs to be compiled.\

Several files are needed :\
`print_types.c` provides functions to handle variadic arguments.\
`is_known.c` contains a function to check if the character following % is a specifier\
`_putchar.c` contains a custom implementation of putchar : it prints a single character\
`pow_recursion.c` a custom implementation of pow function. It is used by print_type to print integers.\
`printf.c` contains the function itself\

Note that you will need to create your own main.c file.

To compile printf, use the following command :

"*.c" means you all C files in the current directory are inclued in the compilations. Be careful not to create several main files. 

> gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c\
./a.out

This creates an executable file named a.out. Consider you can choose the name of your executable :
>  gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c -o executable_name\
./executable_name

Make sure gcc is on your computer.

## Documentation
If you need help, you can access the manpage using this command :
> man ./_printf.3

### Flowchart

[The following flowchart explains how the function works. It's written in an understandable way.](Flowchart/printf%20v3.drawio.png)

<img src = "Flowchart/printf%20v3.drawio.png">

### Examples

Here are some examples of how to use _printf. 

> printf("Hello !\n");\
> printf("Hello %s !\n", "Vincent");\
> printf("There is %d candy.\n", 3);\
> printf("%d %% discount on shirts.\n", 30);\
> printf("There is %d %s in %c size.\n", 10, shirts, 'S');

Here are the results on standard output :
> Hello !\
Hello Vincent !\
There is 3 candy.\
30 % discount on shirts.\
There is 10 shirts in S size.

Note that instead of constant values like "10", "Vincent", etc. variables can be passed to _printf. Use the right specifier according to

## Testing
This function has been tested with files in the "Tests" directory.\
main_test.c evolved according to different steps of development - even though the current version of main_test does not demonstrate all steps of the workflow. Here are the different steps followed during workflow :\
1. testing functions like _putchar and is_known\
2. testing a simple string with no specifier\
3. testing %c and creating variables to check length return\
4. testing %s\
5. testing printf(NULL) and check the return (-1)\
6. testing unknown specifiers\
7. testing % alone and check the return (-1)\
8. testing %i and %d\
9. testing negative numbers

## Authors

**Mathieu Majérus** - wrote code, manpage, readme.md, flowchart\
