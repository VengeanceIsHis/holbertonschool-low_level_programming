#include <stdio.h>


int main(void)
{
  int x ='A';
  while (x <= 'Z') {
    x = tolower(x);
    putchar(x);
    x ++;
  }
}
