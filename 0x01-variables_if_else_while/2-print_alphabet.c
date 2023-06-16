#include <stdio.h>

/**
 * main - Prints the alphabets
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char alp[26] = 'abcdefghijklmnopqrstuvwxyz';
	int i;
       
	for (i = 0; i < 26; i++)
	{
		putchar(alp[1]);
	}
	putchar('\n');
	return (0);
}
