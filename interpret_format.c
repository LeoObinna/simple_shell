#include "shell.h"

/**
 * interpret_format - Reads a line of input from stdin,
 * removes the trailing newline character 
 * and prints a newline or an error message based on the result.
 * @format: The buffer to store the input
 * @size: The size of the buffer
 */
void interpret_format(char *format, size_t size)
{
	if (fgets(format, size, stdin) == NULL)
	{
		if (feof(stdin))
		{
			obikngs("\n");
			exit(EXIT_SUCCESS);
		}
		else
		{
			obikngs("ERROR while reading input.\n");
			exit(EXIT_FAILURE);
		}
	}
	format[strcspn(format, "\n")] = '\0';
}
