#include "shell.h"
/**
 * custom_strcat - Custom implementation of string concatenation
 * @dest: Destination string
 * @src: Source string
 *
 * Return: Pointer to the destination string
 */
char *custom_strcat(char *dest, const char *src)
{
	char *temp = dest;

	while (*dest)
		dest++;
	while ((*dest++ = *src++))
		;
	return (temp);
}
