#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * struct type - associates a format specifier letter with a function
 * to print an argument of that type.
 *
 * @letter: format specifier character as a string.
 * @f: pointer to function that prints an argument of the given type.
 */
typedef struct type
{
	char *letter;
	void (*f) (va_list);
} type_t;

int _printf(const char *format, ...);
int _strlen(const char *s);
int _putchar( char c);

#endif
