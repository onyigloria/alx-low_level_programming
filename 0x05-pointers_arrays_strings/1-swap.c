#include "main.h"
/**
* swap_int - swaps the value of two integers
* @a: int a
* @b: int b
* Return 0
*/
void swap_int(int *a, int *b)
{
		int x;

		x = *a;
		*a = *b;
		*b = x;
}
