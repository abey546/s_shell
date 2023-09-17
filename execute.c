#include "shell.h"
/**
 * execute_command - Forks a child process to execute a command
 * @args: Array of arguments for the command
 */
void execute_command(char **args)
{
	pid_t pid;
	int status;

	pid = fork();
	if (pid == -1)
	{
		perror("fork");
		exit(EXIT_FAILURE);
	}
	if (pid == 0)
	{
		if (strchr(args[0], '/') != NULL)
		{
			execute_absolute_path(args);
		}
		else
		{
			execute_in_path(args);
		}
	}
		else
		{
			wait(&status);
		}
}

