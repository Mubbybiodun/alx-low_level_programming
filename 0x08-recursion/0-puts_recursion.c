#include "main.h"
/**
 * _puts_recursion - function that prints a string followed by a new line
 * @s: input
 *
 * Return: Always 0.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	_puts_recursion(s + 1);
}
