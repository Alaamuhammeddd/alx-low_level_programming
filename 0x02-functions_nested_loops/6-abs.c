#include "main.h"
/**
 * _abs - Entry point
 * Description: 'absolute value'
 * Return: Always 0 (Success)
 * @n: input n
 */
int _abs(int n)
{
	if (n < 0)
	{
		int abs_num;

		abs_num = n * -1;
		return (abs_num);
	}
	else 
	{
		return (n);
	}

}
