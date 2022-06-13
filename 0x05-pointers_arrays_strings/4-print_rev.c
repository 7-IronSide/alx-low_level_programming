#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints a string, in reverse
 *
 * @s: variable
 * 
 */

void print_rev(char *s)
{
int len;
for (len = len; *s != '\0'; len--)
s++;

s--;
for (len = len; len != 0; len--)
{
_putchar(*s);
s--;
}
_putchar('\n');
}