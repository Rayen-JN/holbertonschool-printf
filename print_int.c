#include "main.h"

/**
 * print_integer - print int
 *
 * @my_args: arg
 *
 * Return: count
 */
int print_integer(va_list my_args)
{
	unsigned int name, dec, number, account;
	int d;

	account = 0;
	d = va_arg(my_args, int);
	if (d < 0)
	{
		name = (d * -1);
		account += _putchar('-');
	}
	else
		name = d;

	dec = name;
	number = 1;
	while (dec > 9)
	{
		dec /= 10;
		number *= 10;
	}
	while (number >= 1)
	{
		account += _putchar(((name / number) % 10) + '0');
		number /= 10;
	}
	return (account);
}
