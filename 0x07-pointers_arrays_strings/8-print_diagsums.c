#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Entry point
 * @a: input
 * @size: input
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
	int sum_dig1 = 0;
	int sum_dig2 = 0;

	for (int i = 0; i < size; i++)
	{
		sum_dig1 += a[i * size + i];
		sum_dig2 += a[i * size + (size - 1 - i)];
	}

	printf("%d, %d\n", sum_dig1, sum_dig2);
}
