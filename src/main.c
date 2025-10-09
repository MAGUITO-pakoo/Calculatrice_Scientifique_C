#include <stdio.h>
#include <stdlib.h>
#include "operations.h"
#include "puissance.h"
#include "trigo.h"
#include "utils.h"

int main()
{
    debut:
    int n, choix, run;
    unsigned int a, b;
    int x, y;

    run = 1;
    while(run == 1){
        clearScreen();
        printf("===CALCULATRICE SCIENTIFIQUE===\n");
        printf("Faire un choix\n1) Multiplication\n2) Factoriel\n3) PGCD\n4) PPCM\n5) Soustraction\n6) Racine Carree\n99) Quitter\n>> ");
        scanf("%d", &choix);
        choix = (int)choix;

        switch (choix)
        {
        case 1:
            printf("Entrer le premier nombre\n>> ");
            scanf("%d", &x);
            printf("Entrer le deuxieme nombre\n>> ");
            scanf("%d", &y);
            printf("%d * %d = %d\n", x, y, multiplication(x, y));
            break;
        case 2:
            printf("Entrer un nombre\n>> ");
            scanf("%d", &n);
            printf("%d! = %d\n", n, factoreil(n));
            break;
        case 3:
            printf("Entrer le premier nombre\n>> ");
            scanf("%d", &a);
            printf("Entrer le deuxieme nombre\n>> ");
            scanf("%d", &b);
            printf("PGCD(%d, %d) = %d\n", a, b, pgcd(a, b));
            break;
        case 4:
            printf("Entrer le premier nombre\n>> ");
            scanf("%d", &a);
            printf("Entrer le deuxieme nombre\n>> ");
            scanf("%d", &b);
            printf("PPCM(%d, %d) = %d\n", a, b, ppcm(a, b));
            break;
        case 5:
            printf("Entrer le premier nombre\n>> ");
            scanf("%d", &x);
            printf("Entrer le deuxieme nombre\n>> ");
            scanf("%d", &y);
            printf("%d - %d = %d\n", x, y, soustraction(x, y));
            break;
        case 6:
            printf("Entrer un nombre\n>> ");
            scanf("%d", &n);
            printf("sqrt(%d) = %d\n", n, racineCarree(n));
            break;
        case 99:
            run = 0;
            break;
        default:
            system("clear");
            goto debut;
        }
    }
pauseScreen();  
    return 0;
}



/* int main() {
    int a, b, resultat;

    
    printf("Entrez le premier nombre : ");
    scanf("%d", &a);

    printf("Entrez le deuxième nombre : ");
    scanf("%d", &b);

    
    resultat = somme(a, b);


    printf("La somme de %d et %d est %d\n", a, b, resultat);

    return 0;
}
 */