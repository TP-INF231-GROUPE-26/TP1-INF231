### Rapport TP1 (Travqil à faire): Ecrire un programme de Recherche Séquentielle en Langage C.

### 1. Introduction

Ce rapport présente et explique un code en langage C permettant d'effectuer une **recherche séquentielle**  dans un tableau d'éléments de type `float`. La recherche séquentielle consiste à parcourir un tableau élément par élément afin de trouver (ou non) la première occurrence d'une valeur recherchée et de renvoyer l'indice de la case si cet élément est trouvé.

#### 2. Fonctionnement du programme

##### a) Saisie de la valeur à rechercher
L'utilisateur est invité à saisir la valeur (`x`) qu'il souhaite rechercher dans le tableau.

##### b) Saisie de la taille du tableau
Le programme demande à l'utilisateur de saisir le nombre d'éléments du tableau (`n`), en s'assurant que ce nombre est inférieur à 100 (taille maximale du tableau).

##### c) Saisie des éléments du tableau
L'utilisateur saisit ensuite chaque élément du tableau un par un.

##### d) Recherche séquentielle
Le programme parcourt le tableau du début à la fin :
- Si l'élément courant est égal à `x`, il mémorise la position (`c`) et arrête la recherche (grâce au `break`).
- Si la boucle termine sans trouver la valeur, `c` reste à -1.

##### e) Affichage du résultat
- Si `c != -1`, la position de l'élément est affichée.
- Sinon, un message indique que la valeur n'a pas été trouvée.

---
#### 3. Exemple d'exécution

```
Entrer l'element a rechercher: 5.5
Entrer le nombre d'elements du tableau(il doit etre inferieur a 100)
4

Entrer l'element numero 1 du tableau: 2
Entrer l'element numero 2 du tableau: 5.5
Entrer l'element numero 3 du tableau: 7
Entrer l'element numero 4 du tableau: 8
L'element recherche se trouve a la position numero 2 du tableau
```

#### 4. Conclusion

Ce code illustre  la méthode de recherche séquentielle, simple mais efficace. Elle est facile à comprendre et à implémenter. 
