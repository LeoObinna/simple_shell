#include "shell.h"

/**
 * main - This is the main function.
 *
 * _leomous() - Function to display the prompt.
 * interpret_format() - Function prompts the user to enter a format
 * and reads it from stdin.
 * _execute() - Function executes the command.
 *
 * Return: 0 Always (success).
 */
int main(void)
{
	char format[MAX_COMMAND_LENGTH];

	while (1)
	{
		_leomous();
		interpret_format(format, sizeof(format));
		_execute(format, NULL, NULL);
	}

	return (0);
}
