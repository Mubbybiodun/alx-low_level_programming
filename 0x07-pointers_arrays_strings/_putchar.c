#include <unistd.h>

/**
 * _putchar - prints to stdio
 * @c: the character to print
 *
 * Retrun: On succes 1
 * On error, -1 is returned and errno is set appropriately
 */
int _putchar(char c) {
	return write(1, &c, 1);
}

