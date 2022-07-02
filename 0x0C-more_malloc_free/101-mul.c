#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two positive numbers
<<<<<<< HEAD
 *
 * @argc: n arguments
 *
=======
 * 
 * @argc: n arguments
 * 
>>>>>>> 0d62eb81596c18768e7d0cc13d7706ab94cb12bb
 * @argv: args
 *
 * Return: int
 */

<<<<<<< HEAD
int main(int argc, char **argv)
{
unsigned long mul;
int num1, num2;
	if (argc != 3)
	{ printf("Error\n");
	exit(98); }
	for (num1 = 1; num1 < argc; num1++)
	{
		for (num2 = 0; argv[num1][num2] != '\0'; num2)
		{
			if (argv[num1][num2] > 57 || argv[num1][num2] < 48)
			{  printf("Error\n");
			exit(98); }
		}

	}
	mul = atol(argv[1]) *  atol(argv[2]);
	printf("%lu\n", mul);
return (0);
=======
int main(int argc, char *argv[])
{
unsigned long mul;
int i, j;
if (argc != 4)
{ printf("Error\n");
exit(98); }
for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j] != '\0'; j++)
{
if (argv[i][j] > 57 || argv[i][j] < 48)
{  printf("Error\n");
exit(98); }
>>>>>>> 0d62eb81596c18768e7d0cc13d7706ab94cb12bb
}

}
mul = atol(argv[1]) *  atol(argv[2]);
printf("%lu\n", mul);
return (0);
}