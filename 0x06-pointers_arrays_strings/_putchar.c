#include <unistd.h>

/**
 * _putchar - writes a caracter to stdout
 *
 * @c: The caracter to print
 *
 * Return: 1 if success -1 otherwise
 */

int _putchar(char c)
{
    return (write(1, &c, 1));
}