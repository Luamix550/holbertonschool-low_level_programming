#include <stdio.h>
/**
 * main - prints all arguments it receives
 * @argc: total number of arguments
 * @argv: contains the values of the arguments
 * Return: 0 successful
*/
int main(int argc, char __attribute__((unused)) *argv[])
{
printf("%d\n", argc - 1);
return (0);
}
