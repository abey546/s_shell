#include "shell.h"

/**
 * execute_absolute_path - Executes a command with an absolute path
 *
 * @args: Array of arguments for the command
 */
void execute_absolute_path(char **args)
{
	if (execve(args[0], args, NULL) == -1)
	{
		perror("execve");
		exit(EXIT_FAILURE);
	}
}
