#include "main.h"
#include <stdio.h>

/**
 * swap_int - check the code
 * @a: value 1
 * @b: value 2
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
int temp;

temp = *a;
*a = *b;
*b = temp;
}
