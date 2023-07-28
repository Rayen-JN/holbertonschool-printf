#include "main.h"

/**
 * print_string - Prints str
 * @args: Va_list
 * Return: number
 */

int print_string(va_list args)
{
	char *str = va_arg(args, char *);
	int count = 0, stor;

	if (!str)
		str = "(null)";
	while (*str)
	{
		stor = _putchar(*str);
		if (stor == -1)
			return (-1);
				count++;
		str++;
	}
	return (count);
}
