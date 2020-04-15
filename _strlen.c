#include "holberton.h"

/**
 * _strlen - xxx
 *
 * @s: yy
 * Return: Description of the returned value
 */


int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
