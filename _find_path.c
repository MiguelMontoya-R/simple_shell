#include "holberton.h"

/**
 * file_exists - Getline
 * @filename: filename a.k.a path
 * Return: Always 0.
 */
short file_exists(char *filename)
{
	int fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		return (0);
	}
	close(fd);
	return (1);
}

/**
 * find_path - Getline
 * @arg: Argument command
 * @env: Enviroment
 * Return: Always 0.
 */
char *find_path(char *arg, char **env)
{
	char *token = NULL;
	char *path;
	char *path_dir;
	char *sl = "/";

	path = _getenv("PATH", env);

	token = strtok(path, ":");

	while (token)
	{
		path_dir = _strdup(token);

		_strcat(path_dir, sl);
		_strcat(path_dir, arg);

		if (file_exists(path_dir))
		{
			return (path_dir);
		}
		free(path_dir);
		token = strtok(NULL, ":");
	}
	return (NULL);
}
