#include "main.h"
/**
 *
 *
 *
 */
void puts2(char *str)
{
int len = 0;
int t = 0;
char *y = str;
int 0;

while (*y != '\0')
{
y++;
len++;
}
t = len - 1;
for (o = 0; o <= t; o++)
{
if o % 2 == 0)
{
_putchar(str[o]);
}
}
_putchar('\n');
}
