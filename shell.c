#include "shell.h"
/**
 * main - Entry point of the shell program
 *
 * Return: Always 0
 */
int main(void)
{
	char *buffer;
	size_t bufsize;
	char *args[10];

	buffer = NULL;
	bufsize = 0;
	while (1)
	{
		if (is_interactive())
		{
			display_prompt();
		}
		read_input(&buffer, &bufsize);
		buffer[string_length(buffer) - 1] = '\0';
		tokenize_input(buffer, args);
		execute_command(args);
	}
	free(buffer);

	return (0);
}
