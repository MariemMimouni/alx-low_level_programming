#include <stdio.h>
#include <stdlib.h>
/**
 * main - block
 * Description: multiplies two numbers
 * @argc: arg1
 * @argv: arguments array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int x, y, p;

	if (argc != 3)
	{
		printf("Error");
		return (1);
	}
	printf("%d\n", atoi(argv[1] * atoi(argv[2]);
	return (0);
}
