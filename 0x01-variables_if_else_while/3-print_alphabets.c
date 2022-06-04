#include <stdio.h>

/**
 *main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
char i;
char f;
f = '\n';
for (i = 'a'; i <= 'z'; i++)
{
putchar (i);
}
for (i = 'A'; i <= 'Z'; i++)
{
putchar (i);
}
putchar (f);
return (0);
}
