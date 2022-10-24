#include "main.h"
/**
* print_rev - print a string in reverse
* @s: print rev
*/

void print_rev(char *s)
{
	int a, b;

	n = 0;
	while (s[b] != '\0')
		b++;

	for (a = b - 1; a >= 0; a--)
	{
		_putchar(s[a]);
	}
	_putchar('\n');
}
