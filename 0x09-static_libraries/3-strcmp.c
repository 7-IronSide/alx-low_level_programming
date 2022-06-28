#include "main.h"

/**
 * _strcmp - compares two strings
 *
 * @s1: pointer for the first string we want to compare
 *
 * @s2: pointer for the second string we want to compare
 *
 * Return: an integer
 */
int _strcmp(char *s1, char *s2)
{
while (*s1 && *s2 && *s1 == *s2)
{
s1++;
s2++;
}

return (*s1 - *s2);
}
