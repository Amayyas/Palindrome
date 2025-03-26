# Palindrome - Iterated Turning Over Palindromes

## Description
Ce projet consiste à déterminer si un nombre peut devenir un palindrome après un certain nombre d'itérations d'un processus de retournement et d'addition. Un palindrome est un nombre qui se lit de la même manière dans les deux sens.

## Fonctionnalités
- Calcul du plus petit nombre d'itérations nécessaires pour qu'un nombre devienne un palindrome.
- Support des bases de numération entre 2 et 10.
- Gestion des erreurs et affichage des messages d'erreur appropriés.

## Compilation et Exécution
### Compilation
Utiliser `make` pour compiler le projet :
```sh
make
```
Cela générera un exécutable `palindrome`.

### Exécution
Utilisation de l'exécutable :
```sh
./palindrome -n <nombre> [-b <base>] [-imin <min_iterations>] [-imax <max_iterations>]
./palindrome -p <palindrome> [-b <base>] [-imin <min_iterations>] [-imax <max_iterations>]
```

#### Options disponibles
- `-n <nombre>` : Nombre à transformer en palindrome.
- `-p <palindrome>` : Palindrome cible. Affiche toutes les valeurs possibles de `n` qui mènent à ce palindrome.
- `-b <base>` : Base numérique dans laquelle effectuer les calculs (2 à 10, par défaut : 10).
- `-imin <min_iterations>` : Nombre minimum d'itérations (0 par défaut).
- `-imax <max_iterations>` : Nombre maximum d'itérations (100 par défaut).

### Exemples d'exécution
```sh
./palindrome -n 4782 -b 10
# Sortie : 4782 leads to 46464 in 3 iteration(s) in base 10

./palindrome -p 363 -b 10
# Sortie : liste des nombres menant à 363 en base 10
```

## Fichiers
- `src/main.c` : Contient la fonction principale du programme.
- `src/help.c` : Affiche l'aide et les instructions d'utilisation.
- `src/params.c` : Gère la validation et le traitement des paramètres.
- `src/parser.c` : Parse les arguments de la ligne de commande.
- `src/parse_flags.c` : Fonctions de parsing pour chaque flag spécifique.
- `src/util.c` : Fonctions utilitaires pour les opérations de palindrome.
- `Makefile` : Permet de compiler le projet facilement.
- `my.h` : Fichier d'en-tête contenant les déclarations de structures et fonctions.

## Gestion des erreurs
- Si un argument invalide est fourni, le programme affiche `invalid argument` et quitte avec le code d'erreur `84`.
- Si aucune solution n'est trouvée, le programme affiche `no solution` mais ne considère pas cela comme une erreur.
