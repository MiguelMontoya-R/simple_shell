#include "holberton.h"


/**
 * main - Getline
 * @ac: xx
 * @av: xx
 * @env: xx
 * Return: Always 0.
 */
int main(int ac, char **av, char **env)
{
	char *line = NULL;
	int read = 0, com = 0, i = 0, status = 0;
	size_t len = 0;
	char *cmd[max_args];
	char *args[max_args];

	(void)ac, (void)env;
	signal(SIGINT, SIG_IGN);
	while (1)
	{
		printf("#cisfun$ ");
		read = getline(&line, &len, stdin), i = 0;
		if (read == -1)
			printf("\n"), free(line), exit(1);
		if (_strcmp(line, "\n") == 0)
			continue;
		strtok_cmd(line, cmd);
		while (cmd[i] != NULL)
		{
			strtok_args(cmd[i], args), com = 0;
			if (_strcmp(args[0], "exit") == 0)
			{
				if (args[1])
					status = _atoi(args[1]), free(line), exit(status);
				else
					free(line), exit(0);
			}
			if (_strcmp(args[0], "cd") == 0)
				cd_function(args), com = 1;
			if (_strcmp(args[0], "touch") == 0)
				create_file(args[1], NULL), com = 1;
			if (com == 0)
				command(av[0], args);
			i++;
		}
	}
	free(line);
	return (0);
}
