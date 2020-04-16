#include <stdio.h>
#include "header.h"
#include <string.h>
/**
 *
 */
char **path(char **env_main)
{
	char *token;
	char *env;
	char **path_dir;
	int i = 0;
	int n = 0;
	int counter = 0;

	env = _getenv("PATH", env_main);
	while (env[i])
	{
		if (env[i] == ':')
			counter++;
		i++;
	}
	path_dir = malloc(sizeof(char *) * (i + 2));
	token = strtok(env, ":");
	while (token)
	{
		path_dir[n] = token;
		token = strtok(NULL, ":");
		n++;
	}
	path_dir[n] = NULL;
	return (path_dir);
}
