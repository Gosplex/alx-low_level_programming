#include "main.h"

/**
 * largest_number - Returns largest number
 * @a: first num
 * @b: second num
 * @c: third num
 *
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && a > c)
	{
		return (a);
	}
	else if (b > a && b > c)
	{
		return (b);
	}
	else
	{
		return (c);
	}
}
