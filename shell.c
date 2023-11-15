#include "shell.h"

/**
 * _leomous() - Function to display prompt.
 * interpret_format() - Function prompts the user to enter a format and reads it from stdin.
 * @format: Buffer to store user’s input.
 * perform_format() - Function executes the command.
 * @format: The shell command to be executed.
 */
int main(void) {
    char format[200];

    for (;;) {
        _leomous();
        interpret_format(format, sizeof(format));
        perform_format(format);
    }

    return 0;
}
