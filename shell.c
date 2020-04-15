#include "holberton.h"

/**
 * main - Shell program
 * @ac: Argument counter
 * @av: Argument vector
 * @env: Enviroment
 * Return: Always 0.
 */
int main(int ac, char **av, char **env)
{
	char *line = NULL, *cmd[max_args], *args[max_args];
	int read = 0, i = 0;
	size_t len = 0;

	(void)ac;
	(void)av;
	(void)env;

	signal(SIGINT, SIG_IGN);
	while (1)
	{
		if (isatty(STDIN_FILENO) != 0 && isatty(STDOUT_FILENO) != 0)
			write(STDOUT_FILENO, "#cisfun$ ", 9);

		i = 0;
		read = getline(&line, &len, stdin);
		if (read == -1)
		{
			if (isatty(STDIN_FILENO) != 0 && isatty(STDOUT_FILENO) != 0)
				write(STDOUT_FILENO, "\n", 1);
			free(line);
			exit(0);
		}
		if (_strcmp(line, "\n") == 0)
			continue;
		strtok_cmd(line, cmd);
		while (cmd[i] != NULL)
		{
			strtok_args(cmd[i], args);
			shell(line, args, av, env);
			i++;
		}
	}
	free(line);
	return (0);
}

/**
 * shell - this function controls the shell
 * @line: Getline
 * @args: Argument this commands
 * @av: Argument vector
 * @env: Enviroment
 * Return: Always 0.
 */
void shell(char *line, char **args, char **av, char **env)
{
	int com = 0, status = 0;

	if (_strcmp(args[0], "exit") == 0)
	{
		if (args[1])
		{
			status = _atoi(args[1]);
			free(line);
			exit(status);
		}
		else
		{
			free(line);
			exit(0);
		}
	}
	if (_strcmp(args[0], "cd") == 0)
		cd_function(args, env), com = 1;
	if (_strcmp(args[0], "touch") == 0)
		create_file(args[1], NULL), com = 1;
	if (_strcmp(args[0], "env") == 0)
		print_env(env), com = 1;
	if (com == 0)
		command(av[0], args, env);

}
