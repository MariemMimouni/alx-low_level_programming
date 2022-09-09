#include <stdio.h>
/**
 * main - main block
 * Description: print letters in reverse
 * REturn: 0
 */
int main(void)
{
	int i;

	for (i = 122; i > 96; i--)
	{
		putchar(i);
	}
	putchar(10);
	return (0);
}
