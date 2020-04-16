#include "holberton.h"
/**
 * cd_function - changes directory
 * @args: absolute path
 * @env: environment var
 * Return: Always 0.
 */
void cd_function(char **args, char **env)
{
	char PWD[200];

	if (args[1])
	{
		char *OLDPWD = _getenv("OLDPWD", env);

		if (_strcmp(args[1], "-") == 0)
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
