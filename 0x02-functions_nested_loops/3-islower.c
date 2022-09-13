#include "main.h"
#include <ctype.h>

/**
* _islower - checks if it is lower case
* 
* Description: checks if it is lower case
*
*Return: 1 or 0 depending on c
*/
int _islower(int c)
{	
	int response;

	response = islower(c);		
	if(response > 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	
}
