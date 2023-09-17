#include "shell.h"

/**
 * local_strncmp - Compares two strings up to a certain length
 * @str1: Pointer to the first string
 * @str2: Pointer to the second string
 * @n: Number of characters to compare
 *
 * Return: Negative if str1 < str2, 0 if equal, Positive
 * if str1 > str2
 */
int local_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t i;

	for (i = 0; i < n; i++)
	{
		if (str1[i] != str2[i])
		{
			return (str1[i] - str2[i]);
		}
		if (str1[i] == '\0')
		{
			return (0);
		}
	}
	return (0);
}
