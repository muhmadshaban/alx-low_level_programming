#include"main.h"

/**
 ** main - program that prints the minimum number of coins
 ** to make change for an amount of money.
 ** @argc: number of arguments.
 ** @argv: array of arguments.
 **
 ** Return: (0) .
 **/

int main(int argc, char *argv[])

{
	if (argc == 2)
{
	int i, result = 0, num = atoi(argv[1]);
	int coins[] = {25, 10, 5, 2, 1};

	for (i = 0; i < 5; i++)
{
	if (num >= coins[i])
{
	result += num / coins[i];
	num = num % coins[i];
	if (num % coins[i] == 0)
{
	break;
}
}
}
	printf("%d\n", result);
}
	else
{
	printf("Error\n");
	return (1);
}
	return (0);
}
