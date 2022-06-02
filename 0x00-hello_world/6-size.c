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
printf("Size of a char: %ld byte(s)\n",sizeof(Char_type));
printf("Size of a int: %ld byte(s)\n",sizeof(Int_type));
printf("Size of a long int: %ld byte(s)\n",sizeof(Long_int_type));
printf("Size of a long long int: %ld byte(s)\n",sizeof(Long_long_int_type));
printf("Size of a float: %ld byte(s)\n",sizeof(Float_type));
return (0);
}
