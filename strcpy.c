#include "shell.h"
/**
 * custom_strcpy - Custom implementation of string copy
 *  @dest: Destination string
 *  @src: Source string
 *
 *  Return: Pointer to the destination string
 */
char *custom_strcpy(char *dest, const char *src)
{
	char *temp = dest;

	while ((*dest++ = *src++))
		;
	return (temp);
}
