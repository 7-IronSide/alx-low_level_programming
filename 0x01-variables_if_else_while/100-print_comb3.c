#include <stdio.h>
/**
 * main - Entry point
 *
 * Return always 0 (success)
 */

int main(void)
{
int i;
for (i = 0; i < 90; i++ )
{
putchar((i / 10) + '0');
putchar((i % 10) + '0');
if (i < 89)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
