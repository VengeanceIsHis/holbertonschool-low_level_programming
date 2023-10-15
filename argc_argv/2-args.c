#include "main.h"
#include <stdio.h>
/**
 *
 *
 *
 *
 *
 *
 */
int main(int argc, char *argv[])
{
  int i;
  for (i = argv[0]; i < '\0'; i++)
    printf("%s\n", i);
  return (0);
