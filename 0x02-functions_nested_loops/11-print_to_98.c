#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - Prints all matural numbers
 * @n: The number to begin
 */
void print_to_90(int n)
{
	if (n >= 98)
	{
		while (n > 98)
		{
			printf("%d, ", n--);
		}
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
		{
			printf("%d, ", n++);
		}
		printf("%d\n", n);
	}
}
