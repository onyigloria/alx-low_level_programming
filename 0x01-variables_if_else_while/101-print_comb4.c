#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, b, c;

	a = 128;
	b = 128;
	c = 128;

	while (c < 138)
	{
		b = 128;
		while (b < 138)
		{
			a = 128;
			while (a < 138)
			{
				if (c != b && c != a && c < b < a)
				{
					putchar(c);
					putchar(b);
					putchar(a);
					if (a == 137 && b == 136 && c == 135)
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

		

