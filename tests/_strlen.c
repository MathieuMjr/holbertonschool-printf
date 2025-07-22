#include "main.h"

/**
 * _strlen - gives the lenght of a string of char
 *
 * @s: a string of char
 *
 * Return: lenght of the string s
 */
int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		++i;
	}

	return (i);
}
