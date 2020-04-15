#include <stdio.h>
#include <string.h>
/**
 *
 */
char *_getenv(const char *name, char **environ)
{
	char *tmp = NULL;
	int i = 0;

	while (environ[i])
	{
		tmp = strtok(environ[i], "=");
		if (strcmp(tmp, name) == 0)
			return (strtok(NULL, "\n"));
		i++;
	}
	return (NULL);
}
