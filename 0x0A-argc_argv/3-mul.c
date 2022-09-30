#include <stdio.h>
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

	if (argc == 1)
	{
		printf("ERROR");
		return (1);
	}
	else
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);
		p = x * y;
		printf("%d\n", p);
	}
	return (0);
}
