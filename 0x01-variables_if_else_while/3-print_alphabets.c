#include <stdio.h>
/* more headers goes there */

/**
* main - Entry point
*
* Return: Always 0 (success)
*/
int main(void)
{
	char alpha, ALPHA;
	/* your code goes there */
for    (alpha = 'a';    alpha <= 'z';    alpha++)
{
putchar(alpha);
}
for    (ALPHA = 'A';    ALPHA <= 'Z';    ALPHA++)
{
putchar(ALPHA);
}
putchar('\n');
	return (0);
}
