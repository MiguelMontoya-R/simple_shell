#include "holberton.h"
/**
 * command - PID
 * @program: The string printer strtok
 * @args: arguments
 * @env: environment var
 * @counter: Number of commands executed
 * Return: Nothing.
 */
void command(char *program, char **args, char **env, int counter)
{
	int pid = 0, status, statusw;

	pid = fork();
	if (pid < 0)
		perror(program), exit(EXIT_FAILURE);
	else if (pid == 0)
	{
		char *res = find_path(args[0], env);

		if (res != NULL)
		{
			status = execve(res, args, env);
			if (status < 0)
			{
				write(STDERR_FILENO, program, _strlen(program));
				write(STDERR_FILENO, ": ", 2);
				_print_num(counter);
				write(STDERR_FILENO, ": ", 2);
				write(STDERR_FILENO, res, _strlen(res));
				write(STDERR_FILENO, ": not found\n", 12);
				exit(127);
			}
		}
		else
		{
			status = execve(args[0], args, env);
			if (status < 0)
			{
				write(STDERR_FILENO, program, _strlen(program));
				write(STDERR_FILENO, ": ", 2);
				_print_num(counter);
				write(STDERR_FILENO, ": ", 2);
				write(STDERR_FILENO, args[0], _strlen(args[0]));
				write(STDERR_FILENO, ": not found\n", 12);
				exit(127);
			}
		}
	}
	else if (pid > 0)
		wait(&statusw);
}
