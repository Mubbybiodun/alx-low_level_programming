#include <unistd.h>

/**
 * _putchar - function that prints to the std output
 * c - input
 *
 * Return output
 */
int _putchar(char c)
{
	return write(1, &c, 1);
}
