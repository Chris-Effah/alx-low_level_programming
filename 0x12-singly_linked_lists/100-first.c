#include <stdio.h>
/**
  * before_the_main - a function that prints a line before the main function
  * is executed.
  * Return: Void
  */
void __attribute__((constructor)) before_the_main()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
