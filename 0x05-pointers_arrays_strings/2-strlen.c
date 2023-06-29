#include <stdio.h>
#include "main.h"

/**
 * _strlen - function that returns string length
 * @s: string to return its length
 *
 * Return: length of @s
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s++)
	length++;
	return (length);
}
