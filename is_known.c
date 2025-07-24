#include "main.h"

/**
 * is_known - function compares a given char to a list of
 * known char
 * @c: char you want to check
 *
 * Return: 0 is c is a char we want, -1 else
 */
int is_known(char c)
{
	char *list = "csid%";
	int i = 0;

	while (c != list[i] && list[i] != '\0')
	{
		++i;
	}
	if (i <= 4)
	{
		return (0);
	}
	else
	{
		return (-1);
	}
}
