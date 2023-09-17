#include "shell.h"
/**
 * execute_in_path - Executes a command found in the PATH environment variable
 * @args: Array of arguments for the command
 */
void execute_in_path(char **args)
{
	char *path;
	char *path_copy;
	char *dir;
	char full_path[BUFFER_SIZE];
	char error_message[100];

	path = get_environment_variable("PATH");
	if (path == NULL)
	{
		fprintf(stderr, "Error: PATH environment variable not found.\n");
		exit(EXIT_FAILURE);
	}
	path_copy = duplicate_string(path);
	dir = strtok(path_copy, ":");

	while (dir != NULL)
	{
		snprintf(full_path, sizeof(full_path), "%s/%s", dir, args[0]);

		if (access(full_path, X_OK) == 0)
		{
			if (execve(full_path, args, NULL) == -1)
			{
				perror("execve");
				free(path_copy);
				exit(EXIT_FAILURE);
			}
		}
		dir = strtok(NULL, ":");
	}
	free(path_copy);
	custom_strcpy(error_message, "Command not found: ");
	custom_strcat(error_message, args[0]);
	custom_strcat(error_message, "\n");
	write(STDERR_FILENO, error_message, strlen(error_message));
	
	exit(EXIT_SUCCESS);
}

