#include <stdio.h>
/**
 * main -main block
 * Description: print lowercase letters 
 * Return 0
 */
int main (void)
{
	int n;

	for ( n=97 ; n < 123 ; n++ )
	{
		putchar (n);
		putchar (10);
	}
	return (0);
}
