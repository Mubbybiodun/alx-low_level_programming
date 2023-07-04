#include "main.h"
#include <stdio.h>

/**
 * _strchr - function to find specific character in a string
 * @s: string
 * @c: character
 *
 * Return: Always 0.
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	return (0);
}
