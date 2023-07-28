#include "main.h"

/**
 * print_character - Prints a char
 * @args: Va_list
 * Return: number
 */

int print_character(va_list args)
{
	char c = va_arg(args, int);
	int count = 0, stor;

	stor = _putchar(c);
	if (stor == -1)
		return (-1);
	count++;
	return (count);
}
