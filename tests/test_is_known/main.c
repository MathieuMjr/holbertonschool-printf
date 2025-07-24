#include "main.h"

int main ()
{
	char *str = "v";
	if (is_known(str[0]) == 0)
	{
		printf("success\n");
	}
	else
	{
		printf("Fail\n");
	}
	return(0);
}
