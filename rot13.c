#include "holberton.h"
#include <stdlib.h>
/**
 * print_R - prints a string in rot13
 * @R: string to print
 * Return: number of characters printed
 */
int print_R(va_list R)
{
	char *str;
	unsigned int i = 0, j = 0;
	int count = 0;
	char in[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char out[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	str = va_arg(R, char *);
	if (str == NULL)
		str = "(ahyy)";
	while (str[i])
	{
		while (in[j])
		{
			if (in[j] == str[i])
			{
				_putchar(out[j]);
				count++;
				break;
			}
			j++;
		}
		if (!in[j])
		{
			_putchar(str[i]);
			count++;
		}
		i++;
	}
	return (count);
}
