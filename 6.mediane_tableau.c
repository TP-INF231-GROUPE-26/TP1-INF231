#include <stdio.h>
#include <stdlib.h>

int main() {
    int taille;

    printf("Entrez la taille du tableau : ");
    scanf("%d", &taille);

    if (taille <= 0) {
        printf("La taille du tableau doit etre un nombre positif.\n");
        return 1;
    }

    int tab[taille];
    printf("Veuillez remplir le tableau :\n");
    for (int i = 0; i < taille; i++) {
        printf("Entrez la valeur numero %d : ", i + 1);
        scanf("%d", &tab[i]);
    }

    printf("\nTableau original : \n");
    for (int i = 0; i < taille; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");

    // Tri par selection
    int min, temp;
    for (int i = 0; i < taille - 1; i++) {
        min = i;
        for (int j = i + 1; j < taille; j++) {
            if (tab[j] < tab[min]) {
                min = j;
            }
        }
        // Echange des elements
        temp = tab[i];
        tab[i] = tab[min];
        tab[min] = temp;
    }

    printf("\nTableau trie : \n");
    for (int i = 0; i < taille; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");

    // Calcul et affichage de la mediane
    // Si le nombre d'elements est impair
    if (taille % 2 != 0) { 
        int mediane = tab[taille / 2];
        printf("\nLa mediane du tableau est : %d\n", mediane);
    } else { 
    // Si le nombre d'elements est pair
        double mediane = (double)(tab[taille / 2 - 1] + tab[taille / 2]) / 2.0;
        printf("\nLa mediane du tableau est : %.2f\n", mediane);
    }

    return 0;
}
