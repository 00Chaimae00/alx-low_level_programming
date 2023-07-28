#include "main.h"
/**
 * leet - encode into 1337speak
 * @n: input value
 * Return: n value
 */
char *leet(char *n)
{
	int b, z;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (b = 0; n[b] != '\0'; b++)
	{
		for (z = 0; z < 10; z++)
		{
			if (n[b] == s1[z])
			{
				n[b] = s2[z];
			}
		}
	}
	return (n);
}
