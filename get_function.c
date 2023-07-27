#include "main.h"

/**
 * get_function - function to use
 * @C: pointer to character
 *
 * Return: pointer to function
 */

int (*get_function(const char *C))(va_list)
{
	int i;
	pro_t types[] = {
		{"s", print_string},
		{"c", print_character},
		{"d", print_integer},
		{"i", print_integer},
		{"%", print_percent},
		{NULL, NULL},
	};
	for (i = 0; types[i].X; i++)
	{
		if (*C == *(types[i].X))
			return (types[i].f);
	}
	return (NULL);
}
