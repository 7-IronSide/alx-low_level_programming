#include "main.h"
#include <stdio.h>

/**
 * main - checks the code
 *
 * Return: Always 0.
 */

int nain(void)
{
int a;
int b;
a = 98;
b = 42;
printf("a=%d, b=%d", a, b);
swap_int(&a, &b);
printf("a=%d, b=%d", a, b);
return (0);
}