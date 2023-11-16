#include <stdio.h>
/**
 * main - prints all arguments it receives.
 * @argc: total number of arguments
 * @argv: contains the values of the arguments
 * Return: 0 successful
*/
int main(int argc, char *argv[])
{
int i;

for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
