#include "holberton.h"
/**
 * print_u - prints an unsigned int in decimal notation
 * @u: unsigned int to print
 * Return: number of digits printed
 */
int print_u(va_list u)
{
	unsigned int a[10];
	unsigned int i = 1, m, n, sum;
	int count;

	n = va_arg(u, unsigned int);
	m = 1000000000; /* (10 ^ 9) */
	a[0] = n / m;
	while (i < 10)
	{
		m /= 10;
		a[i] = (n / m) % 10;
		i++;
	}
	for (i = 0, sum = 0, count = 0; i < 10; i++)
	{
		sum += a[i];
		if (sum || i == 9)
		{
			_putchar('0' + a[i]);
			count++;
		}
	}
	return (count);
}
/**
 * print_o - prints an unsigned int in octal notation
 * @o: unsigned int to print
 * Return: number of digits printed
 */
int print_o(va_list o)
{
	unsigned int a[11];
	unsigned int i = 1, m, n, sum;
	int count;

	n = va_arg(o, unsigned int);
	m = 1073741824; /* (8 ^ 10) */
	a[0] = n / m;
	while (i < 11)
	{
		m /= 8;
		a[i] = (n / m) % 8;
		i++;
	}
	for (i = 0, sum = 0, count = 0; i < 11; i++)
	{
		sum += a[i];
		if (sum || i == 10)
		{
			_putchar('0' + a[i]);
			count++;
		}
	}
	return (count);
}
/**
 * print_b - prints an unsigned int in binary notation
 * @b: unsigned int to print
 * Return: number of digits printed
 */
int print_b(va_list b)
{
	unsigned int n, m, i = 1, sum;
	unsigned int a[32];
	int count;

	n = va_arg(b, unsigned int);
	m = 2147483648; /* (2 ^ 31) */
	a[0] = n / m;
	while (i < 32)
	{
		m /= 2;
		a[i] = (n / m) % 2;
		i++;
	}
	for (i = 0, sum = 0, count = 0; i < 32; i++)
	{
		sum += a[i];
		if (sum || i == 31)
		{
			_putchar('0' + a[i]);
			count++;
		}
	}
	return (count);
}
