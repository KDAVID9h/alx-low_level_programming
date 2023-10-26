#include <stdio.h>

void _puts_recursion(char *s)
{
	if (*s == '\0') {
		putchar('\n');  // Si le caractère actuel est '\0', imprime un saut de ligne
		return;
	}
	putchar(*s);  // Imprime le caractère actuel
	_puts_recursion(s + 1);  // Appel récursif avec le reste de la chaîne
}
