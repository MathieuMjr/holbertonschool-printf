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
		{"d", print_int},
		{"i", print_int},
		{NULL, NULL},
	};

	int i = 0, j = 0, count = 0;
	va_list args;

	if (format == NULL)
		return (-1);
	va_start(args, format);
	while (format != NULL && format[i] != '\0')
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
				return (-1);
			j = 0;
			while (data[j].letter != NULL)
			{
				if (format[i + 1] == data[j].letter[0])
				{
					data[j].f(args, &count);
					if (format[i + 2] == '\0')
					{
						va_end(args);
						return (count);
					}
					i += 2;
					break;
				}
				++j;
			}
		}
		_putchar(format[i]);
		count = count + 1;
		++i;
	}
	va_end(args);
	return (count);
}
