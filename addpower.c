#include <stdio.h>


int somme(int x, int y) {
    return x + y;
}

int puissance(int base, int exposant) {
    int resultat = 1;
    for(int i = 0; i < exposant; i++) {
        resultat = resultat * base;
    }
    return resultat;
}

int main() {
    int a, b, resultat;

    
    printf("Entrez le premier nombre : ");
    scanf("%d", &a);

    printf("Entrez le deuxième nombre : ");
    scanf("%d", &b);

    
    resultat = somme(a, b);


    printf("La somme de %d et %d est %d\n", a, b, resultat);

    return 0;
}
