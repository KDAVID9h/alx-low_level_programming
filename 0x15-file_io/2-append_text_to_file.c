#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

/**
 * append_text_to_file - ajoute du texte à la fin d'un fichier
 * @filename: le nom du fichier
 * @text_content: le texte à ajouter, terminé par NULL
 * Return: 1 en cas de succès, -1 en cas d'échec
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd; /* le descripteur de fichier */
	ssize_t n_write; /* le nombre de caractères écrits */
	int len = 0; /* la longueur du texte */

	/* vérifier si le nom du fichier est valide */
	if (filename == NULL)
		return (-1);

	/* ouvrir le fichier en mode append, c'est-à-dire écriture à la fin */
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	/* vérifier si le texte est valide */
	if (text_content != NULL)
	{
		/* calculer la longueur du texte */
		while (text_content[len])
			len++;

		/* écrire le texte à la fin du fichier */
		n_write = write(fd, text_content, len);
		if (n_write == -1)
		{
			close(fd);
			return (-1);
		}
	}

	/* fermer le fichier */
	close(fd);

	/* retourner 1 en cas de succès */
	return (1);
}
