#include "shell.h"
/**
 * string_length - Calculates the length of a string
 * @str: Pointer to the string
 *
 * Return: Length of the string
 */
size_t string_length(const char *str)
{
	size_t len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}
