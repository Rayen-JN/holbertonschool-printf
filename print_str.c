#include "main.h"

/**
 * print_string - Prints str
 * @args: Va_list 
 * Return: number
 */

int print_string(va_list args)
{
	char *str = va_arg(args,char *);
	int count = 0;

	while (*str)
	{
		_putchar(*str);
		count++;
		str++;
	}
	return (count);
}