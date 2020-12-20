#include "holberton.h"
/**
* _printf - prints to stdout.
* @format: a character string.
* Return: the number of characters printed.
*/
int _printf(const char *format, ...)
{
	int i, count = 0;
	va_list arguments;

	va_start(arguments, format);
	if (format == NULL)
	{
		return (-1);
	}
	i = 0;
	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			count++;
		}

		if (format[i] == '%' && format[i + 1] != '\0')
		{
			if (format[i + 1] == 'c')
			{
				putchar(va_arg(arguments, int));
				count++;
			}
			else if (format[i + 1] == 's')
			{
				_printstring(va_arg(arguments, char *));
				count++;
			}
			else if (format[i + 1] == '%')
			{
				_putchar('%');
				count++;
			}
			else
			{
				return (-1);
			}
			i++;
		}
		i++;
	}
	va_end(arguments);
	return (count);
}
