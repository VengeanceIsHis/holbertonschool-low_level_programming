#include "main.h"
/**
 *cap_string - capitalizes all letters in a given string
 *@str: The string to be capitalized
 *Return: A pointer to the string
 */
char *cap_string(char *str)
{
int len = 0;
while (str[index])
{
while (!(str[len] >= 'a' && str[index] <= 'z'))
len++;
if (str[len - 1] == ' ' ||
str[len - 1] == '\t' ||
str[len - 1] == '\n' ||
str[len - 1] == ',' ||
str[len - 1] == ';' ||
str[len - 1] == '.' ||
str[len - 1] == '!' ||
str[len - 1] == '?' ||
str[len - 1] == '"' ||
str[len - 1] == '(' ||
str[len - 1] == ')' ||
str[len - 1] == '{' ||
str[len - 1] == '}' ||
len == 0)
str[len] -= 32;
len++
}
return (str);
}
