#include "main.h"
#include <string.h>
/**
* rot13 - encodes using rot13
* @s: parameter
* Return: character
*/
char *rot13(char *)
{
	int n, length, key;

	key = 13;
	length = strlen(s);
	for (n = 0, n < length; n++)
	{
		int currentLetter;
		char cipher;

		currentLetter = s[n];
		cipher = currentLetter + key;
		if ((currentLetter - 'a') + key > 26)
		{
			key = (currentLetter - 'a') + key) % 26;
			cipher = 'a' + key;
		}
		key = 13;
	}
	return (s[cipher]);
}
