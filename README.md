#  FUNCTION _printf

_printf is a simpler printf function.\
It prints single strings of characters, and can handle variadic arguments like **ints**, **chars** or **strings**.

Doubles and floats types are not implemented yet.

**Compilation command :** \
Printf have been compiled with the following command in order to get all warnings treated as errors :
> gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c

All .c files in the directory are used in the compiler. 

## Documentation
### Manual page
Manpage can be called with the following command :
> man ./_printf.3

It gives you the prototype of the function, it's returns, what are the specifiers.


### Flowchart

The following flowchart explains how the function works. It's written in an understable way.

## Examples

Here are some exemples :

> printf("Hello !\n");\
> printf("Hello %s !\n", "Vincent");\
> printf("There is %d candy.\n", 3);\
> printf("%d %% discount on shirts.\n", 30);\
> printf("There is %d %s in %c size.\n", 10, shirts, 'S');

Here are the result on standard output :
> Hello !\
Hello Vincent !\
There is 3 candy.\
30 % discount on shirts.\
There is 10 shirts in S size.

Note that instead of values like "10", "Vincent", etc. Printf can use variables containing values. 

## Testing
