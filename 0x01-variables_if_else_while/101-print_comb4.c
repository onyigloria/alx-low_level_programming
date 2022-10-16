#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, b, c;

	a = 0;
	b = 1;
	c = 2;

	while (c <= 7)
	{
		b = 1;
		while (b <= 8)
		{
			a = 0;
			while (c <= 9)
			{
				if (a != b && a != c && b != c)
				{
					putchar(a + '0');
					putchar(b + '0');
					putchar(c + '0');
					if (a == 0 && b == 1 && c == 2)
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
