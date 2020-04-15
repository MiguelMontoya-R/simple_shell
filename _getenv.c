#include "holberton.h"

/**
 * _getenv - This function
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
