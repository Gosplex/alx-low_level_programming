#include "main.h"

/**
 * print_line - Draw a line
 * @n: Character to draw the line
 */

void print_line(int n)
{
	int len;

	if (n > 0)
	{
		for (len = 0; len < n; len++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
