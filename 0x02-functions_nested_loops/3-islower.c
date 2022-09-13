#include "main.h"
#include <ctype.h>

/**
* _islower - checks if it is lower case
* 
* Description: checks if it is lower case or not
*
* Return: returns 1 or 0 depending on the value of c
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
