#include "main.h"

/**
 * print_character - Prints a char
 * @args: Va_list
 * Return: number
 */

int print_character(va_list args)
{
	char c = va_arg(args, int);
	int count = 0;

	_putchar(c);
	count++;
	return (count);
}
