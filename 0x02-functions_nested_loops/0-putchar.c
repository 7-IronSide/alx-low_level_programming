#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
new_putchar("_putchar");
new_putchar("\n");
return (0);
}
/**
 * new_putchar - Prints the value of c
 *
 *@c: The value prints
 * Return: 0
 */
char new_putchar(char c[])
{
printf("%s", c);
return (0);
}
