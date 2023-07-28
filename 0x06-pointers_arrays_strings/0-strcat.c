#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 *
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int b;
	int z;

	b = 0;
	while (dest[b] != '\0')
	{
		b++;
	}
	z = 0;
	while (src[z] != '\0')
	{
		dest[b] = src[z];
		b++;
		z++;
	}

	dest[b] = '\0';
	return (dest);
}
