#include <stdio.h>
/**
 * Main -main block
 * Description: print letters in lowercase except q and e
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = 97; n < 123; n++)
	{
		if (n == 113 || n == 101)
		{
			continue;
		}
		putchar(n);
	}
	return (0);
}
