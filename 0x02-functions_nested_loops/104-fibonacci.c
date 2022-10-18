#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers, starting with
 *        1 and 2, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	int count;
	unsigned long amd1 = 0, amd2 = 1, sum;
	unsigned long amd1_half1, amd1_half2, amd2_half1, amd2_half2;
	unsigned long half1, half2;

	for (count = 0; count < 92; count++)
	{
		sum = amd1 + amd2;
		printf("%lu, ", sum);

		amd1 = amd2;
		amd2 = sum;
	}

	amd1_half1 = amd1 / 10000000000;
	amd2_half1 = amd2 / 10000000000;
	amd1_half2 = amd1 % 10000000000;
	amd2_half2 = amd2 % 10000000000;

	for (count = 93; count < 99; count++)
	{
		half1 = amd1_half1 + amd2_half1;
		half2 = amd1_half2 + amd2_half2;
		if (amd1_half2 + amd2_half2 > 9999999999)
		{
			half1 += 1;
			half2 %= 10000000000;
		}

		printf("%lu%lu", half1, half2);
		if (count != 98)
			printf(", ");

		amd1_half1 = amd2_half1;
		amd1_half2 = amd2_half2;
		amd2_half1 = half1;
		amd2_half2 = half2;
	}
	printf("\n");
	return (0);
}
