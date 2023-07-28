#include "main.h"
/**
 * _printf - outputs a str with format
 * @format: format
 *
 * Return: int
 */
int _printf(const char *format, ...)
{
	int i = 0;
	va_list args;
	int (*function)(va_list) = NULL;

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	va_start(args, format);
	while (*format)
	{
		if (*format == '%' && *(format + 1) != '%')
		{
			format++;
			function = get_function(format);
			if (*(format) == '\0')
				return (-1);
			else if (function == NULL)
			{
				_putchar(*(format - 1));
				_putchar(*format);
				i += 2;
			}
			else
				i += function(args);
		}
		else if (*format == '%' && *(format + 1) == '%')
		{
			format++;
			_putchar('%');
			i++;
		}
		else
		{
			_putchar(*format);
			i++;
		}
		format++;
	}
	va_end(args);
	return (i);
}
