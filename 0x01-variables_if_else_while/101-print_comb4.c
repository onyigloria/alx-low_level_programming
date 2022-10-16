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

	while (c <= 7)
	{
		b = 1;
		while (b <= 7)
		{
			a = 2;
			while (a <= 7)
			{
				if (c != b && c != a && b != a)
				{
					putchar(c + '0');
					putchar(b + '0');
					putchar(a + '0');
					if (a == 6 && b == 5 && c == 4)
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
