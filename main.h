#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include<stddef.h>

	/**
	 * struct pro - struct of format and function
	 * @f: a function pointer
	 * @X: specifier.
	 */
	typedef struct pro
{
	char *X;
	int (*f)(va_list);
} pro_t;

int _printf(const char *, ...);
int (*get_function(const char *C))(va_list);
int _putchar(char c);
int print_character(va_list args);
int print_string(va_list args);
int print_percent(va_list args);
int print_integer(va_list args);
#endif