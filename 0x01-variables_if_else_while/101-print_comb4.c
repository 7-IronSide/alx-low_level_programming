#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
int i;
int j;
int z;
for (i = '0'; i <= '9'; i++)
{
for (j = '0'; j <= '9'; j++)
{
for (z = '0'; z <= '9'; z++)
if (i < j && j < z)
{
putchar(i);
putchar(j);
putchar(z);
if (i < '7' || j < '8' || z < '9')
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
