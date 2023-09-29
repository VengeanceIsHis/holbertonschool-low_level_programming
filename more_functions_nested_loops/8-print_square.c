#include "main.h"
/**
 *
 *
 */
void print_square(int size)
{
  int x, y;
  y = 0;
  if (size <= 0)
    {
      _putchar('\n');
      while (y < size)
    {
      x = 0;
      while (x < size)
	{
	  _putchar(35);
	  x++;
	}
      _putchar('\n');
      y++;
	}
}
}
