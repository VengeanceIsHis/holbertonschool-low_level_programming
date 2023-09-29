#include "main.h"
/**
 *
 *
 */
void print_square(int size)
{
  int x, y;
  y = 0;
  if (size < 1)
      _putchar('\n');
      while (y < size)
    {
      x = 0;
      while (x < size)
	{
	  x = 0;
	  _putchar('#');
	  x++;
	}
      _putchar('\n');
      y++;
	}
}
