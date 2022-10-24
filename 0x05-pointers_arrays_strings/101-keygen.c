#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates random valid passwords
 *
 * Return: Always 0
 */

int main(void)
{
	char password[25];
	int index = 0, sum = 0, diff_half1, diff_half2;

	srand(time(0));

	while (sum < 480)
	{
		password[index] = 10 + rand() % 15;
		sum += password[index++];
	}

	password[index] = '\0';

	if (sum != 480)
	{
		diff_half1 = (sum - 480) / 2;
		diff_half2 = (sum - 480) / 2;
		if ((sum - 480) % 2 != 0)
			diff_half1++;

		for (index = 0; password[index]; index++)
		{
			if (password[index] >= (10 + diff_half1))
			{
				password[index] -= diff_half1;
				break;
			}
		}
		for (index = 0; password[index]; index++)
		{
			if (password[index] >= (10 + diff_half2))
			{
				password[index] -= diff_half2;
				break;
			}
		}
	}

	printf("%s", password);

	return (0);
}
