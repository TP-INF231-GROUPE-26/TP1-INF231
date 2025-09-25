#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, m;
    printf("Entrer la taille du vecteur (n) et la colonne de la matrice (m) :\n");
    scanf("%d %d", &n, &m);

    int V[n], M[n][m], R[m];

    printf("Vecteur V :\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &V[i]);
    }

    printf("Matrice M :\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &M[i][j]);
        }
    }

    for (int j = 0; j < m; j++) {
        R[j] = 0;
        for (int i = 0; i < n; i++) {
            R[j] += V[i] * M[i][j];
        }
    }

    printf("Vecteur Resultat : ");
    for (int j = 0; j < m; j++) printf("%d ", R[j]);
    printf("\n");

    return 0;
}
