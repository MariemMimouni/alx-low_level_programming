#include <stdio.h>
/**
 * main - main block
 * Description: print FizzBuzz Fizz Buzz
 * Return: none
 */
int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
			printf("FizzBuzz");
		else if (i % 5 == 0)
			printf("Buzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else
			printf("%d", i);
		i++;
		if (i != 100)
			putchar(' ');
	}
	putchar('\n');
}
