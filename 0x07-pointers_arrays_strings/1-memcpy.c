#include "main.h"
#include <stdio.h>

/**
 * _memcpy - Entry point
 * @dest: the destination address
 * @src: the sourcee
 * @n: the size
 *
 * Return: Nothing.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
