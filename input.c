#include "shell.h"
/**
 * read_input - Reads a line of input from the user
 * @buffer: Pointer to the buffer where the input will be stored
 * @bufsize: Pointer to the size of the buffer
 */
void read_input(char **buffer, size_t *bufsize)
{
	if (getline(buffer, bufsize, stdin) == -1)
	{
		if (feof(stdin))
		{
			write(STDOUT_FILENO, "\n", 1);
			free(*buffer);
			exit(0);
		}
		else
		{
			perror("Error reading input");
			free(*buffer);
			exit(EXIT_FAILURE);
		}
	}
}
