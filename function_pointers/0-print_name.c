#ifdef PRINT_NAME_H
#define PRINT_NAME_H
/**
 * print_name - print name
 * @name: name to print
 * @f: pointer
*/
void print_name(char *name, void (*f)(char *))
{

if (name != NULL && f != NULL)
{
f(name);
}
}
#endif