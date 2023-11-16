#include "shell.h"

/**
 * main - This is the main function.
 * _leomous() - Function to display prompt.
 * interpret_format() - Function prompts the user to enter a format
 * and reads it from stdin.
 * perform_format() - Function executes the command.
 * Return: 0 Always (success).
 */
int main(void)
{
	char format[200];

	for (;;)
	{
		_leomous();
		interpret_format(format, sizeof(format));
		perform_format(format);
	}

	return (0);
}
