#include "main.h"
#include <stdio.h>

int main(void)
{
	int len;
	int len2;

	len = _printf("%c", 'V');
	len2 = printf("%c", 'V');
	printf("\nValeur de len : %d\n", len);
	printf("Valeur de Len2 : %d\n", len2);
	_printf("Let's print a simple sentence.\n");

	_printf("\n");
	_printf("Hello, %s.\n", "Vincent");
	printf("Vérification Hello Vincent : ");
	printf("Hello, %s.\n", "Vincent");
	len = _printf(NULL);
	printf("Vérification pour NULL : ");
	len2 = printf(NULL);

	printf("Len : %d\n", len);
	printf("Len2 : %d\n", len2);
	_printf("Promotion de 20 %% sur les %s.\n","chemises");
	printf("Vérification Promotion :");
	printf("Promotion de 20 %% sur les %s\n","chemises");
	_printf("50%% offerts pour 3 %s achetés de taille %c.\n", "pantalons", 'S');
	printf("Vérification 50 pourcent : ");
	printf("50%% offerts pour 3 %s achetés de taille %c.\n", "pantalons", 'S');
	_printf("Je veux prouver que je peux utiliser plein d'arguments ! %c %s %s %c %s %c\n", 'S', "chemises", "pantalons", 'L', "jupes", 'M');
	printf("Je veux prouver que je peux utiliser plein d'arguments ! %c %s %s %c %s %c\n", 'S', "chemises", "pantalons", 'L', "jupes", 'M');
	_printf("Hello, %c\n", 'V');
	_printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char *)0);
	len = _printf("%");
	printf("Vérification pour % : ");
	len2 = printf("%");
	printf("Len : %d\n", len);
	printf("Len2 : %d\n", len2);
	_printf("%");
	_printf("3%tttt");
	_printf("Unknown:[%r]\n");
	_printf("%d\n", -456);
	_printf("%c%cth %s%s a%cg%s: Y%sou %s no%ching%s Snow.%c", 'W', 'i', "some ", "more", 'r', "s", "", "know", 't', ", Jon", '\n');

	return(0);
}