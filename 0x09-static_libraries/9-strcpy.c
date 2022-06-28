#include "main.h"

/**
 * _strcpy - print the copy of an array.
 *
 * @dest: destination array
 *
 * @src: source array
 *
 * Return: dest array.
 */

char *_strcpy(char *dest, char *src)
{
int i = -1;

do {
i++;
dest[i] = src[i];
} while (src[i] != '\0');

return (dest);
}
