#include<stdio.h>
int T[100],n,Croissant = 1,Decroissant = 1;;
int main()
{
	printf("Entrez le nombre d'elements du tableau (max 100):\n");
    
    do {
        scanf("%d", &n);
        if (n <= 0 || n > 100) {
            printf("Erreur: Le nombre doit etre entre 1 et 100. Reessayez:\n");
        }
    } while (n <= 0 || n > 100);


     printf("Entrez les valeurs du tableau :\n");
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &T[i]);
    }

    for (int i = 0; i < n - 1; i++) {
        if (T[i] > T[i + 1]) {
            Croissant = 0;
        }
        if (T[i] < T[i + 1]) {
            Decroissant = 0;
        }
    }

    if (Croissant) {
        printf("Le tableau est classe par ordre croissant.\n");
    } else if (Decroissant) {
        printf("Le tableau est classe par ordre decroissant.\n");
    } else {
        printf("Le tableau n'est pas classe.\n");
    }

    return 0;
}
