#include <stdio.h>
/**
 * main - main block
 * Description: print numbers using putchar
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	putchar(10);
	return (0);
}