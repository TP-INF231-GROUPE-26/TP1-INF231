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