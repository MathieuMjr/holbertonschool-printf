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
	type_t data[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{NULL, NULL},
	};

	int i = 0, j = 0, count = 0;
	va_list args;

	va_start(args, format);
	while (format != NULL && format[i] != '\0')
	{
		if (format[i] == '%')
		{
			j = 0;
			while (data[j].letter != NULL)
			{
				if (format[i + 1] == data[j].letter[0])
				{
					data[j].f(args);
					count += 1;
				}
				++j;
			}
			i += 2;
		}
		else
		{
			_putchar(format[i]);
			count = count + 1;
			++i;
		}
	}
	va_end(args);
	return (count);
}
