#include "main.h"

/**
 *  _strlen - returns the length of a string
 *
 * @s: variable
 *
 * Return: 0.
 */

int _strlen(char *s)
{
int length = 0;

while (s[length])
length++;
return (length);
}
