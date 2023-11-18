#include "main.h"

char *str_concat(char *s1, char *s2)
{

char *new_str;
new_str = malloc(strlen(s1)+strlen(s2)+1);
new_str[0] = '\0';
strcat(new_str,s1);
strcat(new_str,s2);

return (new_str);
}