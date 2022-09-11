#include <stdio.h>
/**
 * main - main block
 * Description: print combination of numbers
 * Return: 0
 */
int main(void)
{
	int i;

	int j;

	for (i = 48; i < 58; i++)
	{
		{
			if (i == j)
				continue;
			putchar(i);
			putchar(j);
			if (i == 56 && j == 57)
				break;
			putchar(44);
			putchar(32);
		}
	}
		putchar(10);
		return (0);
}
