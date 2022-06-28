#include "main.h"

/**
 * _islower - Function checks lowercase character
 *
 * @c: character to be checked
 *
 * Return: 1 if c is lowercase 0 otherwise
 */
int _islower(int c)
{
int i = 'a';

for (i = 'a'; i <= 'z'; i++)
{
/* refer int c*/
if (c == i)
{
return (1);
}
}
return (0);
}
