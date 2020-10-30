#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct printer - struct printer
 * @chars: a character.
 * @printer_pointer: a function pointer.


typedef struct printer
{
	char chars;
	void (*printer_pointer)(va_list);
} printer_t;
*/

int _printf(const char *format, ...);

int _putchar(char c);

int _printstring(char *s);

#endif
