#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
  * main - a function that generates a specific key
  * @argc: number of arguments
  * @argv: arguments passed
  * Return: 0 on success and 1 if failed
  */
int main(int argc, char *argv[])
{
	char key[7] = "      ";
	size_t len, i;
	int product = 1;
	int last_char;
	int sum = 0;

	if (argc != 2)
	{
		printf("Correct usage: ./keygen username\n");
		return  (1);
	}

	len = strlen(argv[1]);

	key[0] = (char)((len + 30) % 26) + 'A';

	for (i = 0; i < len; i++)
		sum += argv[1][i];
	key[1] = (char)((sum * 3) % 26) + 'A';

	for (i = 0; i < len; i++)
		product *= argv[1][i];
	key[2] = (char)((product + 10) % 26) + 'A';

	key[3] = (char)((len + sum + product) % 10) + '0';

	last_char = argv[1][len - 1];
	key[4] = (char)((last_char + 5) % 10) + '0';

	key[5] = (char)(((len * last_char) % 26) + 'A');

	printf("%s\n", key);
	return (0);
}
