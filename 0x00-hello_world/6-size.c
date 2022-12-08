#include <stdio.h>
/**
 * Description: main - prints out string on std.
 * Return: 0 if success.
 */
int main(void)
{
	printf("Size of char: %lu byte(s)\n", sizeof(char));
	printf("Size of an int: %lu byte(s)\n", sizeof(int));
	printf("Size of a long int: %lu byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %lu byte(s)\n",sizeof(long long int));
	printf("Size of a float: %lu byt(s)\n", sizeof(float));
	return (0);
}
