#include "main.h"

/**
 * _memcpy - Copies bytes
 * @dest: Pointer to the memory area
 * @src: Source
 * @n: Number of bytes to copy from @src
 *
 * Return: A pointer to the destination buffer
 *
 */

char *_memcpy(char *dest, char *src, unsigned int n);
{
	unsigned int index;
	unsigned char *destination = dest;
	const unsigned char *source = src;

	for (index = 0; index < n; index++)
		destination[index] = source[index];

	return (dest);
}
