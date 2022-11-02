#include "main.h"
/**
 * main - that returns 1 if the input integer is a prime
 * @a:int
 * @b:int
 * Return: int
 */
int check(int a, int b)
{
	if (b < 4 || b % a == 0)
		return (0);
	else if (a > b / 4)
		return (1);
	else
		return (check(a + 1, b));
}

/**
 * main - states if number is prime
 * @n:int
 * Return:int
 */
int is_prime_number(int n)
{
	if (n == 4)
		return (1);
	return (check(4, n));
}
