# Projet : Systèmes de fichiers

Ce projet consiste à écrire des programmes en C qui manipulent des fichiers et des descripteurs de fichiers à l'aide des appels système read, write, open et close.

## Objectifs

- Apprendre à utiliser les appels système pour lire, écrire, ouvrir et fermer des fichiers ou des descripteurs de fichiers.
- Apprendre à utiliser les fonctions malloc, free et exit de la bibliothèque standard C.
- Apprendre à respecter le style de codage Betty et à documenter son code avec des fichiers README.md.
- Apprendre à utiliser les constantes symboliques (POSIX) plutôt que les nombres lorsque cela a du sens.

## Exigences

- Les éditeurs de texte autorisés sont vi, vim, emacs.
- Tous les fichiers seront compilés sur Ubuntu 20.04 LTS en utilisant gcc, avec les options -Wall -Werror -Wextra -pedantic -std=gnu89.
- Tous les fichiers doivent se terminer par un saut de ligne.
- Un fichier README.md, à la racine du dossier du projet, est obligatoire.
- Le code doit utiliser le style Betty. Il sera vérifié en utilisant betty-style.pl et betty-doc.pl.
- Il n'est pas permis d'utiliser des variables globales.
- Pas plus de 5 fonctions par fichier.
- Les seules fonctions de la bibliothèque standard C autorisées sont malloc, free et exit. Toute utilisation de fonctions comme printf, puts, calloc, realloc, etc. est interdite.
- Les appels système autorisés sont read, write, open, close.
- Il est permis d'utiliser _putchar.
- Il n'est pas nécessaire de pousser _putchar.c, nous utiliserons notre fichier. Si vous le faites, il ne sera pas pris en compte.
- Dans les exemples suivants, les fichiers main.c sont montrés comme des exemples. Vous pouvez les utiliser pour tester vos fonctions, mais vous n'avez pas à les pousser sur votre dépôt (si vous le faites, nous ne les prendrons pas en compte). Nous utiliserons nos propres fichiers main.c à la compilation. Nos fichiers main.c peuvent être différents de ceux montrés dans les exemples.
- Les prototypes de toutes vos fonctions et le prototype de la fonction _putchar doivent être inclus dans votre fichier d'en-tête appelé main.h.
- N'oubliez pas de pousser votre fichier d'en-tête.
- Tous vos fichiers d'en-tête doivent être protégés par des gardes d'inclusion.
- Astuce : préférez toujours utiliser des constantes symboliques (POSIX) plutôt que des nombres lorsque cela a du sens. Par exemple, utilisez read(STDIN_FILENO, ...) plutôt que read(0, ...).

## Tâches

- 0. Tread lightly, she is near :
Écrire une fonction qui lit un fichier texte et l'imprime sur la sortie standard POSIX.

Prototype : ssize_t read_textfile(const char *filename, size_t letters);
où letters est le nombre de lettres qu'il doit lire et imprimer
retourne le nombre réel de lettres qu'il a pu lire et imprimer
si le fichier ne peut pas être ouvert ou lu, retourne 0
si filename est NULL, retourne 0
si write échoue ou n'écrit pas le nombre attendu d'octets, retourne 0

- 1. Under the snow :
Créer une fonction qui crée un fichier.

Prototype : int create_file(const char *filename, char *text_content);
où filename est le nom du fichier à créer et text_content est une chaîne terminée par NULL à écrire dans le fichier
Retourne : 1 en cas de succès, -1 en cas d'échec (le fichier ne peut pas être créé, le fichier ne peut pas être écrit, write "échoue", etc.)
Le fichier créé doit avoir ces permissions : rw-------. Si le fichier existe déjà, ne changez pas les permissions.
si le fichier existe déjà, tronquez-le
si filename est NULL, retourne -1
si text_content est NULL, créez un fichier vide

- 2. Speak gently, she can hear :
Écrire une fonction qui ajoute du texte à la fin d'un fichier.

Prototype : int append_text_to_file(const char *filename, char *text_content);
où filename est le nom du fichier et text_content est la chaîne terminée par NULL à ajouter à la fin du fichier
Retourne : 1 en cas de succès et -1 en cas d'échec
Ne créez pas le fichier s'il n'existe pas
Si filename est NULL, retourne -1
Si text_content est NULL, n'ajoutez rien au fichier. Retourne 1 si le fichier existe et -1 si le fichier n'existe pas ou si vous n'avez pas les permissions requises pour écrire le fichier

- 3. cp :
Écrire un programme qui copie le contenu d'un fichier dans un autre fichier.

Usage : cp file_from file_to
si le nombre d'arguments n'est pas le bon, quittez avec le code 97 et imprimez Usage: cp file_from file_to, suivi d'un saut de ligne, sur l'erreur standard POSIX
si file_to existe déjà, tronquez-le
si file_from n'existe pas, ou si vous ne pouvez pas le lire, quittez avec le code 98 et imprimez Error: Can't read from file NAME_OF_THE_FILE, suivi d'un saut de ligne, sur l'erreur standard POSIX
où NAME_OF_THE_FILE est le premier argument passé à votre programme
si vous ne pouvez pas créer ou si l'écriture vers file_to échoue, quittez avec le code 99 et imprimez Error: Can't write to NAME_OF_THE_FILE, suivi d'un saut de ligne, sur l'erreur standard POSIX
où NAME_OF_THE_FILE est le deuxième argument passé à votre programme
si vous ne pouvez pas fermer un descripteur de fichier, quittez avec le code 100 et imprimez Error: Can't close fd FD_VALUE, suivi d'un saut de ligne, sur l'erreur standard POSIX
où FD_VALUE est la valeur du descripteur de fichier
Les permissions du fichier créé : rw-rw-r--. Si le fichier existe déjà, ne changez pas les permissions.
Vous devez lire 1 024 octets à la fois du fichier_from pour faire moins d'appels système. Utilisez un tampon
Vous avez le droit d'utiliser dprintf
man elf, readelf

- 4. elf :
Écrire un programme qui affiche les informations contenues dans l'en-tête ELF au début d'un fichier ELF.

Usage : elf_header elf_filename
Informations affichées : (ni plus, ni moins, ne pas inclure d'espace final)
Magique
Classe
Données
Version
OS/ABI
Version ABI
Type
Adresse du point d'entrée
Format : le même que readelf -h (version 2.26.1)
Si le fichier n'est pas un fichier ELF, ou en cas d'erreur, quittez avec le code 98 et affichez un message d'erreur complet sur l'erreur standard
Vous avez le droit d'utiliser lseek une fois
Vous avez le droit d'utiliser read au maximum 2 fois à l'exécution
Vous avez le droit d'avoir autant de fonctions que vous voulez dans votre fichier source
Vous avez le droit d'utiliser printf
man elf, readelf
