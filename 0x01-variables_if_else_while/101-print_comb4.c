#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, b, c;

	a = 2;
	b = 1;
	c = 0;

	while (c <= 8)
	{
		b = 1;
		while (b <= 9)
		{
			a = 2;
			while (a <= 10)
			{
				if (c != b && c != a && b != a)
				{
					putchar((c % 10) + '0');
					putchar((b % 10) + '0');
					putchar((a % 10) + '0');
					if (a == 7 && b == 8 && c == 9)
					{
						continue;
					}
					putchar(',');
					putchar(' ');
				}
				a++;
			}
			b++;
		}
		c++;
	}
	putchar('\n');
	return (0);
}
