#include "main.h"

int is_known (char c)
{
	char *list = "csid%";
	int i = 0;

	while(c != list[i] && list[i] != '\0')
	{
		++i;
	}

	if (i <= 4)
	{
		return(0);
	}
	else
	{
		return(-1);
	}

}