#include <unistd.h>
#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 1 (Bug)
 */
int main(void)
{
	char quo[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
		write(1, quo, 59);
	return (1);
}
