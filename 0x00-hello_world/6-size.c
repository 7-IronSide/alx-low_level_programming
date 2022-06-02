#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char Char_type;
int Int_type;
long int Long_int_type;
long long int Long_long_int_type;
float Float_type;
printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(Char_type));
printf("Size of a int: %lu byte(s)\n", (unsigned long)sizeof(Int_type));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(Long_int_type));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(Long_long_int_type));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(Float_type));
return (0);
}
