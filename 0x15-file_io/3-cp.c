#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

#define BUFFER_SIZE 1024 // La taille du tampon pour lire le fichier par blocs de 1024 octets

/**
 * main - le point d'entrée du programme
 * @argc: le nombre d'arguments passés au programme
 * @argv: le tableau des arguments passés au programme
 * Return: 0 en cas de succès, un code d'erreur sinon
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to; // Les descripteurs de fichiers source et destination
	char buffer[BUFFER_SIZE]; // Le tampon pour stocker les données lues
	ssize_t n_read, n_write; // Le nombre d'octets lus et écrits
	char *file_from, *file_to; // Les noms des fichiers source et destination

	// Vérifier si le nombre d'arguments est correct
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	// Récupérer les noms des fichiers
	file_from = argv[1];
	file_to = argv[2];

	// Ouvrir le fichier source en mode lecture
	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	// Ouvrir le fichier destination en mode écriture, création et troncature
	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		close(fd_from);
		exit(99);
	}

	// Copier le contenu du fichier source dans le fichier destination par blocs de 1024 octets
	while ((n_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		n_write = write(fd_to, buffer, n_read);
		if (n_write != n_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			close(fd_from);
			close(fd_to);
			exit(99);
		}
	}

	// Vérifier s'il y a eu une erreur de lecture
	if (n_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		close(fd_from);
		close(fd_to);
		exit(98);
	}

	// Fermer les fichiers
	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		close(fd_to);
		exit(100);
	}

	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}

	// Retourner 0 en cas de succès
	return (0);
}
