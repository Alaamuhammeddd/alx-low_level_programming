#include "main.h"

/**
 * _isalpha - Entry point
 * Description: 'checks for alphabet'
 * Return: Always 0 (Success)
 * @c: to be checked char
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return(1);
	}
	else
	{
		return (0);
	}
}
