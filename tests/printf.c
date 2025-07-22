#include "main.h"

/**
 * _printf - must print a string of char
 * and add data from args in it, in the good
 * format.
 *
 * @format: a string of char to print
 *
 * Return: the number of char printed
 */
int _printf(const char *format, ...)
{
	unsigned int i = 0;

	while (format != NULL && format[i] != '\0')
	{
		_putchar(format[i]);
		++i;
	}
	printf("%d\n", i);
	if (i != 0) 
	/*if empty string is passed, -1 must not be returned*/
	{
		return (i - 1); 
	}
	return(0);
}
