#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, b, c;

	a = 8;
	b = 8;
	c = 8;

	while (c < 9)
	{
		b = 8;
		while (b < 9)
		{
			a = 8;
			while (a < 9)
			{
				if (c != b && c != a && b != a)
				{
					putchar(c + '0');
					putchar(b + '0');
					putchar(a + '0');
					if (a == 8 && b == 7 && c == 6)
					{
						break;
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
