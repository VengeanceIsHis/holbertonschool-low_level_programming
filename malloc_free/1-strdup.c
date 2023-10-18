#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *
 *
 *
 *
 */
char *_strdup(char *str)
{
  size_t len;
  char *newstr;
  len = strlen(str) + 1;
  if (!(newstring = malloc((sizeof(unsigned int) * len))))
      return (NULL);
  memcpy(copy, str, len);
  return (copy);
}
