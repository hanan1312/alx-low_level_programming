#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
*main - start
*Description: 'print string'
*@argc: number of arguments
*@argv: arguments
*Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
int frst_ n;
int scnd_ n;
if (argc < 3)
{
	printf("Error\n");
	return (1);
}
	frst_ n = atoi(argv[1]);
	scnd_ n = atoi(argv[2]);
	printf("%d\n", frst_ n *scnd_ n);
	return (0);
}
