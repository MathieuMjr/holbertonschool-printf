#include "main.h"

/**
 * print_char - function that print an undefined
 * arg that is a char
 * @args: char to print
 * @count: adress to the counter in order to increase it
 * by one each time something is printed
 */
void print_char(va_list args, int *count)
{
	_putchar(va_arg(args, int));
	/*‘char’ is promoted to ‘int’ when passed through ‘...’*/
	*count += 1;
}

/**
 * print_string - function that print an undefined
 * arg that is a string of characters
 * @args: a string of char to print
 * @count: adress to the counter in order to increase it
 * by one each time something is printed
 */
void print_string(va_list args, int *count)
{
	const char *s = va_arg(args, char*);
	int i = 0;

	if (s == NULL)
	{
		write(1, "(null)", 6);
		*count += 6;
		return;
	}

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		*count += 1;
		++i;
	}
}

/**
 * print_percent - function that print percent symbol
 * @args: must take arg according to the structure
 * but won't use it.
 * @count: adress to the counter in order to increase it
 * by one each time something is printed
 */
void print_percent(va_list args, int *count)
{
	(void) args;
	_putchar('%');
	*count += 1;
}

/*void print_int(va_list args, int *count)
{
	int n = va_arg(args, int);
	int i = 0;
	int m = n;
	int j;

	while (m /10 != 0)
	{
		m = m / 10;
		++i;
	}

	for (j = i; j > 0; --i)


}*/