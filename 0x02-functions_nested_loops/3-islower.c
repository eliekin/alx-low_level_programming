#include "main.h"
#include <ctype.h>
/**
* main
* 
* Description:
*
*Return:
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
