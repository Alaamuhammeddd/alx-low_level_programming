#include <stdio.h>
/**
 * main - Entry point
 * Description: 'prints all single digits'
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
