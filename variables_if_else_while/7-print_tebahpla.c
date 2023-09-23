#include <stdio.h>
/**
*main - prints alphabet in reverse
*Return: Always 0
*/

int main(void)
{
char alp[26] = "zyxwvutsrqponmlkjihgfedcba";
int i;
for (i = 0; i < 26; i++)
{
putchar(alp[i]);
}
putchar('\n');
return (0);
}
