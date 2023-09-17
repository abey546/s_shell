#include "shell.h"
/**
 * display_prompt - Displays the shell prompt
 */
void display_prompt(void)
{
	char prompt[] = "#cisfun$ ";

	write(STDOUT_FILENO, prompt, sizeof(prompt) - 1);
	fsync(STDOUT_FILENO);
}
