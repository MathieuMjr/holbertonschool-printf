#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/**
 * struct type - associates a format specifier letter with a function
 * to print a variadic argument of that type.
 *
 * @letter: format specifier character as a string.
 * @f: pointer to a function that prints an argument of the given type.
 */
typedef struct type
{
	char *letter;
	void (*f)(va_list, int *);
} type_t;

int _printf(const char *format, ...);
int _strlen(const char *s);
int _putchar(char c);
void print_string(va_list args, int *count);
void print_percent(va_list args, int *count);
void print_char(va_list args, int *count);
void print_int(va_list args, int *count);
int _pow_recursion(int x, int y);
int is_known(char c);

#endif
