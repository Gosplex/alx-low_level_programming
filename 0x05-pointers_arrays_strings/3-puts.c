#include "main.h"

/**
 * _puts - Prints a string to output
 * @str: String
 *
 */

void _puts(char *str)
{
	while (str)
	{
		_putchar(*str++);
	}

	_putchar('\n');
}
