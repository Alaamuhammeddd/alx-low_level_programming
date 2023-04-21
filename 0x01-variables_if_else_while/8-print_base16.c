#include <stdio.h>
/**
 * main - Entry point
 * Description: 'Prints hexdecimal values'
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char hexdecimal[] = "0123456789abcdef";

	for (i = 0; i < 16; i++)
	{
		putchar(hexdecimal[i]);
	}
	putchar('\n');
	return (0);
}
