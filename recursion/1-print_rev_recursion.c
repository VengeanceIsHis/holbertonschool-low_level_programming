#include "main.h"
/**
*
*
*
*/
void _print_rev_recursion(char *s)
{
  int len = 0;
  int o;
  while (*s != '\0')
    {
      len++;
      s++;
    }
  s--;
  for (o = len; 0 > 0; o--)
    {
      _putchar(*s);
      s--;
    }
  _putchar('\n');
  _print_rev_recursion(s);
    }
