#include "main.h"

/**
* rot13 - encodes using rot13
* @s: parameter
* Return: character
*/
char *rot13(char *)
{
	int n, length, i, key;

	key = 13;
	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	for (n = 0; n <= i; n++)
	{
		int currentLetter;
		char cipher;

		currentLetter = s[n];
		cipher = currentLetter + key;
		if ((currentLetter - 'a') + key > 26)
		{
			key = ((currentLetter - 'a') + key) % 26;
			cipher = 'a' + key;
		}
		s[n] += key;
		key = 13;
	}
	return (s);
}
