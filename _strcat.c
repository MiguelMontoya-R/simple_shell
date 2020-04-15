#include "holberton.h"

/**
 * _strcat - This function is concate two string
 *
 * @dest: Arrays destination the two string/arrays
 * @src: This second string/array
 * Return: Description of the returned value
 */

char *_strcat(char *dest, char *src)
{

	int c1 = 0, i = 0, c2 = 0;

	while (dest[c1] != '\0')
		c1++;

	while (src[c2] != '\0')
		c2++;

	for (i = 0 ; i < c2 && src[i] != '\0' ; i++)
		dest[c1 + i] = src[i];

	dest[c1 + i] = '\0';

	return (dest);
}
