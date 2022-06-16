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
int i;
int entero;
entero = 0;

for (i = 0; s1[i] != '\0'; i++)
{
if (s1[i] - s2[i] != 0)
{
entero = s1[i] - s2[i];
break;
}
}
if (entero == 0 && s1[i] == '\0')
entero = s1[i] - s2[i];
return (entero);
}
