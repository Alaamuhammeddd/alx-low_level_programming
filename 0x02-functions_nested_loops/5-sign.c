#include "main.h"
/**
 * print_sign - Entry point
 * Description: 'prints sign'
 * Return: Always 0 (Success)
 * @n: number to be checked 
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
