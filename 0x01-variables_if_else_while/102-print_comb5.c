#include <stdio.h>
/**
 * main - main block
 * Description: print numbers x4
 * Return: 0
 */
int main(void)
{
	int i1;

	int i2;

	int j1;

	int j2;

	int x;

	for (i1 = 48; i1 < 58; i1++)
	{
		for (i2 = 48; i2 < 58; i2++)
		{
			if (i2 == 57)
				x = 48;
			else
				x = i2 + 1;
			for (j1 = i1; j1 < 58; j1++)
			{
				for (j2 = x; j2 < 58; j2++)
				{
					putchar(i1);
					putchar(i2);
					putchar(32);
					putchar(j1);
					putchar(j2);
					if (i1 == 57 && i2 == 56)
						break;
					putchar(44);
					putchar(32);
					x = 48;
				}
			}
		}
	}
	putchar(10);
	return (0);
}
