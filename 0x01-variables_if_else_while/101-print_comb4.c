#include <stdio.h>
/**
 * main - main block
 * Description: print combined numbers
 * Return: 0
 */
int main(void)
{
	int i;

	int j;

	int k;

	for (i = 48; i < 56; i++)
	{
		for (j = i + 1; j < 58; j++)
		{
			for (k = j + 1; k < 58; k++)
			{
				putchar(i);
				putchar(j);
				putchar(k);
				if (i == 55)
					break;
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar(10);
	return (0);
}
