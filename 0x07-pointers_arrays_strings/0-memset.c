#include "main.h"
#include <stdio.h>

/**
 * _memset - a function that fills memory with a constant byte
 * @b: the constant byte
 * @s: the pointer size
 * @n: the address of the memory to print
 *
 * Return: a pointer to memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
