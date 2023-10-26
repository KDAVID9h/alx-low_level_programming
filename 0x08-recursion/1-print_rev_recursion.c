#include <stdio.h>
#include "main.h"
/**
 * @s: parametre
*/
void _print_rev_recursion(char *s)
{
	if (*s == '\0') {
		return;  // Si le caractère actuel est '\0', retourne sans rien imprimer
	}
	_print_rev_recursion(s + 1);  // Appel récursif avec le reste de la chaîne
	putchar(*s);  // Imprime le caractère actuel après l'appel récursif
}