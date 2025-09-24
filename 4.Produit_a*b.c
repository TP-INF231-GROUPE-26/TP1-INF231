#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int i, j;
    int a, b;
    int p = 0;
    
    printf("entrer deux valeurs:\n");
    scanf("%d %d", &a, &b);
    
    if (a == 0 || b == 0) {
        printf("Le produit est : 0\n");
    } else {
        // Le calcul se fait ici si a et b sont non nuls
        for (j = 1; j <= b; j++) {
            for (i = 1; i <= a; i++) {
                p += 1;
            }
        }
        printf("le produit est:%d\n", p);
    }
    
    return 0;
}
