#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Entry point
 * Description: 'print natural numbers from n to 98'
 * Return: void
 * @n: input n
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		for (; n > 98; n--)
		{
			printf("%d, ", n);
		}
	}
	else if (n < 98)
	{
		for (; n < 98; n++)
		{
			printf("%d, ", n);
		}
	}
	printf("%d\n", n);
}
