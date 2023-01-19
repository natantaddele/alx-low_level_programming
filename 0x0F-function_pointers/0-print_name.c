#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints a name as is
 *
 * @f: name of the person
 *
 * Return: Nothing.
 */

void print_name(char *name, void (*f)(char *))
{
f(name);
}
