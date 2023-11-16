#include "shell.h"

/**
 * _execute - Executes the specified shell command in a child process
 * using fork and execve.
 * @format: command to be executed.
 * @argv: array of strings representing the command's arguements.
 * array must be terminated with a NULL pointer.
 * @envp: array of strings representing the environment variables.
 * array must be terminated with a NULL pointer.
 */
void _execute(const char *format, char *const argv[], char *const envp[])
{
	pid_t child_pid = fork();

	if (child_pid == -1)
	{
		perror("fork");
		exit(EXIT_FAILURE);
	}
	else if (child_pid == 0)
	{
		execve(format, argv, envp);
		perror("execve");
		exit(EXIT_FAILURE);
	}
	else
	{
		wait(NULL);
	}
}
