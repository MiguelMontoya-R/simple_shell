#include "holberton.h"
/**
 * print_env - Prints shell environment
 * @env: Environment
 */
void print_env(char **env)
{
	int len, i = 0;

	while (env[i] != NULL)
	{
		len = _strlen(env[i]);
		write(1, env[i], len);
		write(1, "\n", 1);
		i++;
	}
}
