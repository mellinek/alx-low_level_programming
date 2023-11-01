#include <stdio.h>
#include "main.h"


/**
 * main - prints the name of the program
 * @argc: number of arguments
 * @argv: arguments vector
 * Return: 0
 */

int main(int argc, char *argv[])

{
	(void) argc;

	printf("%s\n", *argv);
	return (0);

}

