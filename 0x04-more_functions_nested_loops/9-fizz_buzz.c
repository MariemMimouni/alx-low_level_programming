#include <stdio.h>
/**
 * main - mai block
 * Description: FizzBuzz
 * Return: none
 */
int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		if (i % 3 == 0)
			printf("Frizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else if ((i % 3 == 0) && (i % 5 == 0))
			printf("FizzBuzz");
		else
			printf("%d", i);
		i++;
		if (i < 100)
			putchar(' ');
	}
	printf("\n");
}
