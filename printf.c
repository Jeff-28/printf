#include "holberton.h"
/**
* _printf - prints to stdout
* @format: format string
* Return: the number of characters printed.
*/
int _printf(const char *format, ...)
{
	int i = 0, count = 0;
	va_list args;
	int (*f)(va_list);

	va_start(args, format);
	if (format == NULL)
		return (-1);

	while (format[i])
	{
		while (format[i] != '%' && format[i])
		{
			_putchar(format[i]);
			count++;
			i++;
		}
		if (!format[i])
			return (count);
		f = specifiers(&format[i + 1]);
		if (f != NULL)
		{
			count += f(args);
			i += 2;
			continue;
		}
		if (!format[i + 1])
			return (-1);
		_putchar(format[i]);
		count++;
		if (format[i + 1] == '%')
			i += 2;
		else
			i++;
	}
	va_end(args);
	return (count);
}
