#include "holberton.h"

/**
* _printf - prints to stdout.
* @format: a character string.
* Return: the number of characters printed.
*/

int _printf(const char *format, ...)
{
	int i, chars_printed = 0;
	va_list arguments;

	va_start(arguments, format);

	i = 0;
	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			chars_printed = _putchar(format[i]);
		}

		if (format[i] == '%')
		{
			if (format[i + 1] == 'c')
			{
				chars_printed = _putchar(va_arg(arguments, int));
			}

			if (format[i + 1] == 's')
			{
				chars_printed = _printstring(va_arg(arguments, char *));
			}

			if (format[i + 1] == '%')
			{
				chars_printed = _putchar('%');
			}

			i++;

		}

		i++;
	}
	va_end(arguments);

	return (chars_printed);

}
