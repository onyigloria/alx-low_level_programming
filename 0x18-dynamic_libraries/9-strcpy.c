#include "main.h"
/**
 * _strcpy - copy the string pointed to by src
 * @dest: char to check
 * @src: char to check
 * Return: 0
 */

char *_strcpy(char *dest, char *src)
{
	int onyee;

	for (onyee = 0; src[onyee] != '\0'; onyee++)
		dest[onyee] = src[onyee];
	dest[onyee] = '\0';
	return (dest);
}
