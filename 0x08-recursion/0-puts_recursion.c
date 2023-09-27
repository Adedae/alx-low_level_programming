#include <stdio.h>
/**
 * _puts_recursion(char *s) - a function that prints a string
 * 0s: string to print 
 */

void _puts_recurion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s+1);
	}
	else
		_putchar('\n');
}
