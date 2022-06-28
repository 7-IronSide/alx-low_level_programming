#include "main.h"

/**
 * _strncpy - concatenates two strings
 *
 * @dest: the string to be appended upon
 *
 * @src: the destination string to be concatenate
 *
 * @n:the number of bytes to be appended to dest
 *
 * Return: pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int index = 0, src_len = 0;

while (src[index++])
src_len++;

for (index = 0; src[index] && index < n; index++)
dest[index] = src[index];

for (index = src_len; index < n; index++)
dest[index] = '\0';

return (dest);
}
