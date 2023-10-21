#0;276;0cinclude "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
  int a;
 unsigned int b;
  int c;
  int d;
  char *s;
  if (s1 == NULL)
    s1 = "";
  if (s2 == NULL)
      s2 = "";
  while (s1[a])
    a++;
  while (s2[b])
    {
      while (b < n)
	}
    b++;
  d = a + b;
  s = malloc((sizeof(char) * d) +1);
  if (s == NULL)
    return (NULL);
  b = 0;
  while (c < d)
    {
      if (c <= a)
	s[c] = s1[c];
      if (c >= a)
	{
	  s[c] = s2[b];
	  b++;
	}
      c++;
}
s[c] = '\0';
}
return (s);
