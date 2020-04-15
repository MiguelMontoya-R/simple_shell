#include "holberton.h"
/**
 * _getenv - This function
 * @name: command to look
 * @environ: environment var
 * Return: NULL or the array splitted
 */
char *_getenv(char *name, char **environ)
{
	char *tmp = NULL;
	int i = 0;

	while (environ[i])
	{
		tmp = strtok(environ[i], "=");
		if (_strcmp(tmp, name) == 0)
			return (strtok(NULL, "\n"));
		i++;
	}
	return (NULL);
}
