#include "holberton.h"

/**
 * _atoi - This function that convert a string to an integer
 *
 * @s: number in the string can be preceded by an infinite number of characters
 * Return: Number into the string
 */
int _atoi(char *s)
{

	int n = 0, Signo = -1, sw = 0, i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			Signo = Signo * -1;

		if (s[i] >= '0' && s[i] <= '9')
		{
			n = (n * 10) - (s[i] - '0');
			sw = 1;
		}
		else if (sw == 1)
			break;

		i++;
	}

	return (n * Signo);
}
