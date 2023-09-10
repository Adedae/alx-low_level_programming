#include <stdio.h>

/**
 *  main - Entry point
 *
 *  description: print numbers of base16 in lowercase
 *
 *   Return: Always 0 (success)
*/

int main(void)
{
	char base16[17] = "0123456789abcdef";

	int i;

	for (i = 0; i < 16; i++)
	{
		putchar(base16[i]);
	}
	putchar('\n');
	return (0);
}
