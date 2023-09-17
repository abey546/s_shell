#include "shell.h"
/**
 * duplicate_string - Creates a duplicate of a string
 * @str: Pointer to the string to duplicate
 *
 * Return: Pointer to the duplicated string
 */
char *duplicate_string(const char *str)
{
	char *dup;
	size_t len = 0;
	size_t i;

	while (str[len] != '\0')
	{
		len++;
	}
	dup = malloc(len + 1);
	if (dup == NULL)
	{
		perror("malloc");
		exit(EXIT_FAILURE);
	}
	for (i = 0; i <= len; i++)
	{
		dup[i] = str[i];
	}
	return (dup);
}

