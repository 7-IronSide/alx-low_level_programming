#include "main.h"

/**
 * _strncat -  concatenates two strings
 *
 * @dest: the string to be appended upon
 *
 * @dest: the destination string to be concatenate
 *
 * @n:the number of bytes to be appended to dest
 *
 * Return: pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
int index = 0; dest_len = 0;

while (dest[index++])
dest_len++;
for (index = 0; src[index] && index < n; index++)
dest[des_len++] = src[index];
return (dest);
}
