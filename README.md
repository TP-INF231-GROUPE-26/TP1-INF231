Projet 1 & 2: Addition et Multiplication de deux Matrices

    Description : Ce programme permet d'additionner et de multiplier deux matrices de même taille. Il demande à l'utilisateur de saisir les dimensions des matrices et valide si elles sont conformes aux règles de l'addition matricielle (même nombre de lignes et de colonnes, et une taille inférieure à 100) pour l'addition  et les règles de la multiplication matriciellle pour la multiplication. Ensuite, il lit les éléments des deux matrices, les additionnes ou les multiplies, et affiche la matrice résultat (résultat de l'opération).

    Fonctionnalités : Validation de la taille des matrices, saisie des éléments, addition matricielle, affichage du résultat.

    Complexité Temporelle : O(n∗m). Le programme parcourt tous les éléments de la matrice une seule fois pour la saisie et une deuxième fois pour l'addition et l'affichage. Donc, si n est le nombre de lignes et m est le nombre de colonnes, la complexité est proportionnelle au nombre total d'éléments, soit n×m.

    Complexité Spatiale : 3 * O(n∗m). Le programme utilise trois tableaux bidimensionnels de taille n×m (a, b et c) pour stocker les deux matrices d'entrée et la matrice résultat. L'espace mémoire requis est donc 3 fois la taille de la matrice.

Projet 3 : Recherche Linéaire dans un Tableau

    Description : Ce programme effectue une recherche linéaire pour trouver la position d'un élément donné dans un tableau. Il demande à l'utilisateur l'élément à rechercher, la taille du tableau, puis les éléments du tableau. Il parcourt ensuite le tableau séquentiellement pour trouver l'élément.

    Fonctionnalités : Recherche d'un élément, affichage de sa position ou d'un message d'erreur.
                    Avec n, la taille du tableau.
    Complexité Temporelle : O(n). Dans le pire des cas, le programme doit parcourir tout le tableau de taille n pour trouver l'élément (s'il est le dernier ou s'il n'est pas présent).
    
    Complexité Spatiale : O(n) + 3. Le programme utilise un tableau de taille n pour stocker les éléments du tableau + 3 du à l'utilisation de trois variables pour faciliter la recherche. 

Projet 4 : Produit par Additions Répétées

    Description : Ce programme calcule le produit de deux nombres entiers sans utiliser l'opérateur *. Il simule la multiplication en utilisant une boucle imbriquée pour effectuer des additions répétées.

    Fonctionnalités : Saisie de deux entiers, calcul du produit, gestion du cas où l'une des valeurs est zéro.

    Complexité Temporelle : O(a∗b). Le programme a deux boucles imbriquées : la première s'exécute b fois, et la seconde a fois. Le nombre total d'opérations est donc le produit des deux nombres.

    Complexité Spatiale : O(1). Le programme utilise un nombre fixe de variables (a, b, p, i, j) quel que soit les valeurs d'entrée. L'espace mémoire est constant.

Projet 5 : Vérification de l'Ordre d'un Tableau

    Description : Ce programme vérifie si un tableau d'entiers est trié par ordre croissant, décroissant, ou s'il n'est pas trié du tout.

    Fonctionnalités : Saisie d'un tableau, vérification de l'ordre, affichage du résultat.

    Complexité Temporelle : O(n). Le programme parcourt le tableau une seule fois. La complexité est donc linéaire.

    Complexité Spatiale : O(n). L'espace mémoire est nécessaire pour stocker les éléments du tableau de taille n.

Projet 6 : Calculer la Médiane

    Description : Ce programme trie un tableau d'entiers en utilisant l'algorithme de tri par sélection, puis calcule et affiche la médiane. Il gère le cas des tableaux de taille paire et impaire.

    Fonctionnalités : Saisie d'un tableau, tri par sélection, calcul de la médiane.

    Complexité Temporelle : O(n2). Le tri par sélection est un algorithme quadratique. Il utilise une double boucle imbriquée où chaque élément est comparé à tous les autres.

    Complexité Spatiale : O(n). L'espace mémoire est proportionnel à la taille du tableau. Le tri s'effectue sur place, ce qui n'ajoute pas d'espace supplémentaire majeur.

Projet 7 : Inversion d'un Tableau

    Description : Ce programme inverse l'ordre des éléments d'un tableau et stocke le résultat dans un nouveau tableau. Il demande à l'utilisateur de saisir la taille du tableau et ses éléments.

    Fonctionnalités : Saisie d'un tableau, inversion de l'ordre, affichage du tableau inversé.

    Complexité Temporelle : O(n). Le programme parcourt le tableau une seule fois pour inverser les éléments.

    Complexité Spatiale : O(n). Le programme utilise un tableau d'entrée et un nouveau tableau de même taille pour stocker le résultat inversé, ce qui double l'espace requis.

Projet 8 : Produit Vectoriel

    Description : Ce programme calcule le produit vectoriel de deux vecteurs tridimensionnels. Il lit les coordonnées de deux vecteurs, A et B, et calcule le vecteur résultat C en utilisant la formule standard du produit vectoriel.

    Fonctionnalités : Saisie de deux vecteurs 3D, calcul du produit vectoriel, affichage du vecteur résultat.

    Complexité Temporelle : O(1). Les calculs sont effectués en un nombre fixe d'opérations, indépendamment de la taille des vecteurs (qui est fixée à 3).

    Complexité Spatiale : O(1). Le programme utilise un nombre fixe de variables pour stocker les trois vecteurs 3D.

Projet 9 : Produit Matrice-Vecteur

    Description : Ce programme calcule le produit d'une matrice et d'un vecteur. Il demande à l'utilisateur de saisir les dimensions d'un vecteur et d'une matrice, puis les éléments de chacun. Il effectue le calcul du produit et affiche le vecteur résultant.

    Fonctionnalités : Saisie d'un vecteur et d'une matrice, validation des dimensions (implicite dans la structure du code), calcul du produit, affichage du résultat.

    Complexité Temporelle : O(n∗m). Pour calculer chaque élément du vecteur résultat, le programme doit parcourir la colonne correspondante de la matrice, ce qui prend n opérations. Comme il y a m colonnes, la complexité totale est O(n∗m).

    Complexité Spatiale : O(n∗m). L'espace est nécessaire pour stocker le vecteur d'entrée, la matrice, et le vecteur résultat. L'espace est dominé par la matrice, donc la complexité spatiale est proportionnelle à sa taille.
