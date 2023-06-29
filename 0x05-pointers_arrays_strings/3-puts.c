#include <stdio.h>
#include "main.h"

/**
 * _puts - prints a string to an output
 * @str: String to print
 * Return: nothing
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		putchar(*str);
	}
		putchar('\n');
}
