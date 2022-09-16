#include "main.h"
#include <stdio.h>

/**
 * main - test function that prints if integer is zero
 * Return: 0
 */

int main(void)
{
	int i;

	i = 0;
	int a = positive_or_negative(i);

	printf("%d is zero", a);

	return (0);
}
