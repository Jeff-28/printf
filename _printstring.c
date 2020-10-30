#include "holberton.h"

/**
* _printstring - prints a string.
* @s: string to be printed.
* Return: 1 on success.
*/

int _printstring(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}

	return (0);
}
