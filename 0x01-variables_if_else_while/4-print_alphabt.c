#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Prints the alphabets without q and e
 *
 * Result: Always 0 (Success)
 */
int main(void)
{
        int i;

        for(i = 97; i < 121; i++)
        {
		if(i != 101 && i != 113)
		{
                	putchar(i);
		}
        }
        putchar('\n');
        return (0);
}