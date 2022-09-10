#include <stdio.h>
/* more headers goes there */

/**
* main - Entry point
*
* Return: Always 0 (success)
*/
int main(void)
{
	char alpha;
	/* your code goes there */
for    (alpha = 'a';    alpha <= 'z';    alpha++)
{
if    (alpha == 'e' || alpha == 'q')
{
continue;
}
putchar(alpha);
}
putchar('\n');
	return (0);
}
