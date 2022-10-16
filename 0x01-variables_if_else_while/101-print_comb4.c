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

	while (c < 20)
	{
		b = 1;
		while (b < 20)
		{
			a = 0;
			while (a < 20)
			{
				if (a < b && b < c)
				{
					putchar(c);
					putchar(b);
					putchar(a);
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
