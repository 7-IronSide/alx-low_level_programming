#include <stdio.h>
#include "main.h"

/**
 * puts - prints a string, followed by a new line, to stdout
 * 
 */

void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str);
str++;
}
_putchar('\n')
}