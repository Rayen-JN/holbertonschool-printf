#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the caracter c to stdout
 * @c: The caracter to print
 *
 * Return: On success 1.
 * On error, -1 is returned , and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}