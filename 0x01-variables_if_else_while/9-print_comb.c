#include <stdio.h>
/* more headers goes there */

/**
* main - Entry point
*
* Return: Always 0 (success)
*/
int main(void)
{
	int i, j;
	/* your code goes there */
for    (i = 0;    i < 10;    i++)
{
for    (j = 0;    j < 10;    j++)
{
putchar((i % 10) + '0');
putchar((j % 10) + '0');
if    (i == 9 && j == 9)
{
continue;
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
	return (0);
}
