#include <stdio.h>

/**
 * main - Prints the numbers from 0 to 9.
 *
 * Result: Always 0 (Success)
 */
int main(void)
{
        int i;

        for(i = 0; i < 10; i++)
        {
		printf("%d", i);
        }
        putchar('\n');
        return (0);
}