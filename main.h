#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

/**
 * struct pro - struct of format and the function
 * @f: a function pointer
 * @X: specifier
 */
typedef struct pro
{
	char *X;
	int (*f)(va_list);
}pro_t;

int _printf(const char *, ...);
int (*get_function(const char *C))(va_list);
int _putchar(char c);
int print_character(va_list);
int print_string(va_list);
int print_decimal(va_list);
int print_integer(va_list);
int print_percent(va_list);
#endif