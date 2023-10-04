#include "main.h"
/**
 *
 *
 *
 *
 */
char *_strncat(char *dest, char *src, int n)
{
  int str1;
  int str2;
  str1 = 0;
  if (dest[str1] <= n)
    {
  while (dest[str1] != '\0')
    {
      str++;
    }
  while (src[str2] != '\0')
    {
      dest[str1] = src[str2];
      str1++;
      str2++;
    }
  dest[str1] = '\0';
  return (dest);
    }
}
