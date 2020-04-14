#include "holberton.h"

/**
 * strtok_cmd - PID
 * @arg: The string printer strtok
 * @cmd: cmd
 * Return: Nothing.
 */
void strtok_cmd(char *arg, char **cmd)
{
	int i = 0;
	char *tok = 0;
	(void)cmd;

	for (i = 0; i < (max_args); i++)
		cmd[i] = NULL;

	tok = strtok(arg, ";");
	i  = 0;

	while (tok != 0)
	{
		cmd[i] = tok;
		i++;

		tok = strtok(0, ";");
	}
}
