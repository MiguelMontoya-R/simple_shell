#include "holberton.h"
/**
 * _strcmp - This function is compare two string
 *
 * @s1: Arrays destination the two string/arrays
 * @s2: This second string/array
 * Return: zero if is equal or the number of characters matched
 */
int _strcmp(char *s1, char *s2)
{

	int i = 0;

	while (s1[i] != '\0')
	{
		if (s1[i] >  s2[i])
			return (s1[i] - s2[i]);

		if (s1[i] < s2[i])
			return (s1[i] - s2[i]);

		i++;
	}
	return (0);
}
