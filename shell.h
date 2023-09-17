#ifndef SHELL_H
#define SHELL_H

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>

char *custom_strcpy(char *dest, const char *src);
char *custom_strcat(char *dest, const char *src);
void display_prompt(void);
int is_interactive(void);
void read_input(char **buffer, size_t *bufsize);
void tokenize_input(char *buffer, char **args);
char* duplicate_string(const char *str);
size_t string_length(const char *str);
int local_strncmp(const char *str1, const char *str2, size_t n);
char* get_environment_variable(const char *name);
void execute_absolute_path(char **args);
void execute_in_path(char **args);
void execute_command(char **args);

extern char **environ;

#define BUFFER_SIZE 1024
#endif /* SHELL_H */

