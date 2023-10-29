#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - function that adds two integers
 *@a: input value
 *@b: input value
 *Return: Added value
 */
int op_add(int a, int b)
{
return (a + b);
}
/**
 * op_sub - function that subtracts 1st and 2nd integers
 *@a: input value
 *@b: input value
 *Return: Subtracted value
 */
int op_sub(int a, int b)
{
return (a - b);
}
/**
 * op_mul - function that multiplies two integers
 *@a: input value
 *@b: input value
 *Return: multiplied value
 */
int op_mul(int a, int b)
{
return (a * b);
}
/**
 * op_div - divides two integers
 *@a: input value
 *@b: input value
 *Return: divided value
 */
int op_div(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a / b);
}
/**
 * op_mod - function that finds the modular of two integers
 *@a: input value
 *@b: input value
 *Return: Modular value
 */
int op_mod(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a % b);
}
