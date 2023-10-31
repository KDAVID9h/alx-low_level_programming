# Projet ALX Low-Level Programming - Allocation dynamique de mémoire

## Table des matières
1. [Description](#description)
2. [Exigences](#exigences)
3. [Tâches](#tâches)
4. [Compilation](#compilation)
5. [Auteurs](#auteurs)

## Description
Ce projet consiste à implémenter des fonctions en C qui utilisent l'allocation dynamique de mémoire à l'aide de `malloc` et la libération de mémoire avec `free`. Chaque tâche correspond à une fonction spécifique. Les détails de chaque tâche sont répertoriés dans la section des tâches.

## Exigences
- Les fichiers source C doivent être compilés sous Ubuntu 20.04 LTS en utilisant le compilateur GCC avec les options suivantes : -Wall -Werror -Wextra -pedantic -std=gnu89.
- Les fichiers source C ne doivent pas contenir de variables globales.
- Chaque fichier source C ne doit contenir au plus 5 fonctions.
- Les seules fonctions de la bibliothèque standard C autorisées sont `malloc` et `free`. L'utilisation de fonctions telles que `printf`, `puts`, `calloc`, `realloc`, etc. est interdite.
- Le projet doit respecter la norme de codage Betty.

## Tâches
- [Task 0: Float like a butterfly, sting like a bee](./0-create_array.c)
  - Écrivez une fonction pour créer un tableau de caractères initialisé avec un caractère spécifique.
- [Task 1: The woman who has no imagination has no wings](./1-strdup.c)
  - Écrivez une fonction pour dupliquer une chaîne de caractères.
- [Task 2: He who is not courageous enough to take risks will accomplish nothing in life](./2-str_concat.c)
  - Écrivez une fonction pour concaténer deux chaînes de caractères.
- [Task 3: If you even dream of beating me you'd better wake up and apologize](./3-alloc_grid.c)
  - Écrivez une fonction pour allouer un tableau bidimensionnel d'entiers et l'initialiser à zéro.
- [Task 4: It's not bragging if you can back it up](./4-free_grid.c)
  - Écrivez une fonction pour libérer un tableau bidimensionnel précédemment alloué.

## Compilation
Pour compiler les fichiers source C, vous pouvez utiliser les commandes suivantes :

```shell
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -o task0 0-create_array.c 0-main.c
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -o task1 1-strdup.c 1-main.c
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -o task2 2-str_concat.c 2-main.c
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -o task3 3-alloc_grid.c 3-main.c
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -o task4 4-free_grid.c 4-main.c
```

## Auteurs
- HOGNON David

