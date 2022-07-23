#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry Point
 * @argc: count of arguments
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int num = 0, num1 = 0;

	if (argc == 3)
	{
		num = atoi(argv[1]);
		num1 = atoi(argv[2]);
		printf("%d\n", num * num1);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}

