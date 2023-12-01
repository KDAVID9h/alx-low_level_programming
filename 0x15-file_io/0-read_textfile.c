#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - lit un fichier texte et l'imprime sur la sortie standard POSIX
 * @filename: le nom du fichier à lire
 * @letters: le nombre de lettres à lire et à imprimer
 * Return: le nombre réel de lettres lues et imprimées, ou 0 en cas d'erreur
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd; /* le descripteur de fichier */
	char *buffer; /* le tampon pour stocker les lettres lues */
	ssize_t n_read, n_write; /* le nombre de lettres lues et écrites */

	/* vérifier si le nom du fichier est valide */
	if (filename == NULL)
		return (0);

	/* ouvrir le fichier en mode lecture seule */
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	/* allouer de la mémoire pour le tampon */
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	/* lire les lettres du fichier dans le tampon */
	n_read = read(fd, buffer, letters);
	if (n_read == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	/* fermer le fichier */
	close(fd);

	/* écrire les lettres du tampon sur la sortie standard */
	n_write = write(STDOUT_FILENO, buffer, n_read);
	if (n_write == -1 || n_write != n_read)
	{
		free(buffer);
		return (0);
	}

	/* libérer la mémoire du tampon */
	free(buffer);

	/* retourner le nombre de lettres lues et imprimées */
	return (n_write);
}
