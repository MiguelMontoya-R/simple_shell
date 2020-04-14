#include "holberton.h"

/**
 * strtok_args - PID
 * @arg: The string printer strtok
 * @args: args
 * Return: Nothing.
 */
void strtok_args(char *arg, char **args)
{
	int i = 0;
	char *tok = NULL;

	for (i = 0; i < (max_args); i++)
		args[i] = NULL;

	i = 0;

	while (arg[i] != '\0')
	{
		if (arg[i] == '#')
			arg[i] = '\0';

		i++;
	}

	tok = strtok(arg, " \n\t");
	i  = 0;

	while (tok != 0)
	{
		args[i] = tok;
		i++;

		tok = strtok(0, " \n\t");
	}
}
