#include "main.h"

/**
 * _islower - checks for lowercase
 * Return: 1 for lowercase 0 for otherwisie
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
