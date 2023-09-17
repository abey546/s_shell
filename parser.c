#include "shell.h"
/**
 * tokenize_input - Tokenizes a string into an array of arguments
 * @buffer: Pointer to the buffer containing the input string
 * @args: Array of pointers to store the arguments
 */
void tokenize_input(char *buffer, char **args)
{
	int i = 0;

	char *token;

	token = strtok(buffer, " ");
	while (token != NULL)
	{
		args[i] = token;
		i++;
		token = strtok(NULL, " ");
	}
	args[i] = NULL;
}

