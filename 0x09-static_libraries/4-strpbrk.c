#include "main.h"

/**
 * _strpbrk - bytes
 *
 * @s: pointer to char
 *
 * @accept: pointer to char
 *
 * Return: NULL
 */
char *_strpbrk(char *s, char *accept)
{
int index;

while (*s)
{
for (index = 0; accept[index]; index++)
{
if (*s == accept[index])
return (s);
}

s++;
}
return ('\0');
}
