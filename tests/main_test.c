#include "main.h"
#include <stdio.h>

int main(void)
{
	_printf("Hello\n");
	printf("Vérification : Hello a 5 caractères, null bytes exclu\n");
	_printf(NULL);
	printf(NULL);
	return(0);
}