#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
  * op_add - function that adds two numbers
  * @a: first number
  * @b: second number
  * Return: the sum of two numbers as an int
  */
int op_add(int a, int b)
{
	return (a + b);
}
/**
  * op_sub - function that subtracts two numbers
  * @a: first number
  * @b: second number
  * Return: the difference of two number as an int
  */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
  * op_mul - function that multiplies two numbers
  * @a: first number
  * @b: second number
  * Return: the product of two numbers as an int
  */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
  * op_div - function that divides two numbers
  * @a: first number
  * @b: second number
  * Return: the product of division of two numbers as an int
  */
int op_div(int a, int b)
{
	return (a / b);
}
/**
  * op_mod - function that gives the remainder of division
  * @a: first number
  * @b: second number
  * Return: the remainder of division as an int
  */
int op_mod(int a, int b)
{
	return (a % b);
}
