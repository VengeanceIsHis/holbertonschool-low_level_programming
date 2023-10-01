#include "main.h"
/**
 *swap_int - uses a third integet to swap two inputted integers
 *@a: first integer to be swapped
 *@b:second integer to be swapped
 */
void swap_int(int *a, int *b)
{
int m;
m = *a;
*a = *b;
*b = m;
}
