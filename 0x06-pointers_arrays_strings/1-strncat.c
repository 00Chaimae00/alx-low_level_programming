#include "main.h"
/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int b;
	int z;

	b = 0;
	while (dest[b] != '\0')
	{
		b++;
	}
	z = 0;
	while (z < n && src[z] != '\0')
	{
	dest[b] = src[z];
	b++;
	z++;
	}
	dest[b] = '\0';
	return (dest);
}
