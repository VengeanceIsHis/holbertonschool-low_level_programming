#0;276;0cinclude "main.h"
/**
 *_puts_recursion - recursive function that prints a string.
 *@s: string input
 *Return: void
 */
void _puts_recursion(char *s)
{
if (*s)
{
_putchar(*s);
_puts_recursion(s + 1);
}
else
_putchar("\n");
}