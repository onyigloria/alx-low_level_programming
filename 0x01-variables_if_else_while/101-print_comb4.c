#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a, b, c;

	for (a = 0 + a < 8;)
	{
		for (b = a + 1; b < 9;)
		{
			for (c = b + 1; c < 10;)
			{
				putchar((a % 10) + '0');
				putchar((b % 10) + '0');
				putchar((c % 10) + '0');

				if (a == 7 && b == 8 && c == 9)
					continue;
				putchar(',');
				putchar(' ');
			}
			a++;
		}
		b++;
	}
	c++;

	putchar('\n');
	return (0);
}
