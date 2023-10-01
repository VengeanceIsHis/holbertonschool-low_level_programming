#include "main.h"

int _strlen(char *s)
{
  int str = 0;
  while(*s != '\0')
    {
      str++;
      s++;
    }
  return (str);
}
