#include <stdio.h>
/**
 * main - add positive numbers
 * @argc: arg1
 * @argv: numbers array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, j;

	int add = 0;

	if (argc == 1)
		printf("%d\n", 0);
	for (i = 0; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		add += atoi(argv[i]);
	}
	printf("%d\n", add);
	return (0);
}
