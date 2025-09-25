Rapport des programme (8 et 9) : Produit vectoriel et Produit vecteur × matrice

Introduction

Le langage C permet de réaliser des opérations mathématiques de manière rapide et efficace grâce à l’utilisation de structures comme les tableaux et les boucles.
Le programme présenté ici met en œuvre plusieurs fonctions de calcul :
	1.	Le produit d’un vecteur par une matrice.
	2.	Le produit vectoriel de deux vecteurs en 3 dimensions.
	3.	L’inversion d’un tableau.
	4.	Le calcul de la médiane d’un tableau.

Ce rapport se concentre particulièrement sur les deux premières opérations, à savoir le produit vecteur × matrice et le produit vectoriel, qui sont fondamentales en algèbre linéaire et en géométrie vectorielle.

Développement

1. Produit vecteur × matrice
	•	Principe :
Le programme demande à l’utilisateur la taille du vecteur (n) et le nombre de colonnes de la matrice (m).
Ensuite, il lit les valeurs du vecteur et de la matrice.
À l’aide de boucles imbriquées, il calcule le vecteur résultat R de dimension m.
	•	Fonctionnement :
Chaque élément R[j] du résultat est obtenu en effectuant la somme des produits V[i] \times M[i][j] pour tout i.
Le résultat est affiché à l’écran sous forme de vecteur.
	•	Utilité :
Cette opération est utilisée en transformations linéaires, intelligence artificielle et résolution de systèmes d’équations.


2. Produit vectoriel
	•	Principe :
Le programme demande à l’utilisateur deux vecteurs A et B en trois dimensions.
Il applique la formule mathématique du produit vectoriel pour obtenir un nouveau vecteur C.
	•	Fonctionnement :
Le calcul se fait par :
C = (a_2b_3 - a_3b_2, \; a_3b_1 - a_1b_3, \; a_1b_2 - a_2b_1)
	•	Utilité :
Le produit vectoriel est employé en physique (moment d’une force), en géométrie (calcul de normales à un plan) et en graphisme 3D (orientation des surfaces).


3. Autres fonctionnalités

Même si ce rapport se concentre sur les deux principales opérations, le programme permet également :
	•	d’inverser un tableau (permutation des éléments du début avec ceux de la fin) ;
	•	de calculer la médiane après avoir trié les éléments du tableau.

Ces fonctionnalités montrent la polyvalence de l’algorithme et l’importance de la manipulation des tableaux en C.

Conclusion

En résumé, le programme implémente plusieurs opérations fondamentales de manipulation de vecteurs et de tableaux :
	•	Le produit vecteur × matrice permet de combiner un vecteur et une matrice pour obtenir un nouveau vecteur, très utile en algèbre linéaire.
	•	Le produit vectoriel permet de déterminer un vecteur perpendiculaire à deux vecteurs donnés, indispensable en géométrie et en physique.
	•	Les fonctions supplémentaires d’inversion et de médiane enrichissent le programme en donnant une vision pratique de la manipulation de données numériques.

Ce travail illustre donc l’importance de la programmation en C pour résoudre des problèmes mathématiques et algorithmiques, et constitue une bonne base pour des applications plus complexes en sciences et en ingénierie.

