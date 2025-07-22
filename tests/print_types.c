#include "main.h"

/**
 * print_char - function that print an undefined
 * arg that is a char
 * @args: char to print
 */
void print_char(va_list args)
{
	_putchar(va_arg(args, int));
	/*‘char’ is promoted to ‘int’ when passed through ‘...’*/
}

/**
 * print_string - function that print an undefined
 * arg that is a string of characters
 * @args: a string of char to print
 */
void print_string(va_list args)
{
	const char *s = va_arg(args, char*);
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		++i;
	}
}

/**
 * print_percent - function that print percent symbol
 * @args: must take arg according to the structure
 * but won't use it.
 */
void print_percent(va_list args)
{
	(void) args;
	_putchar('%');
}
