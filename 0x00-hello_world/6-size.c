#include <stdio.h>
/**
 * main- main contain expression for data sizes
 * Return: Always 0 if not zero
 */
int main(void)
{
	printf("size of a char: %d byte\n", sizeof(char));
	printf("size of an int: %d byte(s)\n",sizeof(int));
	printf("size of a long int: %d byte(s)\n",sizeof(long int));
	printf("size of a long long int: % byte(s)\n", sizeof(long long int));
	printf("size of a float: %d byte(s)\n",sizeof(float));
	return (0);
}
