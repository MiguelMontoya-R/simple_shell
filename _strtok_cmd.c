#include "holberton.h"

/**
 * strtok_cmd - PID
 * @arg: line buffer from getline
 * @cmd: pointer to command empty space
 * Return: Nothing.
 */
void strtok_cmd(char *arg, char **cmd)
{
	int i = 0;
	char *tok = 0;
	(void)cmd;

	for (i = 0; i < (max_args); i++)
		cmd[i] = NULL;

	i = 0;

	while (arg[i] != '\0')
	{
		if (arg[i] == '#')
			arg[i] = '\0';

		i++;
	}

	tok = strtok(arg, ";");
	i  = 0;

	while (tok != 0)
	{
		cmd[i] = tok;
		i++;

		tok = strtok(0, ";");
	}
}
