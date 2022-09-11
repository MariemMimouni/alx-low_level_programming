#include <stdio.h>
/**
 * main - main block
 * Description: print numbers x4
 * Return: 0
 */
int main(void)
{
	int a = 0;

	int b;

	int c;

	int d;

	while (a < 10)
	{
		b = 0;
		while (b < 10)
		{
			c = 0;
			while (d < 0)
			{
				if (!(a == c && b == d))
				{
					putchar('0' + a);
					putchar('0' + b);
					putchar(' ');
					putchar('0' + c);
					putchar('0' + d);
				}
				if (!(a + b == 18 && c + d == 17))
				{
					putchar(',');
					putchar(' ');
				}
				d++;
			}
			c++;
		}
		b++;
	}
	putchar(10);
	return (0);
}
