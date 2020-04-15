#include "holberton.h"

/**
 * command - PID
 * @program: The string printer strtok
 * @args: xx
 * Return: Nothing.
 */
void command(char *program, char **args, char **env)
{
	int pid = 0;
	int status, statusw;

	char *res = Path_find(args[0], env);
	pid = fork();
	if (pid < 0)
	{
		perror(program);
		exit(EXIT_FAILURE);
	}
	else if (pid == 0)
	{
		if (res != NULL)
		{
			status = execve(res, args, env);
			if (status == -1)
			{
				perror(program);
				exit(127);
			}
		}
		else
		{
			status = execve(args[0], args, env);
			if (status == -1)
			{

				perror(program);
				exit(127);
			}
		}
	}
	else if (pid > 0)
	{
		wait(&statusw);
		free(res);
	}
}
