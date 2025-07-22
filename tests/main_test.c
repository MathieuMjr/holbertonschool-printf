#include "main.h"
#include <stdio.h>

int main(void)
{
	_printf("Hello, %s.\n", "Vincent");
	printf("Vérification Hello Vincent : ");
	printf("Hello, %s.\n", "Vincent");
	/*_printf(NULL);
	printf("Vérification pour NULL : ");
	printf(NULL);*/
	_printf("Promotion de 20 %% sur les %s.\n","chemises");
	printf("Vérification Promotion :");
	printf("Promotion de 20 %% sur les %s\n","chemises");
	_printf("50%% offerts pour 3 %s achetés de taille %c.\n", "pantalons", 'S');
	printf("Vérification 50 pourcent : ");
	printf("50%% offerts pour 3 %s achetés de taille %c.\n", "pantalons", 'S');
	_printf("Je veux prouver que je peux utiliser plein d'arguments ! %c %s %s %c %s %c\n", 'S', "chemises", "pantalons", 'L', "jupes", 'M');
	printf("Je veux prouver que je peux utiliser plein d'arguments ! %c %s %s %c %s %c\n", 'S', "chemises", "pantalons", 'L', "jupes", 'M');
	return(0);
}