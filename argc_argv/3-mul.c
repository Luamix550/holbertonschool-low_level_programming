#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point for my program
 * @argc: This is the number of arguments
 * @argv: This is the array of arguments
 * Return: Zero upon program success
 */

int main(int argc, char *argv[])
{

int num1, num2, result;
if (argc != 3)
{
printf("Error\n");
return (1);
}

num1 = atoi(argv[1]);
num2 = atoi(argv[2]);

result = num1 *num2;

printf("%d\n", result);
return (0);

}
