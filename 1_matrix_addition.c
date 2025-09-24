#include <stdio.h>

int main(){
    int a1, a2, b1, b2, i, j, a[100][100], b[100][100], c[100][100];
    do
    {
        printf("Les deux matrices a additionner doivent avoir le meme nombre de colonne et de ligne, et chacun de ces nombre doit etre inferieure a 100!\n");
        printf("Entrer le nombre de ligne et de colonne de la premiere matrice a additionner.\n");
        scanf("%d%d", &a1, &a2);
        printf("Entrer le nombre de ligne et de colonne de la deuxieme matrice a additionner.\n");
        scanf("%d%d", &b1, &b2);
    } while(a1 != b1 || a2 != b2 || a1 >= 100 || b1 >= 100 || a2 >= 100 || b2 >= 100);
    for(i=0 ; i < a1 ; i++)
    {
        for(j=0 ; j < a2 ; j++)
        {
            printf("Entrer l'element de la ligne numero %d, de la colonne numero %d de la premiere matrice\n",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n");
    for(i=0 ; i < b1 ; i++)
    {
        for(j=0 ; j < b2 ; j++)
        {
            printf("Entrer l'element de la ligne numero %d, de la colonne numero %d de la deuxieme matrice\n",i+1,j+1);
            scanf("%d",&b[i][j]);
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    for(i=0 ; i < a1 ; i++)
    {
        for(j=0 ; j < a2 ; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}
