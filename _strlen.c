#include "holberton.h"

/**
 * _strlen - gets the lenght of given string
 *
 * @s: given string
 * Return: Return the lenght
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
