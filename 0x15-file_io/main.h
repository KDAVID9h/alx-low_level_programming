#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
//#include <elf.h>

/* Une fonction qui lit un fichier texte et l'imprime sur la sortie standard POSIX */
ssize_t read_textfile(const char *filename, size_t letters);

/* Une fonction qui crée un fichier et écrit du texte dedans */
int create_file(const char *filename, char *text_content);

/* Une fonction qui ajoute du texte à la fin d'un fichier */
int append_text_to_file(const char *filename, char *text_content);

/* Une fonction qui affiche les informations sur la classe ELF */
void print_class(unsigned char e_class);

/* Une fonction qui affiche les informations sur l'encodage des données */
void print_data(unsigned char e_data);

/* Une fonction qui affiche les informations sur le type de fichier ELF */
//void print_type(uint16_t e_type);

/* Une fonction qui affiche les informations sur le système d'exploitation et l'interface ABI */
void print_osabi(unsigned char e_osabi);

int _putchar(char c);

#endif /* MAIN_H */
