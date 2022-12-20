#include "main.h"

/**
 * print_array - unctin that prints n elements of an array o integers
 *
 * @a: pointer to first int 
 * @n: p0inter to second int
 * Rerurn: nothing
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
