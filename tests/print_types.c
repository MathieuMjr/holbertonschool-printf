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

/**
 * print_int - function that print an int
 * @args: int given as undefined arg from
 * variadic function
 * @count: adress to the counter in order to increase it
 * by one each time something is printed
 */
void print_int(va_list args, int *count)
{
	int n = va_arg(args, int);
	int i = 0;
	unsigned int absnb;
	int nblen;

	if (n < 0)
	{
		_putchar('-');
		absnb = -((unsigned int) n);
		*count += 1;
	}
	else
	{
		absnb = n;
	}
	nblen = absnb;
	while (nblen / 10 != 0)
	{
		nblen = nblen / 10;
		++i;
	}
		/* la boucle tourne longueur du nombre -1 */

		for (; i >= 0; --i)
		{
			_putchar('0' + (absnb / _pow_recursion(10, i)) % 10);
			/*avoir le 1er chiffre = */
			/*(nombre / 10^(longueur-1)) % 10 */
			*count += 1;
		}
}
