#include "holberton.h"
/**
 * main - Getline
 * @ac: xx
 * @av: xx
 * @env: xx
 * Return: Always 0.
 */
int main(int __attribute__((unused)) ac, char **av, char **env)
{
	char *line = NULL, *cmd[max_args], *args[max_args];
	int read = 0, com = 0, i = 0, status = 0;
	size_t len = 0;

	signal(SIGINT, SIG_IGN);
	while (1)
	{
		if (isatty(STDIN_FILENO) != 0 && isatty(STDOUT_FILENO) != 0)
			write(STDOUT_FILENO, "#cisfun$ ", 9), i = 0;
		read = getline(&line, &len, stdin);
		if (read == -1)
		{
			if (isatty(STDIN_FILENO) != 0 && isatty(STDOUT_FILENO) != 0)
				write(STDOUT_FILENO, "\n", 2);
			free(line), exit(0);
		}
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
				cd_function(args, env), com = 1;
			if (_strcmp(args[0], "touch") == 0)
				create_file(args[1], NULL), com = 1;
			if (com == 0)
				command(av[0], args, env);
			i++;
		}
	}
	free(line);
	return (0);
}
