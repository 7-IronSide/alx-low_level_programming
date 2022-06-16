#include "main.h"

/**
 * _strcat -  concatenates two strings
 *
 * @src: the source string to append to @dest 
 *
 * @dest: the destination string to be concatenate
 *
 * Return: pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
int index = 0, dest_len = 0;
while (dest[index++])
for (index = 0; src[index]; index++)
dest[dest_len++] = src[index];
return (dest);
}
