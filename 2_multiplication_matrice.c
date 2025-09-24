#include <stdio.h>

int main(){
    int a1, a2, b1, b2, i, j, x, a[100][100], b[100][100], c[100][100];
    do
    {
        printf("Les deux matrices a multiplier doivent avoir un nombre de ligne et un nombre de colonne inferieure a 100 chacun!\n");
        printf("Le nombre de colonnes de la premiere matrice doit etre egal au nombre de lignes de la deuxieme matrice");
        printf("Entrer le nombre de ligne et de colonne de la premiere matrice a multiplier.\n");
        scanf("%d%d", &a1, &a2);
        printf("Entrer le nombre de ligne et de colonne de la deuxieme matrice a multiplier.\n");
        scanf("%d%d", &b1, &b2);
    } while(a2 != b1 || a1 >= 100 || b1 >= 100 || a2 >= 100 || b2 >= 100);
    for(i=0 ; i < a1 ; i++)
    {
        for(j=0 ; j < a2 ; j++)
        {
            printf("Entrer l'element de la ligne numero %d, colonne numero %d de la premiere matrice\n",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n");
    for(i=0 ; i < b1 ; i++)
    {
        for(j=0 ; j < b2 ; j++)
        {
            printf("Entrer l'element de la ligne numero %d, colonne numero %d de la deuxieme matrice\n",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
    }
    printf("\nLe resultat est le suivant:\n");
    for(i=0 ; i < a1 ; i++)
    {
        for(j=0 ; j < b2 ; j++)
        {
            c[i][j] = 0;
            for(x=0; x < a2; x++)
            {
                c[i][j] += a[i][x] * b[x][j];
            }
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}