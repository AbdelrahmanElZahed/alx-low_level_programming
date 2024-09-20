#include <stdio.h>
#include <string.h>

/**
 * generate_key - Generates a key based on the username.
 * @username: The input username for which the key is generated.
 *
 * This function calculates a key by summing the ASCII values of
 * each character in the username and applies a simple transformation.
 * The resulting key is returned as an unsigned long integer.
 *
 * Return: The generated key.
 */
unsigned long generate_key(const char *username)
{
	unsigned long key = 0;
	int i;

	for (i = 0; username[i] != '\0'; i++)
	{
		key += username[i];
	}
	/* Simple transformation to simulate key generation*/
	key = (key ^ 0x5A5A5A5A) + 0x12345678;
	return (key);
}

/**
 * main - The entry point of the keygen program.
 * @argc: The number of command-line arguments.
 * @argv: The array of command-line argument strings.
 *
 * This function checks for the correct number of arguments,
 * generates a key for the provided username, and prints the key
 * to standard output.
 *
 * Return: 0 on success, or 1 if the usage is incorrect.
 */
int main(int argc, char *argv[])
{
	unsigned long key;  /*Declare the key variable at the start*/

	if (argc != 2)
	{
		printf("Usage: %s username\n", argv[0]);
		return (1);
	}
	key = generate_key(argv[1]);
	printf("%lu\n", key);
	return (0);
}

