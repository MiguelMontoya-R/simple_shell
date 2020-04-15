#include "holberton.h"
/**
 * command - PID
 * @program: The string printer strtok
 * @args: xx
 * @env: environment var
 * Return: Nothing.
 */
void command(char *program, char **args, char **env)
{
	int pid = 0;
	int status, statusw;

/*	Path_find(args[0], env); */
	pid = fork();
	if (pid < 0)
	{
		perror(program);
		exit(EXIT_FAILURE);
	}
	else if (pid == 0)
	{
		status = execve(args[0], args, env);
		if (status == -1)
		{
			perror(program);
			exit(127);
		}
	}
	else if (pid > 0)
	{
		wait(&statusw);
	}
}
