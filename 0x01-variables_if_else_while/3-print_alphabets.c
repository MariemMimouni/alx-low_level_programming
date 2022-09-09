#include<stdio.h>
/**
 * main -main block
 * Description: print letters in lowercase then uppercase
 * Return: 0
 */
int main(void)
{
	int x;

	int y;

	for (x = 97; x < 123; x++)
	{
		putchar(x);
	}
	for (y = 65; y < 91; y++)
	{
		putchar(y);
	}
	putchar(10);
	return (0);
}
