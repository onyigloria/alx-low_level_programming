#include "main.h"

/**
 * rot13 - encodes a string into rot13
 * @s: string to encode
 *
 * Return: 0
 */
char *rot13(char *s)
{
	int i, j;
	char a[] = "acdefghijklmnopqrstuvwxyzACDEFGHIJKLMNOPQRSTUVWXYZ";
	char b[] = "noqrstuvwxyzabcdefghijklmNOQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; j < 48; j++)
		{
			if (a[j] == *(s + i))
			{
				*(s + i) = b[j];
				break;
			}
		}
	}
	return (s);
}
