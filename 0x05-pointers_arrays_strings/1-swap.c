#include "main.h"
/**
 * swap_int - swaps value of twoo integers
 *
 * Return: 0.
 */

void swap_int(int *a, int *b)
{
    int new = 0;
    new = *b;
    *b = *a;
    *a = new;
    return ();
}