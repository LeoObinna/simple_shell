#include "shell.h"

/**
 * perform_format - Executes the specified shell command in a child process
 * using fork and execve.
 * @format: command to be executed
 */
void perform_format(const char *format)
{
	pid_t child_pid = fork();

	if (child_pid == -1)
	{
		perror("fork");
		exit(EXIT_FAILURE);
	}
	else if (child_pid == 0)
	{
		char *args[] = {format, NULL};
		char *env[] = {NULL};

		execve(format, args, env);
		perror("execve");
		exit(EXIT_FAILURE);
	}
	else
	{
		wait(NULL);
	}
}
