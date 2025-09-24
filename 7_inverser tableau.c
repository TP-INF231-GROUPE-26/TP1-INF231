#include<stdio.h>
#include<stdlib.h>


int main() {
    int n,t[50];
    
    printf("\n\nL'exercice consiste a inverse les valeurs d'un tableau.\n\n");
    printf("Entrez la taille du tableau : ");
    scanf("%d", &n);
    for ( int i = 0; i < n; i++)
    {
        printf("Tableau T[%d] = ",i);
        scanf("%d", &t[i]);
    }
    int i=n-1,j=0, T[n];
   while (i>=0)
   {
    T[j]=t[i];

    j++;
    i--;
   }
   for ( j = 0; j< n; j++)
   {
    printf(" T'[%d] = %d ;",j,T[j]);
   }
   

   



    return 0;
}