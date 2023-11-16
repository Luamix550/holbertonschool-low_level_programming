#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds positive numbers.
 * @argc: This is the number of arguments
 * @argv: This is the array of arguments
 * Return: Zero upon program success
 */
int main(int argc, char *argv[])
{
int i;
int j;
int sum = 0;

for (i = 1 ; i < argc ; ++i)
{
for (j = 0 ; argv[i][j] != '\0' ; j++)
{
if (argv[i][j] < '0' || argv[i][j] > '9')
{
printf("Error\n");
return (1);
}
}
sum += atoi(argv[i]);
}
printf("%d\n", sum);
return (0);
}
