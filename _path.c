#include "holberton.h"


/**
 * cd_function - Getline
 * @args: args
 * Return: Always 0.
 */
void cd_function(char **args)
{
	char PWD[200];

	if (args[1])
	{
		char *OLDPWD = getenv("OLDPWD");

		if (strcmp(args[1], "-") == 0)
		{
			if (chdir(OLDPWD) == 0)
			{
				getcwd(PWD, 200);
			}
		}
		else if (chdir(args[1]) == 0)
		{
			getcwd(PWD, 200);
		}
	}
}

/**
 * file_exists - Getline
 * @filename: xx
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
 * Path_find - Getline
 * @arg: xx
 * Return: Always 0.
 */
char *Path_find(char *arg)
{
	char *path = getenv("PATH");
	char *saveptr;
	char *tmpstr = malloc(strlen(path) + strlen(arg) + 2);
	char *directory = strtok_r(path, ":", &saveptr);
	char *slash = "/";
	short found = 0;

	while ((directory != NULL) && (found == 0))
	{
		sprintf(tmpstr, "%s%s%s", directory,
(directory[strlen(directory) - 1] == '/') ? "" : slash, arg);
		if (file_exists(tmpstr))
		{
			found = 1;
		}
		directory = strtok_r(NULL, ":", &saveptr);
	}
	if (found)
		return (tmpstr);

	return (NULL);
}
