#include "main.h"

/**
 * _islower - checks for lowercase
 * Return: 1 for lowercase 0 for otherwisie
 * @c: tobe checked for lowercase
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
