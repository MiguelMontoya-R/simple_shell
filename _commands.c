#include "holberton.h"

/**
 * command - PID
 * @program: The string printer strtok
 * @args: xx
 * Return: Nothing.
 */
void command(char *program, char **args)
{
	int pid = 0;
	int status, statusw;

	pid = fork();
	if (pid < 0)
	{
		perror(program);
	}
	if (pid == 0)
	{

		char *res = Path_find(args[0]);

		if (res != NULL)
		{
			status = execv(res, args);
			if (status == -1)
			{
				perror(program);
				exit(-1);
			}
		}
		else
		{
			status = execv(args[0], args);
			if (status == -1)
			{
				perror(program);
				exit(-1);
			}
		}
	}
	else
	{
		wait(&statusw);
	}
}
