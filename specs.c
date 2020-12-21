#include "holberton.h"
/**
 * specifiers - returns a function pointer if there is a valid format specifier
 * @format: format string
 * Return: a function pointer or NULL
 */
int (*specifiers(const char *format))(va_list)
{
	int i = 0;
	static print_t spec[] = {
		{"c", print_c},
		{"s", print_s},
		{"i", print_i},
		{"d", print_d},
		{"u", print_u},
		{"b", print_b},
		{"o", print_o},
		{"x", print_x},
		{"X", print_X},
		{"p", print_p},
		{"S", print_S},
		{"r", print_r},
		{"R", print_R},
		{NULL, NULL},
	};
	while (spec[i].specifier != NULL)
	{
		if (*(spec[i].specifier) == *format)
			return (spec[i].f);
		i++;
	}
	return (NULL);
}
