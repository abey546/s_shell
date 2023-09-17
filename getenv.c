#include "shell.h"
/**
 * get_environment_variable - Retrieves the value of an environment variable
 * @name: Name of the environment variable
 *
 * Return: Pointer to the value of the variable, or NULL if not found
 */
char *get_environment_variable(const char *name)
{
	char **env;
	char *var;

	for (env = environ; *env != NULL; env++)
	{
		var = *env;

		if (local_strncmp(var, name, string_length(name)) == 0)
		{
			return (var + string_length(name) + 1);
		}
	}
	return (NULL);
}

