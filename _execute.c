#include "shell.h"

/**
 * _execute - Executes the specified shell command in a child process
 * using fork and execve.
 * @format: command to be executed.
 * @argv: array of strigs representing the command's arguments.
 * @envp: array of strings representing the environment variables.
 */
void _execute(const char *format, char *const argv[], char *const envp[])
{
	int status;

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
		waitpid(child_pid, &status, 0);
	}
}
