#include <stdio.h>
/**
 * main - Entry point
 * Description: 'Print the alphabets from AtoZ'
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
