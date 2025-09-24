# Rapport : Recherche Séquentielle en Langage C

# 1. Introduction

Ce rapport présente et explique un code en langage C permettant d'effectuer une **recherche séquentielle**  dans un tableau d'éléments de type `float`. La recherche séquentielle consiste à parcourir un tableau élément par élément afin de trouver (ou non) la première occurrence d'une valeur recherchée.

# 2. Présentation du code

### Code source (En langage de programmation C)
```c
#include <stdio.h>

int main() {
    int i, n, c=-1;
    float x, t[100];
    printf("Entrer l'element a rechercher: ");
    scanf("%f", &x);
    do{
        printf("Entrer le nombre d'elements du tableau(il doit etre inferieur a 100)\n");
        scanf("%d", &n);
    } while(n >= 100);
    for(i=0; i<n; i++)
    {
        printf("\nEntrer l'element numero %d du tableau: ", i+1);
        scanf("%f", &t[i]);
    }
    for(i=0; i < n; i++)
    {
        if (t[i] == x)
        {
            c = i;
            break;
        }
    }
    if(c != -1)
    {
        printf("L'element recherche se trouve a la position numero %d du tableau", c+1);
    }
    else
    {
        printf("L'element recherche n'a pas ete retrouve dans le tableau");
    }
    return 0;
}
```

---

# 3. Fonctionnement du programme

### a) Saisie de la valeur à rechercher
L'utilisateur est invité à saisir la valeur (`x`) qu'il souhaite rechercher dans le tableau.

### b) Saisie de la taille du tableau
Le programme demande à l'utilisateur de saisir le nombre d'éléments du tableau (`n`), en s'assurant que ce nombre est inférieur à 100 (taille maximale du tableau).

### c) Saisie des éléments du tableau
L'utilisateur saisit ensuite chaque élément du tableau un par un.

### d) Recherche séquentielle
Le programme parcourt le tableau du début à la fin :
- Si l'élément courant est égal à `x`, il mémorise la position (`c`) et arrête la recherche (grâce au `break`).
- Si la boucle termine sans trouver la valeur, `c` reste à -1.

### e) Affichage du résultat
- Si `c != -1`, la position de l'élément est affichée (en commençant à 1).
- Sinon, un message indique que la valeur n'a pas été trouvée.

---

## 4. Exemple d'exécution

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

---

## 5. Analyse et remarques

- **Robustesse** : Le programme vérifie que la taille du tableau n’excède pas 99 éléments de sorte à ce qu'il n'y ai pas d'érreur.
- **Limites** :
  - La recherche s’arrête à la première occurrence.
  - Le test d’égalité sur les flottants (`float`) peut être imprécis à cause de l’arithmétique des flottants.
  - La taille maximale du tableau est fixée à 100.
- **Améliorations possibles** :
  - Gérer la recherche de toutes les occurrences.
  - Proposer une comparaison de flottants avec une "marge d’erreur" (epsilon).
  - Permettre la saisie automatique du tableau.

---

## 6. Conclusion

Ce code illustre parfaitement la méthode de recherche séquentielle, simple mais efficace pour de petits tableaux ou lorsqu'il n'y a pas d'exigence de performance particulière. Elle est facile à comprendre et à implémenter, mais peu adaptée aux grands ensembles de données.

