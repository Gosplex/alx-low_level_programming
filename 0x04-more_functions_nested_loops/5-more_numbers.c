#include "main.h"

/**
 * more_numbers - Prints from 0-14 ten times
 */

void more_numbers(void)
{
	int num, count;

	for (count = 0; count <= 9; count++)
	{
		for (num = 0; num <= 9; num++)
		{
			if (num > 9)
			{
				_putchar((num / 10) + '0');
			}
			_putchar((num % 10) + '0');
		}
		_putchar('\n');
	}
}
